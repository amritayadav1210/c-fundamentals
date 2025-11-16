#include<stdio.h>

int main()
{
    int a , b , i,power=1;
    printf("Enter number a:");
    scanf("%d",&a);
    printf("Enter number b:");
    scanf("%d",&b);
    for(i=1;i<=b;i++)
   {
     power=power*a;
   }
   printf("the powe of %d to the powe %d is : %d ", a , b , power);
}