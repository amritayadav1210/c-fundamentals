#include <stdio.h>
#include <stdlib.h>

// Node structure
struct Node {
    int data;
    struct Node* next;
};

// Global top pointer
struct Node* top = NULL;

// Function prototypes
void push(int value);
int pop();
int peek();
void display();

int main() {
    system("cls");
    printf("--- Stack Linked List Implementation ---\n");
   // int value;
    // Perform Push operations
   // printf("Enter the value you want to add");
    //scanf("%d",&value);
    push(10);
    push(20);
    push(30);

    // Perform Peek operation
    printf("Current top element: %d\n", peek());

    // Perform Pop operations
    printf("Popped element: %d\n", pop());
    printf("Popped element: %d\n", pop());

    // Peek after popping
    printf("Top element after popping two items: %d\n", peek());

    // Final push
    push(40);
    printf("Final top element: %d\n", peek());

    return 0;
}

// Push implementation
void push(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (!newNode) {
        printf("Stack Overflow: Memory allocation failed\n");
        return;
    }
    newNode->data = value;
    newNode->next = top;
    top = newNode;
    printf("Successfully pushed %d to the stack\n", value);
}

// Pop implementation
int pop() {
    if (top == NULL) {
        printf("Stack Underflow: No elements to pop\n");
        return -1;
    }
    struct Node* temp = top;
    int poppedValue = temp->data;
    top = top->next;
    free(temp);
    return poppedValue;
}

// Peek implementation
int peek() {
    if (top == NULL) {
        printf("Stack is empty\n");
        return -1;
    }
    return top->data;
}

void display() {
    struct Node* temp = top;
    
    // Check if the stack is empty
    if (temp == NULL) {
        printf("Stack is empty. Nothing to display.\n");
        return;
    }

    printf("Stack elements (Top to Bottom): ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next; // Move to the next node
    }
    printf("NULL\n");
}


