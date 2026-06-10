#include<stdio.h>
#include<stdlib.h>
struct node
{
    struct node *next;
    int data;
};
struct node *top=NULL;

void push( int val)
{
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    if(newnode==NULL)
    {
        printf("Stack is empty!!");
        return;
    }
     newnode->data=val;
     newnode->next=top;
     top=newnode;

}
void create()
{
    int val;
    printf("Enter value to push: ");
    scanf("%d", &val);
    push(val); // Using the core push function
    printf("%d added to stack.\n", val);
}

void pop()
{
    if(top==NULL)
    {
        printf("LIST IS EMPTY .underflow");
        return;
    }
    struct node *temp=top;
    printf("popped element is %d",temp->data);
    top=top->next;
    free(temp);
}
void peek()
{
    if(top==NULL)
    {
        printf("List is empty , can't pop");
        return ;
    }
    else
    {
        printf("Top element is %d",top->data);
    }

}
void display()
{
    struct node *temp=top;
    if(temp==NULL)
    {
        printf("Stack empty");
        return ;
    }
    else{
        while (temp!=NULL)
        {
            printf("%d -> ",temp->data);
            temp=temp->next;
        }
        printf("NULL");

    }

}

void main()

{
    int ch;
    while(1)
    {
        printf("\n1.create\n2.pop\n3.peek\n4.display\n5.exit\nEnter your choice");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                create();
                break;
            case 2:
                pop();
                break;
            case 3:
                peek();
                break;
            case 4:
                display();
                break;
            case 5:
                exit(0);
            default:
                printf("Invalid Input");


        }

    }
}
