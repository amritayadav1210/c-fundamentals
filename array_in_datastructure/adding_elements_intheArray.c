#include <stdio.h>

void add(int a[], int data);
void readElments(int a[]);

int size;
int lastElementIndex = -1;

int main()
{
    char doYouWantToContinue = 'N';

    printf("Enter the size of the array:");
    scanf("%d", &size);

    int arr[size];

    do
    {
        int choice;
        printf("\nPress 1 to Add    Element");
        printf("\nPress 2 to Read   Elements");
        printf("\nPress 3 to Search Element");
        printf("\nPress 4 to Remove Element");

        printf("\nYour have Pressed :");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("\nAdd element");
            if (lastElementIndex + 1 < size)
            {
                int data;
                printf("\nEnter the data you want to add:");
                scanf("%d", &data);
                add(arr, data);
            }
            else
            {
                printf("\nArray is already Full cann't add new element");
            }

            break;
        case 2:
            printf("\nRead All Array Elements");
            readElments(arr);
            break;
        case 3:
            printf("Search the given Element");
            break;
        case 4:
            printf("Remove Element");
            break;
        default:
            printf("INVALID CHOICE");
        }
        printf("\nDo you want to continue(Y/N) :");
        scanf(" %c", &doYouWantToContinue);

    } while (doYouWantToContinue == 'Y' || doYouWantToContinue == 'y');

    return 0;
}

void add(int a[], int data)
{
    lastElementIndex++;
    a[lastElementIndex] = data;
}

void readElments(int a[])
{
    printf("\n---------- readElments starts------- \n");
    for (int i = 0; i <= lastElementIndex; i++)
    {
        printf("%d  ", a[i]);
    }
    printf("\n---------- readElments end------- \n");
}