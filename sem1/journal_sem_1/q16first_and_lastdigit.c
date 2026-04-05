#include <stdio.h>
int main()
{
    int i, rem, num;
    printf("Enter any number");
    scanf("%d", &num);
    int count = 0;
    int lastDigit, firstDigit;
    while (num > 0)
    {

        rem = num % 10;
        if (count == 0)
        {
            lastDigit = rem;
           // printf("\n lastDigit=%d",  lastDigit);
        }
        printf("\nRemainder=%d", rem);
        firstDigit = rem;
        //printf("\nfirstDigit=%d", firstDigit);
        num = num / 10;
        printf("\n number=%d", num);
        count++;
    }
    printf("\nfirstDigit:%d", firstDigit);
    printf("\nlastDigit :%d ", lastDigit);

    return 0;
}