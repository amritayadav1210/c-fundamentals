#include<stdio.h>
int addition()
{
     int a , b ,result;
    printf("Enter first number");
    scanf("%d",&a);

    printf("Enter second number");
    scanf("%d",&b);

    result=a+b;
    printf("%d is the result",result);
    return 0;

}
 int main()
 {
   addition();
   return 0;
 }