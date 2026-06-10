          #include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *next;
};
struct node *head=NULL;

void create()
{
    struct node *newnode,*ptr;
    int i, n;
    printf("enter size of linked list:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        newnode=(struct node*)malloc(sizeof(struct node));
        if(newnode==NULL)
        {
            printf("Memory not allocated");
            exit(1);
        }
        printf("enter data in new node:");
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        if(head==NULL)
        {
            head=newnode;
        }
        else
        {
           ptr=head;
           while(ptr->next!=NULL)
           {
               ptr=ptr->next;
           }
           ptr->next=newnode;

        }
    }
    printf("Linked List Created");

}

void display()
{
    struct node *ptr=head;
    if(ptr==NULL)
    {
        printf("Memory not allocated");
        exit(1);
    }
    printf("Linked List--");
    while(ptr!=NULL)
    {
        printf("%d->",ptr->data);
        ptr=ptr->next;
    }
    printf("NULL");
}

void insert()
{

    struct node *newnode,*ptr;
    int val,pos;

    printf("Enter value to insert:");
    scanf("%d",&val);
    printf("Enter position to insert:");
    scanf("%d",&pos);

    newnode=(struct node*)malloc(sizeof(struct node));
    if(newnode==NULL)
    {
        printf("Memory not allocated");
        exit(1);
    }
    newnode->data=val;

    if(pos==1)
    {
       newnode->next=head;
       head=newnode;
    }
    else
    {
        ptr=head;
    for(int i=1;i<pos-1&&ptr!=NULL;i++)
    {
        ptr=ptr->next;
    }
    if(ptr==NULL)
    {
        printf("position out of bound");
        free(newnode);
    }
    else
    {
        newnode->next=ptr->next;
        ptr->next=newnode;

    }
    }
    printf("Node Inserted");
}

void delete()
{

}


 void main()
 {
     int choice;
     while(1)
        {
            printf("\n1.Create\n2.Display\n3.Search\n4.Update\n5.Insert(End)\n6.Delete\n9.Exit\nChoice: ");
            scanf("%d", &choice);

            switch(choice)
        {
            case 1:
             create();
            break;
        case 2:
             display();
            break;
        case 3:
             insert();
            break;
        case 4:
            exit(0);
        default:
            printf("Invalid choice.\n");
        }
        }

 }
