#include<stdio.h>
int main()
{
    int num;
    // input : number;
    // output : is prime no / is not prime no;


    for(int num=2;num<=10;num++){

        int isPrime = 1; 
        for(int i=2;i<num;i++){
            int rem = num%i;
            if(rem == 0){
                isPrime = 0;
                //printf("\n%d Number is not Prime,as \nit is divisible by %d",num,i);
                break;
            }
        }

        if(isPrime ==1){
            printf("\n The Number %d is Prime !!",num);
        }
        if(isPrime == 0)
        {
            printf("\n The Number %d is Not Prime !!",num);
        }

    }
    

    //if(isPrime ==1){
    //    printf("\n%d Number is Prime Number",num);
    //}


}