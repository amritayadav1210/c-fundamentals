#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
    struct node *prev;
};

// Global head and end pointers
struct node *head = NULL;
struct node *end = NULL;

void create() {
    int n, i;
    struct node *newNode;
    printf("How many nodes? ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        newNode = (struct node*)malloc(sizeof(struct node));
        printf("Enter data for node %d: ", i);
        scanf("%d", &newNode->data);
        newNode->next = NULL;
        newNode->prev = NULL;

        if (head == NULL) {
            head = end = newNode; // First node is both head and end
        } else {
            end->next = newNode;
            newNode->prev = end;
            end = newNode; // Update end to the new last node
        }
    }
    printf("List created.\n");
}

void insert() {
    int pos, i;
    struct node *newNode, *ptr;
    newNode = (struct node*)malloc(sizeof(struct node));
    printf("Enter data: ");
    scanf("%d", &newNode->data);
    printf("Enter position: ");
    scanf("%d", &pos);

    newNode->next = newNode->prev = NULL;

    if (pos == 1) { // Insert at start
        newNode->next = head;
        newNode->prev = NULL;
            head->prev = newNode;
            head = newNode;
    } else {
        ptr = head;
        for (i = 1; i < pos - 1 && ptr != NULL; i++) 
        ptr = ptr->next;
        
        if (ptr == NULL) {
            printf("Position out of bounds!\n");
            free(newNode);
        } else if (ptr == end) { // Insert at the very end
            end->next = newNode;
            newNode->prev = end;
            newNode->next = NULL;
            end = newNode; // Update the end pointer
        } else { // Insert in middle
            newNode->next = ptr->next;
            newNode->prev = ptr;
            ptr->next->prev = newNode;
            ptr->next = newNode;
        }
    }
    printf("Node inserted.\n");
}

void deleteNode() {
    int pos, i;
    struct node *ptr;
    if (head == NULL) {
        printf("List is empty!\n");
        return;
    }
    printf("Enter position to delete: ");
    scanf("%d", &pos);
    ptr = head;

    if (pos == 1) { // Delete head
        head = head->next;
        if (head != NULL)//head is not null
         head->prev = NULL;
        else
         end = NULL; // List becomes empty
        free(ptr);
    } else
     {
        for (i = 1; i < pos && ptr != NULL; i++)
         ptr = ptr->next;
        if (ptr == NULL) {
            printf("Position not found!\n");
            return;
        }
         
        ptr->prev->next = ptr->next;
        if (ptr->next != NULL)//last element not
         {
            ptr->next->prev = ptr->prev;
        } else {
            end = ptr->prev; // We deleted the last node, update end
        }
        free(ptr);
    }
    printf("Node deleted.\n");
}

void search() {
    int key, pos = 1;
    struct node *ptr = head;
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }
    printf("Enter value to search: ");
    scanf("%d", &key);
    while (ptr != NULL) {
        if (ptr->data == key) {
            printf("Found %d at position %d.\n", key, pos);
            return;
        }
        ptr = ptr->next;
        pos++;
    }
    printf("Value not found.\n");
}

void display() {
    struct node *ptr = head;
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }
    printf("Forward: ");
    while (ptr != NULL) {
        printf("%d <-> ", ptr->data);
        ptr = ptr->next;
    }
    printf("NULL\n");
}

int main() {
    int ch;
    while (1) {
        printf("\n1.Create 2.Insert 3.Delete 4.Search 5.Display 9.Exit\nChoice: ");
        scanf("%d", &ch);
        switch (ch) {
            case 1: create(); break;
            case 2: insert(); break;
            case 3: deleteNode(); break;
            case 4: search(); break;
            case 5: display(); break;
            case 9: exit(0);
            default: printf("Invalid choice.\n");
        }
    }
    return 0;
}
