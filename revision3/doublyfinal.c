#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data ;
    struct node *next;
    struct node *prev;
};
struct node *head=NULL;
struct node *end=NULL;
 void create()
 {
     int i,n;
     struct node *newnode, *ptr;
      printf("How many nodes? ");
      scanf("%d", &n);
      for(i=1;i<=n;i++)
      {
          newnode=(struct node*)malloc(sizeof(struct node));
          if(newnode==NULL)
          {
              printf("Memory not allocated ");
              exit(1);
          }
          printf("enter data:");
          scanf("%d",&newnode->data);
          newnode->next=NULL;
          newnode->prev=NULL;
          if(head==NULL)
          {
              head=end=newnode;
          }
          else
        {
            end->next=newnode;
            newnode->prev=end;
            end=newnode;
        }
      }
      printf("NEW NODE CREATED");
 }
 void display()
 {
     struct node *ptr=head;
     if(head==NULL)
     {
         printf("linked list not created . first create it");
          return;
     }
     printf("Linked List forward--");
     while(ptr!=NULL)
        {
            printf("%d <->",ptr->data);
            ptr=ptr->next;
        }
        printf("NULL");

 }

 void insert()
{
    struct node *newnode,*ptr;
    int pos,i;

    newnode=(struct node*)malloc(sizeof(struct node));
    if(newnode==NULL)
    {
        printf("Memory Not Allocated");
        exit(1);
    }
    else{
        printf("Enter data to insert:");
        scanf("%d",&newnode->data);
        printf("Enter position to insert:");
        scanf("%d",&pos);

        newnode->next=newnode->prev=NULL;

        if(pos==1)
        {
           newnode->next=head;
            newnode->prev=NULL;

            head->prev=newnode;
            head=newnode;

        }
        else
        {
            ptr=head;
            for(i=1;i<pos-1&&ptr!=NULL;i++)
            {
                ptr=ptr->next;
            }
            if(ptr==NULL)
            {
                printf("Position out of bounds");
            }
            else if(ptr==end)
            {
                newnode->prev=end;
                newnode->next=NULL;
                end->next=newnode;
                end=newnode;

        }
        else
        {
            newnode->next=ptr->next;
        newnode->prev=ptr;

        ptr->next->prev=newnode;
        ptr->next=newnode;
        }
    }
    printf("Node inserted");
}
}

void delete()
{
    int pos,i;

    struct node *ptr;
    if(head==NULL)
    {
        printf("LIST IS EMPTY");
        return;
    }
    printf("Enter pos to delete ");
    scanf("%d",&pos);
    ptr=head;
    if (pos==1)
    {
      head=head->next;
      if(head!=NULL)
      {
         head->prev=NULL;
      }
      else{
        end=NULL;

      }
       free(ptr);

    }
    else
        {
          for(i=1;i<pos&&ptr!=NULL;i++)
          {
              ptr=ptr->next;
               }
              if(ptr==NULL)
              {
                  printf("Position not found");
                  return;
              }
              else
            {
                ptr->prev->next=ptr->next;
                if(ptr->next!=NULL)
                    {
                        ptr->next->prev = ptr->prev;
                    }
                    else{
                        end=ptr->prev;

                    }
            }

          free(ptr);
        }
        printf("NODE deleted");
}

void search()
{
    int sk,found=0;
    struct node *ptr=head;
    if(head==NULL)
    {
        printf("list is empty");
        return;
    }
    printf("ENter sk");
    scanf("%d",&sk);
    while(ptr!=NULL)
    {
        if(sk==ptr->data)
        {
            found=1;
            break;
        }
        ptr=ptr->next;
    }
    if(found==1)
        printf("Element found\n");
    else
            printf("element not found");
    }
void update()
{
    int pos,datavalue,i;
    struct node *ptr;
    if(head==NULL)
    {
        printf("firest create linked list .it is empty");
        return;
    }
    else
    {
        ptr=head;
        printf("Enter data to update:");
        scanf("%d",&datavalue);

        printf("Enter pos at which update will happen:");
        scanf("%d",&pos);
        for(i=1;i<pos&&ptr!=NULL;i++)
        {
            ptr=ptr->next;
        }
        if(ptr!=NULL)
            {
                ptr->data=datavalue;
        printf("Node updated successfully!\n");
            }
        else
            printf("Invalid Input");
    }
}

 void main()
 {
     int ch;
     while(1)
     {
         printf("\n1.CREATE \n2.DISPLAY\n3.INSERT\n4.DELETE\n5.SEARCH\n6.UPDATE\n7.EXIT \n Enter Your Choice");
         scanf("%d",&ch);
         switch(ch)
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
            delete();
            break;
        case 5:
            search();
            break;
            case 6:
            update();
            break;


         case 7:
            exit(1);
         default:
            printf("entered INVALID INPUT");

         }
     }

 }

