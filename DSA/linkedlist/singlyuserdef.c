#include <stdio.h>
#include <stdlib.h>

// Define the Node structure
typedef struct Node {
    int data;
    struct Node *next;
} Node;

// Function to add a node to the front
void insertAtFront(Node **head, int value) {
    Node *newNode = (Node *)malloc(sizeof(Node));
    if (newNode == NULL) return;
    newNode->data = value;
    newNode->next = *head;
    *head = newNode;
    printf("Successfully added %d to the front.\n", value);
}

// Function to add a node to the end
void addLast(Node **head, int value) {
    Node *newNode = (Node *)malloc(sizeof(Node));
    if (newNode == NULL) return;
    newNode->data = value;
    newNode->next = NULL;

    if (*head == NULL) {
        *head = newNode;
    } else {
        Node *temp = *head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

// Function to create a list from scratch
void createList(Node **head) {
    int n, value;
    printf("How many elements should the list start with? ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        printf("Enter value for element %d: ", i);
        scanf("%d", &value);
        addLast(head, value);
    }
    printf("--- List created successfully! ---\n");
}

// Function to add a node at a specific position
void addAtPosition(Node **head, int value, int index) {
    if (index < 1) {
        printf("Invalid position!\n");
        return;
    }
    if (index == 1) {
        insertAtFront(head, value);
        return;
    }
    Node *temp = *head;
    for (int i = 1; temp != NULL && i < index - 1; i++) {
        temp = temp->next;
    }
    if (temp == NULL) {
        printf("Position out of bounds!\n");
    } else {
        Node *newNode = (Node *)malloc(sizeof(Node));
        newNode->data = value;
        newNode->next = temp->next;
        temp->next = newNode;
        printf("Inserted %d at position %d.\n", value, index);
    }
}

// Function to remove a node
void removeAtPosition(Node **head, int index) {
    if (*head == NULL || index < 1) {
        printf("Nothing to remove or invalid index.\n");
        return;
    }
    Node *temp = *head;
    if (index == 1) {
        *head = temp->next;
        free(temp);
        printf("Removed element at position 1.\n");
        return;
    }
    Node *prev = NULL;
    for (int i = 1; temp != NULL && i < index; i++) {
        prev = temp;
        temp = temp->next;
    }
    if (temp == NULL) {
        printf("Position out of bounds!\n");
    } else {
        prev->next = temp->next;
        free(temp);
        printf("Removed element at position %d.\n", index);
    }
}

// Function to search for a value
void searchList(Node *head, int searchElement) {
    Node *temp = head;
    int pos = 1;
    while (temp != NULL) {
        if (temp->data == searchElement) {
            printf("Found %d at position %d!\n", searchElement, pos);
            return;
        }
        temp = temp->next;
        pos++;
    }
    printf("Element %d not found in the list.\n", searchElement);
}

// Function to display the list
void displayList(Node *head) {
    if (head == NULL) {
        printf("The list is empty.\n");
        return;
    }
    Node *temp = head;
    printf("Current List: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    Node *head = NULL;
    int choice, val, pos;

    while (1) {
        printf("\n************ LINKED LIST MENU ************\n");
        printf("1. Create New List\n");
        printf("2. Add to Front\n");
        printf("3. Add to End\n");
        printf("4. Add at Position\n");
        printf("5. Remove from Position\n");
        printf("6. Search for Value\n");
        printf("7. Display List\n");
        printf("8. Exit\n");
        printf("******************************************\n");
        printf("Choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: createList(&head); break;
            case 2: printf("Value: "); scanf("%d", &val); insertAtFront(&head, val); break;
            case 3: printf("Value: "); scanf("%d", &val); addLast(&head, val); break;
            case 4: printf("Value and position: "); scanf("%d %d", &val, &pos); addAtPosition(&head, val, pos); break;
            case 5: printf("Position to remove: "); scanf("%d", &pos); removeAtPosition(&head, pos); break;
            case 6: printf("Value to search: "); scanf("%d", &val); searchList(head, val); break;
            case 7: displayList(head); break;
            case 8: exit(0);
            default: printf("Invalid choice.\n");
        }
    }
    return 0;
}
