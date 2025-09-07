#include <stdio.h>
int main()
{
    int choice, result, a, b;
    printf("\nPress '1' for Addition");
    printf("\nPress '2' for Substraction");
    printf("\nPress '3' for Multiplication");
    printf("\nPress '4' for Division\n");
    printf("\nThe first no. is:");
    scanf("%d", &a);

    printf("\nThe second no.is:");
    scanf("%d", &b);

    printf("\nThe choice :");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        result = a + b;
        break;

    case 2:
        result = a - b;
        break;

    case 3:
        result = a * b;
        break;

    case 4:
        result = a / b;
        break;
    default:
        printf("\n----Please Try Again!!----YOU HAVE ENTERED WRONG CHOICE-----!! \nchoice:%d", choice);
        return 0;
    }
    printf("\nResult=%d", result);
    return 0;
}
