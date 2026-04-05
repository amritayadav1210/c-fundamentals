#include <stdio.h>
#include <stdlib.h>

// Define the structure for a node
typedef struct Node
{
    int data;          // The actual data stored
    struct Node *prev; // Pointer to the prev node in the list
    struct Node *next; // Pointer to the next node in the list
} Node;

// Create a new node and add it to the front
void insertAtFront(Node **head, int value)
{
    Node *newNode = (Node *)malloc(sizeof(Node));
    if (newNode == NULL)
        return; 

    newNode->data = value;
    newNode->next = *head; // This is fine even if *head is NULL
    newNode->prev = NULL;  // New head always has prev as NULL

    // Only update the old head's prev if the list wasn't empty
    if (*head != NULL)
    {
        (*head)->prev = newNode;
    }

    *head = newNode; // Update head to the new node
}

// Traverse and print the list
void displayList(Node *head)
{
    Node *temp = head;
    printf("\n");
    while (temp != NULL)
    {
        printf("%p|(%d)-%p|%p -> ", (void *)temp->prev, temp->data, (void *)temp, (void *)temp->next);
        temp = temp->next;
    }
    printf("\n");
}

void addLast(Node *head, int value)
{

    Node *newNode = (Node *)malloc(sizeof(Node));
    if (newNode == NULL)
        return; // Always check for allocation failure

    newNode->data = value;
    newNode->next = NULL; // Point new node to current head

    Node *temp = head;
    while (temp != NULL)
    {
        if (temp->next == NULL)
        {
            // temp ka next=null then temp updated to new node
            temp->next = newNode;
            newNode->prev = temp;
            break;
        }
        temp = temp->next;
    }
}

void addAtPosition(Node **head, int value, int index)
{
    printf(".........................");
    /*Since you are only reading the list and
    not modifying it, you use a single pointer (Node *head).*/

    // double pointer to update head (adress of head)
    // singel pointer to update head or address of node pointed by head
    if (index < 1)
    {
        printf("\nInvalid Index: %d\n", index);
        return;
    }

    // Use the existing insertAtFront logic for the first position
    if (index == 1)
    {
        insertAtFront(head, value);
        return;
    }

    Node *temp = *head;
    int count = 1;

    // Traverse until the node BEFORE the insertion point
    while (temp != NULL && count < index - 1)
    {
        temp = temp->next;

        count++;
    }

    if (temp == NULL)
    {
        printf("Index %d out of bounds.\n", index);
    }
    else
    {
        Node *newNode = (Node *)malloc(sizeof(Node));
        if (newNode == NULL)
            return;
        newNode->data = value;
        newNode->next = temp->next;
        newNode->next->prev = newNode;
        temp->next = newNode;
        newNode->prev = temp;
    }
}

void removeAtPositionDoublyLinkedList(Node **head, int index)
{   
    printf("\n called removeAtPositionDoublyLinkedList !!");
    
    if (*head == NULL || index < 1)
    {
        printf("List is empty or invalid index.\n");
        return;
    }

    Node *temp = *head;

    // CASE 1: Removing the first node (index 1)
    if (index == 1)
    {
        *head = temp->next; // Point head to the second node
        temp->next->prev = NULL;
        free(temp); // Free the original head's memory
        return;
    }

    // CASE 2: Removing from middle or end
    for (int i = 1; temp != NULL && i < index; i++)
    {
        temp = temp->next;
    }

    // If index is out of bounds
    if (temp == NULL)
    {
        printf("Index %d is out of bounds.\n", index);
        return;
    }

    // Unlink the node from the list and free it
    temp->prev->next = temp->next;
    temp->next->prev = temp->prev;

    free(temp);
}

void searchList(Node *head, int searchElement)
{
    Node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == searchElement)
        {
            printf("Element ----found\n");
            return 0;
        }
        temp = temp->next;
    }

    if (temp == NULL)
    {
        printf("Element Not Found!----!");
    }
}

int main()
{
    Node *head = NULL; // Start with an empty list
    printf("\n step 1\n");
    insertAtFront(&head, 30);
    insertAtFront(&head, 20);
    insertAtFront(&head, 10);
    printf("\n step 2\n");
    displayList(head);
    printf("\n step 3\n");
    addLast(head, 80);
    addLast(head, 160);
    addLast(head, 90);
    addLast(head, 180);
    displayList(head);
    printf("\n step 4\n");
    addAtPosition(&head, 57, 1);
    displayList(head);
    printf("\n step 5\n");
    
   /* 
    printf("\n--------Before----------REMOVE AT FIRST\n");
    removeAtPositionDoublyLinkedList(&head, 2);
    printf("\n--------After-----------Remove--- AT ");
    */
    printf("\n step 6\n");
    displayList(head);
    printf("\n step 7\n");
    searchList(head, 57);
    printf("\n step 8\n");
    displayList(head);
    printf("\n step 9\n");
    removeAtPositionDoublyLinkedList(&head, 50);
    printf("\n step 10\n");
    displayList(head);
    
    return 0;
}
// add at index
