#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *front=NULL;
struct node *rear=NULL;

void enqueue(int value)
{
    struct node *newnode=(struct node*)malloc(sizeof(struct node));

    if(newnode==NULL)
    {
        printf("Memory not allocated");
        return;
    }
    else
    {
       newnode->data=value;
       newnode->next=NULL;
       if(rear==NULL)
       {
           front=newnode;
       }
       else
       {
           rear->next=newnode;
       }
       rear=newnode;
        printf("\n-- Enqueued: %d --\n", value);
}
}
int dequeue()
{
    if(front==NULL)
    {
        printf("data underflow");
        return-1;
    }
    struct node *temp=front;
    int poppedValue=temp->data;
    front=front->next;
    if(front==NULL)
        rear=NULL;
    else
        free(temp);
    printf("--popped value%d--",poppedValue);
    return poppedValue;
}
void display()
{
    if(front==NULL)
        {
             printf("queue empty");
             return;
        }
        struct node *temp=front;
         printf("\nQueue: ");
         while(temp!=NULL)
         {
             printf("%d->",temp->data);
             temp=temp->next;
         }
          printf("NULL");

}
int main() {
    int choice, value;

    while (1) {
        printf("\n--- QUEUE MENU ---");
        printf("\n1. Enqueue (Add)");
        printf("\n2. Dequeue (Delete)");
        printf("\n3. Display");
        printf("\n4. Exit");
        printf("\n------------------");
        printf("\nEnter choice: ");

        scanf("%d", &choice);


        switch (choice) {
            case 1:
                printf("Enter value to enqueue: ");
                scanf("%d", &value);
                enqueue(value);
                break;

            case 2:
                dequeue();
                break;

            case 3:
                display();
                break;

            case 4:
                printf("Exiting program...\n");
                exit(0);

            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}
