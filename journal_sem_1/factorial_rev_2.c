#include<stdio.h>
int main()
{
    int num , i , factorial;
    factorial=1;
    printf("Enter the number:");
    scanf("%d", & num);
    for(i=1 ;i<=num; i++)
    {
        factorial=i*factorial;
 }
    printf("The factoriaal of the number %d is %d" , num , factorial);
    
    return 0;
}