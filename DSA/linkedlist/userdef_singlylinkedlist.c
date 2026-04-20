#include<stdio.h>
#include<stdlib.h>

struct node{
    struct node *next;
    int data;
};
struct node*head=NULL;
void create()
{
    struct node *newnode,*ptr;
    int i,n;
    printf("Enter size of nodes:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        if(newnode==NULL)
        {
            printf("Memory not allocated");
        }
        else
        {
            printf("enter data for new node :");
            scanf("%d",&newnode->data);
            newnode->next=NULL;
            if(head==NULL)
            head==newnode;
            else{
                ptr=head;
                while(ptr->next!=NULL)
                {
                  ptr=ptr->next;
                }
                ptr->next=newnode;
            }
        }
        printf("LINKED LIST CREATED");

    }


}