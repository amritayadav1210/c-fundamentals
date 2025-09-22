#include <stdio.h>
int main()
{
    int i, num, factorial;
    factorial = 1;
    printf("\nEnter any number");
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
    {
        factorial = i * factorial;
        printf("\nThe factorial of the number is %d", factorial);
    }
    printf("\nFactorial of num:%d = %d",num,factorial);

    return 0;


    /*
    
    
    */
}