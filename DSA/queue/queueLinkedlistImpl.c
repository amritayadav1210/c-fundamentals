#include <stdio.h>
#include <stdlib.h>

// Node structure
struct Node
{
    int data;
    struct Node *next;
};

// Global top pointer
struct Node *front = NULL;
struct Node *rear = NULL;

// add == enqueue
void enqueue(int value)
{
    printf("\n--enqueue performed--:%d", value);
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    // it means newnode not there [if (newNode == NULL)]
    if (!newNode)
    {
        printf("Queue Overflow/Full!\n");
    }
    else
    {
        
        newNode->data = value;
        if (rear == NULL)
        {
            front = newNode;
        }
        else
        {
            rear->next = newNode;
        }
        rear = newNode;
    }
}
// delete == dequeue
int dequeue()
{
    printf("\n--dequeue  performed--");
    if (rear == NULL)
    {
        printf("Stack Underflow: No elements to pop\n");
        return -1;
    }
    struct Node *temp = front;
    int poppedValue = temp->data;
    front = front->next;
    if(front == NULL){
        rear = NULL;
    }
    free(temp);
}

// display()
void display()
{
    printf("\n\n  |    |");
    if (rear == NULL)
    {
        printf("Queue is empty.\n");
        return;
    }

    struct Node *currentNode = front;
    struct Node *prevNode = NULL;

    printf("\n  | %2d | <-- front", currentNode->data);
    prevNode = currentNode;
    currentNode = currentNode->next;
    while (currentNode != NULL)
    {
        printf("\n  | %2d |", currentNode->data);
        prevNode = currentNode;
        currentNode = currentNode->next;
    }
    printf( " <-- rear",prevNode->data);
    printf("\n----------\n");
}

int main()
{
    system("cls");

    // 1. Test Pushing
    display();
    enqueue(10);
    display();
    enqueue(20);
    display();
    enqueue(30);
    display();
    enqueue(40);
    display();
    enqueue(15);

    display();

    // 3. Test Popping
    dequeue();
    display();
    dequeue();
    display();

    // 4. Final state
    dequeue();
    display();
    dequeue();
    display();
    dequeue();
    display();
    dequeue();
    display();

    return 0;
}
