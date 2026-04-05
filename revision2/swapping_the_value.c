#include <stdio.h>
int main()
{
    int a, b, x, novar;
    printf("Enter value of a:");
    scanf("%d", &a);
    printf("Enter value of b:");
    scanf("%d", &b);
    x = a;
    printf("\nThe value of x:%d", x);
    a = b;
    printf("\nThe value of a:%d", a);
    b = x;
    printf("\nThe value of b:%d", b);
    printf("\n-------------Second Method--------------");
    novar=novariable(a,b);

    return 0;
}
int novariable(int a , int b)
{
    a=a+b;
    printf("\nThe value of a:%d", a);
    b = a-b;
    printf("\nThe value of b:%d", b);
    a = a-b;
    printf("\nThe value of a:%d",a);
     return (a,b);

}

