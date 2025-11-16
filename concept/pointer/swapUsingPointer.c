#include<stdio.h>
void swapr(int *a,int *b);
void main()
{
    int a = 10 ;
    int b = 20;
    printf("\n------Before-------");
    printf("\na=%d\n b=%d",a,b);
    swapr(&a,&b);//address of a and b
    printf("\n------After-------");
    printf("\na=%d\n b=%d",a,b);
}
void swapr(int *a,int *b)//value at* address of a and b
{
    int t;
    t=*a;
    *a=*b;
    *b=t;
}