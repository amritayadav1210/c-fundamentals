#include <stdio.h>

int main()
{
    printf("\nPress '1' for Addition");
    printf("\nPress '2' for Substraction");
    printf("\nPress '3' for Multiplication");
    printf("\nPress '4' for Division");

    int a, b, choice, result;
    printf("\nThe first no. is:");
    scanf("%d", &a);

    printf("\nThe second no.is:");
    scanf("%d", &b);

    printf("\nThe choice :");
    scanf("%d", &choice);

    if (choice == 1)
    {
        result = a + b;
    }
    else if (choice == 2)
    {
        result = a - b;
    }
    else if (choice == 3)
    {
        result = a * b;
    }
    else if (choice == 4)
    {
        result = a / b;
    }else{
        printf("\n----Please Try Again!!----YOU HAVE ENTERED WRONG CHOICE-----!! \nchoice:%d", choice);
        return 0;
    }
    
    printf("\nResult=%d",result);
    return 0;
}