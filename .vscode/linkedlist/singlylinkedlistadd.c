#include <stdio.h>
#include <stdlib.h>

// Define the structure for a node
typedef struct Node
{
    int data;          // The actual data stored
    struct Node *next; // Pointer to the next node in the list
} Node;

// Create a new node and add it to the front
void insertAtFront(Node **head, int value)
{
    //create space for new node to add
    Node *newNode = (Node *)malloc(sizeof(Node));
    if (newNode == NULL)
        return; // Always check for **allocation failure**

    newNode->data = value;
    newNode->next = *head; // Point new node to current head
    *head = newNode;       // Update head to the new node
}

// Traverse and print the list
void displayList(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
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
            //temp ka next=null then temp updated to new node
            temp->next = newNode;
            break;
        }
        temp = temp->next;
    }
}

void addAtPosition(Node **head, int value, int index)
{
      /*Since you are only reading the list and 
      not modifying it, you use a single pointer (Node *head).*/

    //double pointer to update head (adress of head)
    //singel pointer to update head or address of node pointed by head
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
        temp->next = newNode;
    }
}

void removeAtPosition(Node **head, int index) {
    if (*head == NULL || index < 1) {
        printf("List is empty or invalid index.\n");
        return;
    }

    Node *temp = *head;

    // CASE 1: Removing the first node (index 1)
    if (index == 1) {
        *head = temp->next; // Point head to the second node
        free(temp);         // Free the original head's memory
        return;
    }

    // CASE 2: Removing from middle or end
    Node *prev = NULL;
    for (int i = 1; temp != NULL && i < index; i++) {
        prev = temp;
        temp = temp->next;
    }

    // If index is out of bounds
    if (temp == NULL) {
        printf("Index %d is out of bounds.\n", index);
        return;
    }

    // Unlink the node from the list and free it
    prev->next = temp->next;
    free(temp);
}

void searchList(Node *head,int searchElement)
{
    Node *temp = head;
    while (temp != NULL)
    {
        if(temp->data == searchElement){
            printf("Element found\n");
            return;
        }
        temp = temp->next;
    }
    
    if(temp == NULL){
        printf("Element Not Found!!");
    }
}


int main()
{
    Node *head = NULL; // Start with an empty list

    insertAtFront(&head, 30);
    insertAtFront(&head, 20);
    insertAtFront(&head, 10);

    printf("Linked List: ");
    displayList(head);
    addLast(head, 80);
    addLast(head, 160);
    addLast(head, 90);
    addLast(head, 180);
    displayList(head);

    addAtPosition(&head, 57, 5);
    displayList(head);

     removeAtPosition( &head,3);
     displayList(head);

      searchList(head,57);
      displayList(head);

    return 0;
}
// add at index
