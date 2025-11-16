#include<stdio.h>
int main()
{
    int a , b ,c , result;
    printf("Enter side 'A' of the triangle:");
    scanf("%d",&a);
    printf("Enter side 'B' of the triangle:");
    scanf("%d",&b);
    printf("Enter side 'C' of the triangle:");
    scanf("%d",&c);
    
    if(a+b>c || b+c>a || a+c>b)
    printf("The triangle is valid");
    else
    printf("The triangle is invalid");
     
    return 0;
}