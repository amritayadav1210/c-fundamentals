#include <stdio.h>
#include <math.h>
int calSquare(int num);
int calcube(int num);
double custom_sqrt(double n);

int main()
{
    int choice, num;
    printf("\npress 1 to find the square of the number: ");
    printf("\npress 2 to find the cube of the number: ");
    printf("\npress 3 to find the square root of the number: ");
    printf("\npress any other key  ");

    printf("\nEnter your coice:");
    scanf("%d", &choice);
    printf("Enter the number: ");
    scanf("%d", &num);
    if (choice == 1)
    {
        int sqno = calSquare(num);
        printf("Square of the number is=%d", sqno);
    }
    else if (choice == 2)
    {
        int cuno = calcube(num);
        printf("Cube of the number is=%d", cuno);
    }
    else if(choice==3)
    {
       int sqroot=  custom_sqrt( num);
       printf("Square root of the number is=%d", sqroot);
    }
    else
    {
        printf("The choice entered is wrong ");
    }
}

int calSquare(int num)
{
    int square = num * num;

    return square;
}

int calcube(int num)
{
    int cube = num * num * num;

    return cube;
}

// Function to calculate square root using the Babylonian method
double custom_sqrt(double n)
{
    if (n < 0)
    {
        return -1.0; // Indicate an error or handle as needed
    }
    double error = 0.000001; // Define the precision of the result
    double s = n;            // Initial guess (can be n or n/2)

    while (fabs(s - n / s) > error)
    { // Iterate until precision is met
        s = (s + n / s) / 2;
    }
    return s;
}
