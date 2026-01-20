#include<stdio.h>
int main()
{
    int num, i, rem;
    printf("Enter the number:");
    scanf("%d",&num);
    int sum=0;
    while(num>0)
    {
        rem=num%10;
        printf("\nThe rem =%d",rem);
        sum=sum+rem;
        printf("\nThe sum =%d",sum);
        num=num/10;
        printf("\nThe num =%d",num);
    }
    printf("\nThe final sum =%d",sum);
    return 0;
    

}