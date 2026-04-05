#include <stdio.h>
char isPrime(int number);
int main()
{
    int num ;
    printf("\nEnter any number:");
    scanf("%d", &num);

    char returnedValue = isPrime(num);
    printf("\nreturnedValue = %c ",returnedValue);
    if (returnedValue == 'Y')
        printf("\n%d is  Prime!!",num);
    else
        printf("\n%d is not Prime!-----!",num);
    
    return 0;
}

/*
If return 'Y' , then number is Prime
If return 'N' , then number is Not Prime 
*/
char isPrime(int number) {
   char isPrimeFlag='Y';
    int rem, i;
    for (i = 2; i<number; i++) {
        //printf("\nthe value of i is:%d\n",i);
        rem = number % i;
        printf("\nthe remainder is :%d",rem);
        if (rem == 0) {
            isPrimeFlag = 'N';
            break;
        }
    }
    return isPrimeFlag;
}
