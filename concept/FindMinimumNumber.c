#include <stdio.h>

int main()
{
    int numberOfElements;
    printf("\nEnter Number of Element you want to Compare :");
    scanf("%d", &numberOfElements);
    int mimValue = 9999;
    int currentNumber;
    for (int i = 0; i < numberOfElements; i++)
    {
        printf("\nEnter %d Number:", (i + 1));
        scanf("%d", &currentNumber);
        printf("\nCurrent Number :%d", currentNumber);
        printf("\nBefore mimValue :%d", mimValue);
        if (currentNumber < mimValue)
        {
            mimValue = currentNumber;
        }
        printf("\nAfter mimValue :%d\n\n", mimValue);
    }

    printf("The mimValue =%d", mimValue);
}