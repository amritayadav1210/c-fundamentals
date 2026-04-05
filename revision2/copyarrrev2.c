#include <stdio.h>
void reversearray(int a[],int b[],int size);
void displayarray(int size, int a[]);
int main()
{
    int i, size;

    printf("Enter the size of the array:");
    scanf("%d", &size);
    int a[size];
    printf("\nEnter the elements in the array:");
    
    for (i = 0; i < size; i++)
    {
        printf("\n array[%d]=", i);

        scanf("%d", &a[i]);
    }
    printf("\nArray initialization competed");
    displayarray(size, a);
    int b[size];
    reversearray(a,b,size);
    displayarray(size, b);

    return 0;
}

void reversearray(int a[],int b[],int size)
{
 int i,j;
 for(i=size-1,j=0;i>=0;i--,j++)
 {
    b[j]=a[i];
 }
}

void displayarray(int size, int a[])
{
    
    printf("Enter the elements in the array:");
    for ( int i = 0; i < size; i++)
    {
        printf("\n array[%d]=%d", i, a[i]);
    }
    printf("\n");
}