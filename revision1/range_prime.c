#include<stdio.h>
 int isPrime(int num);
int rangeOfPrimeNumber(int num1,int num2);
int main()
{
    int range1, range2;
    printf("Enter range1:");
    scanf("%d",&range1);

    printf("Enter range2:");
    scanf("%d",&range2);
     
   rangeOfPrimeNumber(range1,range2);

   return 0;
}
  int rangeOfPrimeNumber(int range1,int range2)
  {
    for(int i=range1;i<range2;i++)
    {
       int result= isPrime(i);
       if(result==1)
       {
        printf("\nThe number %dis prime number.",i);
       }
      /* else
       {
        printf("\nThe number is%d not a prime number.",i);
       }*/

    }
  }
  int isPrime(int num)
  {
    int i, rem;
    for(i=2;i<=num/2;i++)
    {
        rem=num%i;
        if(rem==0)
        {
            return 0;//not prime is the number
        }
        
    }
    return 1; //number is the prime
  }


