#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *prev;
    struct node *next;
};
struct node *head = NULL;
struct node *end = NULL;
void create()
{
    struct node *newnode, *ptr;
    int i, n;
    printf("Enter the size of nodes:");
    scanf("%d", &n);
    // nodes can be related to position not the index values
    for (i = 1; i <= n; i++)
    {
        newnode = (struct node *)malloc(sizeof(struct node));

        if (newnode == NULL)
        {
            printf("Clear your memory");
        }
        else
        {
            printf("Enter data for new node");
            scanf("%d", &newnode->data);

            // means there is no first node
            if (head == NULL)
            {
                head = newnode;
                end = newnode;
                newnode->prev = NULL;
                newnode->next = NULL;
                printf("First Node Is Created");
            }
            else
            {
                printf("\n\n");
                newnode->prev = end; // new node ke pehle koi element end hoga uska add ab newnode hoga
                newnode->next = NULL;
                end->next = newnode;
                end = newnode;
                printf("First Node Is Created At End");
            }
        }
        printf("\n\n");
    }
}
void insertatfirst()
{
    if (head == NULL)
    {
        printf("Error:Linked list NOT FOUND..\n\n");
    }
    else
    {
        // declaration of structure type of variable locally
        struct node *newnode;
        /*(pointer variable that will store adress of allocated memory)
        ptr = (cast_type *) malloc(number_of_elements * sizeof(data_type));*/
        newnode = (struct node *)malloc(sizeof(struct node));

        if (newnode == NULL)
        {
            printf("Node not created, memory full..\n");
        }
        else
        {

            printf("Enter data for the new first node: \n");
            scanf("%d", &newnode->data);
            newnode->next = head;
            newnode->prev = NULL;
            head->prev = newnode;
            head = newnode;
            printf("Node successfully inserted at head..\n\n");
        }
    }
}
void insertatlast()
{
    if (head == NULL)
    {
        printf("Error 404:Linked list NOT FOUND..\n\n");
    }
    else
    {
        struct node *newnode;
        newnode = (struct node *)malloc(sizeof(struct node));

        if (newnode == NULL)
        {
            printf("Node not created, memory full..\n");
        }
        else
        {
            printf("Enter data for the new last node: ");
            scanf("%d", &newnode->data);

            newnode->prev = end;
            newnode->next = NULL;
            end->next = newnode;
            end = newnode;

            printf("Node successfully inserted at end..\n\n");
        }
    }
}

void insertatposition()
{
    struct node *preptr, *ptr, *newnode;

    int position, i;

    newnode = (struct node *)malloc(sizeof(struct node));

    if (head == NULL)
    {
        printf("Error 404:Linked list NOT FOUND..\n\n");
    }
    else if (newnode == NULL)
    {
        printf("Node not created, memory full..\n");
    }
    else
    {
        printf("Enter position:\n");
        scanf("%d", &position);

        if (position == 1)
        {
            insertatfirst();
            return;
        }

        ptr = head;

        for (i = 1; i < position; i++)
        {
            if (ptr == NULL)
            {
                printf("ERROR 404:NOT FOUND");
                return;
            }
            preptr = ptr;
            ptr = ptr->next;
        }

        printf("Enter data..\n");
        scanf("%d", &newnode->data);

        newnode->next = ptr;
        ptr->prev = newnode;
        newnode->prev = preptr;
        preptr->next = newnode;

        printf("Node inserted..\n");
    }
}
void deletefromfirst()
{
    struct node *ptr;
    if (head == NULL)
    {
        printf("ERROR this linked list is not found!");
    }
    ptr = head;
    if (head = end)
    {
        free(ptr);
        head = end = NULL;
    }
    else
    {
        head = ptr->next;
        head->prev = NULL;
        free(ptr);
    }
    printf("First node deleted..!!");
}
void deletefromlast()
{
    struct node *ptr;
    if (head == NULL)
    {
        printf("ERROR: Linked list not found");
    }
    else
    {
        ptr = end;
        if (head = end)
        {
            free(ptr);
            head = end = NULL;
        }
        else
        {
            end = ptr->prev;
            end->next = NULL;
            free(ptr);
        }
        printf("Last node deleted");
    }
}
void deletefromrandom()
{
    struct node *ptr, *preptr;
    int pos, i;

    if (head == NULL)
    {
        printf("ERROR: Linked list not created ");
    }
    else
    {
        printf("Enter the position of the node to be deleted");
        scanf("%d", &pos);
        ptr = head;

        for (i = 1; i < pos; i++)
        {
            if (ptr == NULL)
            {
                printf("ERROE: node not found here..!");
                return;
            }
            // very impp main shifting
            preptr = ptr;
            ptr = ptr->next;
        }
        if (ptr = head)
        {
            deletefromfirst();
            return;
        }
        else if (ptr = end)
        {
            deletefromlast();
            return;
        }
        ptr->next->prev = preptr;
        preptr->next = ptr->next;
        free(ptr);
        printf("NODE DELETED..!!");
    }
}

void update()
{
    struct node *ptr;
    int i, pos;
    ptr = head;
    if (head = NULL)
    {
        printf("\nERROR:No linked list");
    }
    else
    {
        printf("Enter position for updation:");
        scanf("%d", &pos);
        for (i = 1; i < pos; i++)
        {
            if (ptr == NULL)
            {
                printf("\nERROR:not found");
                return;
            }
            ptr = ptr->next;
        }
        if (ptr = NULL)
        {
            printf("\nNode Not Found In The Linked List");
        }
        else
        {
            printf("Enter the data for updation:");
            scanf("%d", &ptr->data);
            printf("\nNODE updated successfully..!!");
        }
    }
}
void search()
{
    struct node *ptr;
    ptr = head;
    int found = 0, sk;

    if (head == NULL)
    {
        printf("\nLinked list not found..!!");
    }
    else
    {
        printf("Enter search key:");
        scanf("%d", &sk);
        while (ptr != NULL)
        {
            if (sk = ptr->data)    
            {
                found = 1;
                break;
            }
        }
        if (found == 1)
        {
            printf("\nELEMENT FOUND");
        }
        else
        {
            printf("\nELEMENT NOT FOUND");
        }
    }
}
void traverse()
{
    struct node *ptr;
    if (head == NULL)
        printf("\nERROR:Linked List not found..!!");
    else
    {
        ptr = head;
        printf("\nLINKED LIST:");
        while (ptr != NULL)
        {
            printf("\t%d", ptr->data);
            ptr = ptr->next;
        }
        printf("NULL\n\n");
    }
}

int main()
{
    int ch;
    while (1)
    {
        printf("\nMENU\n1.Create\n2.Display\n3.Insert at random\n4.Insert at first\n5.Insert at last\n6.Delete from random\n7.Delete from first\n8.Delete from last\n9.Update\n10.Search\n11.Exit\n");
        ;
        printf("Enter your choice:\n");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            create();
            break;
        case 2:
            traverse();
            break;
        case 3:
            insertatposition();
            break;
        case 4:
            insertatfirst();
            break;
        case 5:
            insertatlast();
            break;
        case 6:
            deletefromrandom();
            break;
        case 7:
            deletefromfirst();
            break;
        case 8:
            deletefromlast();
            break;
        case 9:
            update();
            break;
        case 10:
            search();
            break;
        case 11:
            exit(0);
        default:
            printf("Error 404:NOT FOUND..\n\n");
            break;
        }
    }
    return (0);
}