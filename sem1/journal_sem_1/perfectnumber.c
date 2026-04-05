#include <stdio.h>
int main()
{
    int num, i, rem;
    int sum = 0;
    printf("Enter any number");
    scanf("%d", &num);
    for (i = 1; i < num; i++)
    {
       // printf("\ni=%d",i);
        rem = num % i;
        //printf("\nThe remainder is:%d",rem);

        if (rem == 0)
        {
            sum = i + sum;
            printf("\n the sum is =%d", sum);
        }
        
    }
    if(sum==num)
        printf("\nThe number is Perfect");
        else
        printf("\nThe number is not perfect");
    return 0;
}