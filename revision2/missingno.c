#include <stdio.h>
int main()
{
    int num, i, rem;
    printf("Enter any number:");
    scanf("%d", &num);
    int digitarray[10];
    for (i = 0; i < num; i++)
    {
        rem = num % 10;
        printf("\nrem=%d", rem);
        digitarray[rem] = 1;
        num = num / 10;
        printf("\nThe new num is=%d", num);
    }
    printf("The missing numbers are:");
    for (i = 0; i < 10; i++)
    {
        if (digitarray[i] != 1)
            printf("\nMissing number%d", i);
    }
}
