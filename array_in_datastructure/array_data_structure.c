#include <stdio.h>
void add(int arr[], int size, int index, int data);
void readElments(int a[], int size, int lastElementIndex);

int main()
{
    printf("---main---");
    int size = 6;
    int lastElementIndex=-1;
    int arr[size];

    add(arr, size, 0, 23);
    readElments(arr, size, 0);
    add(arr, size, 1, 45);
    add(arr, size, 2, 76);
    readElments(arr, size, 2);
    add(arr, size, 12, 176);
    readElments(arr, size, 12);

    return 0;
}

void add(int arr[], int size, int index, int data)
{
    if (index + 1 <= size)
    {
        arr[index] = data;
        printf("\n %d is added at index %d", arr[index], index);
    }
    else
    {
        printf("\n Array is already full!! cann't add %d", index);
    }
}

void readElments(int a[], int size, int lastElementIndex)
{
    printf("\n---------- readElments starts------- \n");
    int actualSize = -1;
    if (lastElementIndex < size)
    {
        actualSize = lastElementIndex + 1;
    }
    else
    {
        actualSize = size;
    }

    for (int i = 0; i < actualSize; i++)
    {
        printf("%d  ", a[i]);
    }
    printf("\n---------- readElments end------- \n");
}
