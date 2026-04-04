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
                newnode->prev = end;
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
void insertatlast ()
{
    if (head==NULL)
    {
        printf("Error 404:Linked list NOT FOUND..\n\n");
    }
    else
    {
        struct node *newnode;
        newnode=(struct node*)malloc(sizeof(struct node));

        if (newnode==NULL)
        {
            printf("Node not created, memory full..\n");
        }
        else
        {
            printf("Enter data for the new last node: ");
            scanf("%d",&newnode->data);

            newnode->prev=end;
            newnode->next=NULL;
            end->next=newnode;
            end=newnode;

            printf("Node successfully inserted at end..\n\n");
        }
    }
}

void insertatposition()
{
     struct node *preptr,*ptr,*newnode;

    int position,i;

    newnode=(struct node*)malloc(sizeof(struct node));

    if(head==NULL)
        {
            printf("Error 404:Linked list NOT FOUND..\n\n");
        }
    else if (newnode==NULL)
        {
            printf("Node not created, memory full..\n");
        }
    else
    {
        
    }
}