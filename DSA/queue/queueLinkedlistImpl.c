#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *next;
};

struct Node *front = NULL;
struct Node *rear = NULL;

void enqueue(int value) {
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));

    if (!newNode) {
        printf("\nQueue Overflow: Memory allocation failed!\n");
    } else {
        newNode->data = value;
        newNode->next = NULL;

        if (rear == NULL) {
            front = newNode;
        } else {
            rear->next = newNode;
        }
        rear = newNode;
        printf("\n-- Enqueued: %d --\n", value);
    }
}

int dequeue() {
    if (front == NULL) {
        printf("\nQueue Underflow: No elements to dequeue\n");
        return -1;
    }

    struct Node *temp = front;
    int poppedValue = temp->data;

    front = front->next;

    if (front == NULL) {
        rear = NULL;
    }

    free(temp);
    printf("\n-- Dequeued: %d --\n", poppedValue);
    return poppedValue;
}

void display() {
    if (front == NULL)
    {
        printf("\nQueue is empty.\n");
        return;
    }

    struct Node *currentNode = front;
    printf("\n--- Current Queue ---");

    printf("\n | %2d | <-- front", currentNode->data);

    if (currentNode == rear)
    {
        printf(" & rear");
    }

    currentNode = currentNode->next;

    while (currentNode != NULL) {
        if (currentNode == rear) {
            printf("\n | %2d | <-- rear", currentNode->data);
        } else {
            printf("\n | %2d |", currentNode->data);
        }
        currentNode = currentNode->next;
    }
    printf("\n---------------------\n");
}

int main() {
    int choice, value;

    while (1) {
        printf("\n--- QUEUE MENU ---");
        printf("\n1. Enqueue (Add)");
        printf("\n2. Dequeue (Delete)");
        printf("\n3. Display");
        printf("\n4. Exit");
        printf("\n------------------");
        printf("\nEnter choice: ");

        if (scanf("%d", &choice) != 1) {
            printf("Invalid input. Please enter a number.\n");
            while(getchar() != '\n');
            continue;
        }

        switch (choice) {
            case 1:
                printf("Enter value to enqueue: ");
                scanf("%d", &value);
                enqueue(value);
                break;

            case 2:
                dequeue();
                break;

            case 3:
                display();
                break;

            case 4:
                printf("Exiting program...\n");
                exit(0);

            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}
