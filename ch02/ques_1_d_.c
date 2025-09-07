#include <stdio.h>
#include <math.h>
//to write the reveresed number and count the digits of number

int main()
{
    int digitsCount,originalNumber, num;
    printf("\nEnter a No of Digits your Number Contains :");
    scanf("%d", &digitsCount);

    printf("Enter a %d digit number:",digitsCount);
    scanf("%d", &originalNumber);
    
    int rem, sum = 0, placeValue;
    placeValue = pow(10,digitsCount-1);
    printf("\nplaceValue :%d",placeValue);
    
    num = originalNumber;
    while (num > 0)
    {
        rem = num % 10;
        sum = sum + rem * placeValue;
        placeValue /= 10;
        num /= 10;
    }
    int reverseNumber = sum;
    printf("\n\nOriginal Entered Number=%d,\nReverse of Original Number=%d", originalNumber, reverseNumber);
}