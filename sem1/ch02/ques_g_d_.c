#include <stdio.h>
int main()
{
    /*
    0-5 - 0.5 rupee
    6-10 - 1 rupee
    10-30 - membership cancel
    */
    int days;
    float fine;
    float fineRate;

    printf("Enter the delay days :");
    scanf("%d", &days);

    if (0 <= days && days <= 5)
    {
        fineRate = 0.5;
        fine = days * fineRate;
        printf("Your fine is : %f\n", fine);
    }
    else if (6 <= days && days <= 10)
    {
        fineRate = 1.0;
        fine = (days - 5) * fineRate + 5 * 0.5;
        printf("Your fine is : %f\n", fine);
    }
    else if (11 <= days  )
    {
        fineRate = 5.0;
        fine = (days - 10) * fineRate + 5 * 0.5 + 5 * 1.0;
        printf("Your fine is : %f\n", fine);
        printf("Your membership is cancelled\n");
    }
    if (days > 30)
    {
        printf("Your membership is cancelled\n");
    }

    return 0;
}
