#include<stdio.h>
int main()
{
    int num,i;
    printf("Enter the number:");
    scanf("%d",&num);
    int fact=1;; 
    for(i=1;i<=num;i++)
    {
        fact=fact*i;
    }
    printf("The factorial of %d is %d",num,fact);
    return 0;
}