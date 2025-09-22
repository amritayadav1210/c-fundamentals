#include<stdio.h>
int main()
{
    int a,b,i,product;
    product=1;
    printf("Enter any a:");
    scanf("%d",&a);
    printf("Enter any b:");
    scanf("%d",&b);
    for(i=1;i<=b;i++)
    {
        product=product*a;
        printf("the required value is:%d",product);
    }

}
