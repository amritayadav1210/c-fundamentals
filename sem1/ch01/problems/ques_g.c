#include <stdio.h>
//..................................................Sum of 5 digits number...................................................................
int main()
{
    long long int num;
    printf("\nEnter a five digit number ");
    scanf("%lld", &num);
    printf("\n________________________________ ");

    int rem, sum=0,count=0 ;
    while (num > 0)
    {
        printf("\n--------------Startofloop------------\n ");
        count++;
        printf("\n----Current Value of count=%d",count);
        printf("\nBefore Step 1: num=%lld, rem=%d",num,rem);
        rem = num % 10;  //Step 1:
        printf("\nAfter Step 1: num=%lld, rem=%d",num,rem);
        
        printf("\nBefore Step 2: sum=%d, rem=%d",sum,rem);
        sum = sum + rem; //Step 2:
        printf("\nAfter Step 2: sum=%d, rem=%d",sum,rem);
        
        printf("\nBefore Step 3: num=%lld",num);
        num = num / 10;  //Step 3:
        printf("\nAfter Step 3: num=%lld",num);
        
        printf("\n--------------EndofLoop------------------\n ");
    }

    printf("\n----Final sum=%d",sum);
    printf("\n----Final count=%d",count);
    
    
    return 0;
}