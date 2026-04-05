//coppying array n other array
#include <stdio.h>
void reversedArray(int a[], int b[], int size);
void displayArray(int size, int a[size]);
void userinput();
int main()
{
    userinput();
    return 0;
}
void userinput()
{
    int size;
    printf("Enter the size of array");
    scanf("%d", &size);
    int a[size];
    printf("\n Enter the Values in the Array\n");
    for (int i = 0; i < size; i++)
    {
        printf(" Array [%d] = ", i);
        scanf("%d", &a[i]);
    }
    int b[size];
    reversedArray(a, b, size);
    displayArray(size, a);
    printf("\nReversed Array:\n");
    displayArray(size, b);
}

void reversedArray(int a[], int b[], int size)
{
    for (int i = size - 1, j = 0; i >= 0; i--, j++)
    {
        b[j] = a[i];
    }
}
void displayArray(int size, int a[size])
{
    for (int i = 0; i < size; i++)
    {
        printf(" Array [%d] =%d \n", i, a[i]);
    }
}