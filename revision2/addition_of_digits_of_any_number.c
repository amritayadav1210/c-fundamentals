#include<stdio.h>
int main()
{
    int num, rem;
    printf("Enter any number:");
    scanf("%d",&num);
    
    while(num>0)
    {
        rem=num%10;
        printf("\nrem=%d",rem);
        printf("\n--------------------");
        num=num/10;
        printf("\nnum=%d",num);
    }
}