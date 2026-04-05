#include <stdio.h>
void logicImplementation();
void displayArray(int size, int a[size]);
void reverseArrayElements(int a[], int b[],int size);
void reverseArrayElements2(int a[], int b[]);
void userInput();

int main()
{
    // logicImplementation();
    userInput();
}

void logicImplementation()
{
    // input
    int a[5] = {1, 2, 3, 4, 5};
    // output
    // int b[5] = {5,4,3,2,1};
    int b[5];

    // reverseArrayElements(a,b);
    reverseArrayElements2(a, b);

    displayArray(5, a);
    displayArray(5, b);
}

void userInput()
{
    int size;

    printf("\n Enter the size of Array :");
    scanf("%d", &size);
    int a[size];
    printf("\n Array Initialization Stated !!");
    printf("\n -----------------------------");
    printf("\n Enter the Values in the Array\n");
    for (int i = 0; i < size; i++)
    {
        printf(" Array [%d] = ", i);
        scanf("%d", &a[i]);
    }
    printf("\n Array Initialization Completed !!");
    displayArray(size, a);

    int b[size];
    reverseArrayElements(a, b, size);
    displayArray(size, b);
}

void reverseArrayElements(int a[], int b[],int size)
{
    //printf("\n---------reverseArrayElements------------------------");
    // Reverse elements storage logic
    for (int i = size-1, j = 0; i >= 0; i--, j++)
    {
       // printf("\n---------reverseArrayElements------------------------");
        b[j] = a[i];
    }
}

void reverseArrayElements2(int a[], int b[])
{
    printf("\n-----------reverseArrayElements2----------------------");
    // Reverse elements storage logic
    for (int i = 0, j = 4; i < 5; i++, j--)
    {
        printf("\n---------reverseArrayElements------------------------");
        b[j] = a[i];
    }
}

void displayArray(int size, int a[size])
{
    printf("\n----------------------------");
    for (int i = 0; i < size; i++)
    {
        printf("\narray[%d] = %d", i, a[i]);
    }
    printf("\n----------------------------");
}
