#include <stdio.h>
int searchArray(int arr[], int lastindex, int data);
int main()
{
    int lastElementIndex = -1;
    int arr[] = {2, 4, 8, 9, 10, 14, 119, 20};

    int searchResult = searchArray(arr, 9, 20);

    if(searchResult == -1){
        printf(" Element not found in array");
    }else{
        printf("\n Element found at a index :%d", searchResult);
    }
}

int searchArray(int arr[], int lastindex, int data)
{
    for (int i = 0; i <= lastindex; i++)
    {
        if (arr[i] == data)
        {
           // printf("\nThe element is found at %d", i);
            return i;
        }
    }
    //printf("The element is not found");
    return -1;
}