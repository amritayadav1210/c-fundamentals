#include <stdio.h>

int findMaxInArray(int a[], int size);
int findMinInArray(int a[], int size);

int main()
{
    int size;
    printf("\nEnter the Number of Elements in Array :");
    scanf("%d", &size);

    //Creating our array by provinding the value

    int numbers[size];
    for (int i = 0; i < size; i++)
    {
        printf("\nnumbers[%d] = ", i);
        scanf("%d", &numbers[i]);
    }

    int maxNum = findMaxInArray(numbers, size);
    printf("\nmaxNum  = %d", maxNum);
    
    int minNum = findMinInArray(numbers, size);
    printf("\nminNum  = %d", minNum);
    
}
//checking for the maximum value
int findMaxInArray(int a[], int size)
{
    int maxNum = a[0];
    for (int i = 1; i < size; i++)
    {
        if (maxNum < a[i])
        {
            maxNum = a[i];
        }
    }
    return maxNum;
}

//checking for the minimum value
int findMinInArray(int a[], int size)
{
    int minNum = a[0];
    for (int i = 1; i < size; i++)
    {
        if (minNum > a[i])
        {
            minNum = a[i];
        }
    }
    return minNum;
}
