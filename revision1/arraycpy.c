#include<stdio.h>
int reversearray(int a[],int b[],int size);
int displayarray(int size,int a);
int main()
{
    int i,size;
    printf("Enter the size of the array:");
    scanf("%d",&size);
    int a[size];
    printf("Enter the elements in the array:");
    for(i=0;i<size;i++)
    {
        printf("array[%d]=",i);
        scanf("%d",&a[i]);       
    }
    printf("-----------initialized----------------");
    displayarray(size, a);
    int b[size];
    reversearray(a,b,size);
    displayarray(size, b);
}


int displayarray(int size,int a)
{
    printf("Elements in the array are:");
    for(i=0;i<size;i++)
    {
        printf("array[%d]=%d",i,a[i]);
    }
    printf("\n");
}
int reversearray(int a[],int b[],int size)
{
    int i,j;
    for(i=size-1,j=0;i>=0,j<size;i--,j++)
    {
        b[j]=a[i];
    }
}