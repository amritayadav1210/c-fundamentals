#include <stdio.h>

int isPrime(int number);

int main()
{

    int num;
    //printf("\nEnter the Number :");
    //scanf("%d", &num);

    for(int i=10;i<=20;i++){
        int result = isPrime(i);
        printf("\nresult is prime of %d=%d\n",i,result);

        
    }
    
    


}

//User defined function
/*
    return 1 if number is prime
    return 0 if number is not prime 
*/
int isPrime(int number)
{
    int isPrime = 1;

    for (int i = 2; i < number; i++)
    {
        int rem = number % i;
        if (rem == 0)
        {
            isPrime = 0;
            printf("\n%d Number is not Prime,as \nit is divisible by %d", number, i);
            break;
        }
    }
    return isPrime;
  
}