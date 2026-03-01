#include <stdio.h>
#define MAX 100

struct Stack {
    int items[MAX];
    int top;
};

void initStack(struct Stack* s) {
    s->top = -1;
}

int isFull(struct Stack* s) {
    return s->top == MAX - 1;
}

int isEmpty(struct Stack* s) {
    return s->top == -1;
}

void push(struct Stack* s, int value) {
    printf("\n--push performed--:%d",value);
    if (isFull(s)) {
        printf("Stack Overflow!\n");
    } else {
        (s->top)++;
        s->items[s->top] = value;
    }
}

int pop(struct Stack* s) {
    printf("\n--pop  performed--");
    if (isEmpty(s)) {
        printf("Stack Underflow!\n");
        return -1;
    } else {
        int removedItem = s->items[s->top];
        (s->top)--;
        return removedItem;
    }
}

// Peek operation
int peek(struct Stack* s) {
    printf("\n--peek performed--");
    
    if (isEmpty(s)) {
        printf("Stack is empty.\n");
        return -1;
    }
    return s->items[s->top];
}

//display()
void display(struct Stack* s){
    printf("\n\n  |    |");
    if (isEmpty(s)) {
        printf("Stack is empty.\n");
    }

    int i = s->top;
    printf("\n  | %d | <-- top",s->items[i]);
    i--;
    while(i>=0){
        printf("\n  | %d |",s->items[i]);
        i--;
    }
    printf("\n----------\n");
    
}

int main() {

    struct Stack myStack;
    initStack(&myStack);

    // 1. Test Pushing
    push(&myStack, 10);
    push(&myStack, 20);
    push(&myStack, 30);
    display(&myStack);


    // 2. Test Peeking
    printf("Current top element is: %d\n", peek(&myStack));

    // 3. Test Popping
    pop(&myStack);
    display(&myStack);
    pop(&myStack);
    display(&myStack);

    // 4. Final state
    printf("Top element after pops: %d\n", peek(&myStack));
    display(&myStack);

    return 0;
}


