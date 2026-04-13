#include <stdio.h>
#include <stdlib.h>

#define MAX 100

struct Queue {
    int items[MAX];
    int front;
    int rear;
};
//s is a pointer storing the address of a queue(like a node pointer)
void initQueue(struct Queue* s) {
    s->front = 0;
    s->rear = -1;
}

int isFull(struct Queue* s) {
   /* if(s-> rear == MAX - 1)
    return 1;
    else
    return 0;*/
    //directly returning the result
    return s-> rear == MAX - 1; 

}

int isEmpty(struct Queue* s) {
    return s->rear == -1;
}

//add == enqueue
void enqueue(struct Queue* s, int value) {
    printf("\n--add performed--:%d",value);
    if (isFull(s)) {
        printf("Queue Overflow/Full!\n");
    } else {
        //by++ space is made for adding the value
        (s->rear)++;
        //value is added from back(rear)  position
        s->items[s->rear] = value;
    }
}
//delete == dequeue
int dequeue(struct Queue* s) {
    printf("\n--dequeue  performed--");
    if (isEmpty(s)) {
        printf("Queue Underflow/Empty!\n");
        return -1;
    } else {
        //removing from front
        int removedItem = s->items[s->front];
        //loop for shifting elements
        for(int i=s->front+1;i<=s->rear;i++){
            s->items[i-1] = s->items[i];
        }
        //-- because element is deleted
        (s->rear)--;
        return removedItem;
    }
}

// Peek operation
int frontElement(struct Queue* s) {
    printf("\n--frontElement performed--");
    
    if (isEmpty(s)) {
        printf("Queue is empty.\n");
        return -1;
    }
    return s->items[s->front];
}

//display()
void display(struct Queue* s){
    printf("\n\n  |    |");
    if (isEmpty(s)) {
        printf("Queue is empty.\n");
        return;
    }

    int i = s->front;
    printf("\n  | %2d | <-- front",s->items[i]);
    i++;
    while(i<= s->rear){
        printf("\n  | %2d |",s->items[i]);
        i++;
    }
    printf( "<-- rear",s->items[i-1]);
    printf("\n----------\n");
    
}

int main() {
    system("cls"); 
    
    struct Queue myQueue;
    
    initQueue(&myQueue);

    // 1. Test Pushing

    display(&myQueue);
    enqueue(&myQueue, 10);
    display(&myQueue);
    enqueue(&myQueue, 20);
     display(&myQueue);
    enqueue(&myQueue, 30);
     display(&myQueue);
    enqueue(&myQueue, 40);
     display(&myQueue);
    enqueue(&myQueue, 15);
    
    display(&myQueue);


    // 2. Test Peeking
    printf("Current top element is: %d\n", frontElement(&myQueue));

    // 3. Test Popping
    dequeue(&myQueue);
    display(&myQueue);
    dequeue(&myQueue);
    display(&myQueue);

    // 4. Final state
    printf("Top element after pops: %d\n", frontElement(&myQueue));
    display(&myQueue);

    return 0;
}


