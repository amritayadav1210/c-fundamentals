#include <stdio.h>
#include <stdlib.h>


struct Node {
    int data;
    struct Node* next;
};

struct Node* top = NULL;

// --- Function Prototypes ---
void push(int value); // Core logic
void create();        // User-defined input
void pop();
void peek();
void display();

int main() {
    int choice;
    while (1) {
        printf("\n--- STACK MENU ---");
        printf("\n1. Push\n2. Pop \n3. Peek\n4. Display\n5. Exit)");
       
        printf("\n------------------");
        printf("\nEnter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: create(); break;
            case 2: pop(); break;
            case 3: peek(); break;
            case 4: display(); break;
            case 5: exit(0);
            default: printf("Invalid Choice!\n");
        }
    }
    return 0;
}

// 1. Core Push Logic (reusable)
void push(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Stack Overflow! Memory allocation failed.\n");
        return;
    }
    newNode->data = value;
    newNode->next = top;
    top = newNode;
}

// 2. User-Defined Create (calls push)
void create() {
    int val;
    printf("Enter value to push: ");
    scanf("%d", &val);
    push(val); // Using the core push function
    printf("%d added to stack.\n", val);
}

// 3. Pop Operation
void pop() {
    if (top == NULL) {
        printf("Stack Underflow! Nothing to pop.\n");
        return;
    }
    struct Node* temp = top;
    printf("Popped element: %d\n", temp->data);
    top = top->next;
    free(temp);
}

// 4. Peek Operation
void peek() {
    if (top == NULL) {
        printf("Stack is empty.\n");
    } else {
        printf("Top element is: %d\n", top->data);
    }
}

// 5. Display Operation
void display() {
    struct Node* temp = top;
    if (temp == NULL) {
        printf("Stack is empty.\n");
        return;
    }
    printf("Stack: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}
