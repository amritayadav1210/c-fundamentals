#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL;

void create()
{
    struct node *newnode, *ptr;
    int n, i;
    printf("Size of linked list..\n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        if (newnode == NULL)
        {
            printf("Memory not allocated..\n\n");
            exit(1);
        }
        printf("Enter Data for node %d:\n", i);
        scanf("%d", &newnode->data);
        newnode->next = NULL;//because node is automatically added at the end 
        if (head == NULL)
        {
            head = newnode;
        }
        else
        {
            ptr = head;
            while (ptr->next != NULL) // loop ends ptr->next =null
            {
                ptr = ptr->next;
            }
            ptr->next = newnode;
        }
    }
    printf("Linked list created..\n");
}

void insert()
{
    struct node *newnode, *ptr;
    int pos, i;
    newnode = (struct node *)malloc(sizeof(struct node));
    if (newnode == NULL)
    {
        printf("Memory full\n");
        return;
    }

    printf("Enter data to insert: ");
    scanf("%d", &newnode->data);
    printf("Enter position (1 for Start): ");
    scanf("%d", &pos);

    // CASE 1: Insert at Beginning
    if (pos == 1)
    {
        newnode->next = head;
        head = newnode;
        printf("Inserted at the beginning.\n");
    }
    else
    {
        ptr = head;
        // CASE 2 & 3: Move to position-1 to insert in Middle or End
        for (i = 1; i < pos - 1 && ptr != NULL; i++)
        {
            ptr = ptr->next;
        }

        if (ptr == NULL)
        {
            printf("Position out of bounds. Node not inserted.\n");
            free(newnode);
        }
        else
        {
            // This logic works for both Middle and End
            newnode->next = ptr->next;
            ptr->next = newnode;
            printf("Node inserted at position %d.\n", pos);
        }
    }
}

void deleteNode()
{
    struct node *ptr, *preptr;
    int pos, i;
    if (head == NULL)
    {
        printf("List is empty\n");
        return;
    }
    printf("Enter position to delete:\n");
    scanf("%d", &pos);
    ptr = head;
    if (pos == 1)
    {
        head = head->next;
        free(ptr);
    }
    else
    {
        for (i = 1; i < pos && ptr != NULL; i++)
        {
            preptr = ptr;     //nothing deleted here just movement of the nodes
            ptr = ptr->next;
        }
        if (ptr == NULL)
        {
            printf("Position out of range\n");
            return;
        }
        preptr->next = ptr->next;
        free(ptr);
    }
    printf("Node deleted.\n");
}

void search()
{
    int sk, found = 0;
    struct node *ptr;
    if (head == NULL)
    {
        printf("List is empty\n");
    }
    else
    {
        printf("Enter search key:\n");
        scanf("%d", &sk);
        ptr = head;
        while (ptr != NULL)
        {
            if (sk == ptr->data)
            {
                found = 1;
                break;
            }
            ptr = ptr->next;
        }
        if (found)
            printf("Found!\n");
        else
            printf("Not found.\n");
    }
}

void display()
{
    struct node *ptr = head;
    if (head == NULL)
    {
        printf("List is empty..\n");
    }
    else
    {
        printf("Linked list: ");
        while (ptr != NULL)
        {
            printf("%d -> ", ptr->data);
            ptr = ptr->next;
        }
        printf("NULL\n");
    }
}

void update()
{
    int position, datavalue, i;
    struct node *ptr;
    if (head == NULL)
    {
        printf("First create a list..\n");
    }
    else
    {
        ptr = head;
        printf("Enter value for update:\n");
        scanf("%d", &datavalue);
        printf("Enter position for update:\n");
        scanf("%d", &position);
        for (i = 1; i < position && ptr != NULL; i++)
        {
            ptr = ptr->next;
        }
        if (ptr != NULL)
            ptr->data = datavalue;
        else
            printf("Invalid position.\n");
    }
}

int main()
{
    int ch;
    while (1)
    {
        printf("\n1.Create\n2.Display\n3.Search\n4.Update\n5.Insert(End)\n6.Delete\n9.Exit\nChoice: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            create();
            break;
        case 2:
            display();
            break;
        case 3:
            search();
            break;
        case 4:
            update();
            break;
        case 5:
            insert();
            break;
        case 6:
            deleteNode();
            break;
        case 9:
            exit(0);
        default:
            printf("Invalid choice.\n");
        }
    }
    return 0;
}
