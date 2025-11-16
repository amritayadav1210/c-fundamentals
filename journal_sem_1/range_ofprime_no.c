#include <stdio.h>

int isPrime(int num);
void findPrimeNumbersBetweenNum1_Num2(int num1, int num2);
void userInput();
int countOfPrimenumbers(int num1, int num2);

int main()
{
    userInput();//called a function for input
}

void userInput()
{
//The inputs
    int num1, num2;
    printf("Enter the Number1:");
    scanf("%d", &num1);
    printf("Enter the Number2:");
    scanf("%d", &num2);
    findPrimeNumbersBetweenNum1_Num2(num1, num2);//the range
    int cnt = countOfPrimenumbers(num1, num2);// counting them
    printf("\n%d total no of Prime Numbers",cnt);

}

int countOfPrimenumbers(int num1, int num2)
{
    int count = 0;
    for (int i = num1; i <= num2; i++)
    {
        int result = isPrime(i);//calling a function to find PN
        if (result == 1)
        {
            count++;
            printf("\n %d  is Prime", i);
        }
    }
    printf("\nThe count of the Prime Numbers is :%d", count);
    return count;
}

    void findPrimeNumbersBetweenNum1_Num2(int num1, int num2)
    {//Detecting by 1 and 0 that the number is prime or not
        for (int i = num1; i <= num2; i++)
        {
            int result = isPrime(i);
            if (result == 1)
            {
                printf("\n %d  is Prime", i);
            }
            // else
            //{
            //     printf("\n %d  is Not Prime", i);
            // }
        }
    }

    /*
        If num is Prime then isPrime function return's  1
        If num is not Prime the isPrime function return's 0
    */
    int isPrime(int num)
    {//The main method to get prime number
        int rem;
        for (int i = 2; i <= num / 2; i++)
        {
            rem = num % i;
            // printf("\n if %d/%d = remainder is : %d",num,i,rem);
            if (rem == 0)
            {
                return 0;
            }
        }
        return 1;
    }
