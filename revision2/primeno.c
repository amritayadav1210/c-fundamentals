#include <stdio.h>
int isprime(int num);
int rangeOfPrimeNumber(int num1, int num2);
int main()
{
    int num1, num2;
    printf("Enter range1:");
    scanf("%d", &num1);
    printf("Enter range2:");
    scanf("%d", &num2);

    int range = rangeOfPrimeNumber(num1, num2);
}
int rangeOfPrimeNumber(int num1, int num2)
{
    int count=0;
    for (int i = num1; i <= num2; i++)
    {
        int result = isprime(i);//explain
        if (result == 1)
        {
            printf("%d number is prime number\n",i);
            count++;
        }
        /*else
        {
            printf("The number is not prime number");
        }*/
       
    }
    printf("%d numbers are prime",count);
}

int isprime(int num)
{
    int i, rem;
    for (i = 2; i <= num / 2; i++)
    {
        rem = num % i;
        if (rem == 0)
        {
            return 0; // The number is not prime
        }
    }
    return 1;
}
