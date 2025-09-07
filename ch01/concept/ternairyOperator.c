#include <stdio.h>

int main()
{
    printf("---Ternary Operator Example----");

    int wantToContinueAgain;
    do
    {
        printf("\n----------Press '1' to Continue Again!!-----------");

        printf("\nPress '1' for Addition");
        printf("\nPress '2' for Substraction");
        printf("\nPress '3' for Multiplication");
        printf("\nPress '4' for Division");

        int a, b, choice, result;
        printf("\nThe first no. is:");
        scanf("%d", &a);

        printf("\nThe second no.is:");
        scanf("%d", &b);

        printf("\nThe Operation choice :");
        scanf("%d", &choice);

        // if(exp){true}else{false}
        //(expression)?true:false;

        result =
            (choice == 1) ? a + b : (choice == 2) ? a - b
                                : (choice == 3)   ? a * b
                                : (choice == 4)   ? a / b
                                                  : printf("Entered wrong Choice=%d", choice);

        if (choice == 1 || choice == 2 || choice == 3 || choice == 4)
        {
            printf("\n Result = %d", result);
        }

        printf("\nEnter you Continue choice :");
        scanf("%d", &wantToContinueAgain);

    } while (wantToContinueAgain == 1);

    return 0;
}
