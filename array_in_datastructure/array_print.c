#include <stdio.h>
int main()
{
    int size;
    printf("Enter the size of array:");
    scanf("%d", &size);
    int a[size];
    printf("\nEnter the elements of the array\n:");
    int i;
    for (i = 0; i < size; i++)
    {
        scanf("\n%d", &a[i]);
    }
    printf("\nThe elements in the array are:");
    for (i = 0; i < size; i++)
    {
        printf("\n%d", a[i]);
    }
    printf("\ni=%d",i);
    return 0;
}