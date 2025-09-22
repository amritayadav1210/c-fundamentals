#include <stdio.h>
#include <math.h>

int main()
{

    double num;
    printf("Enter the Number :");
    scanf("%lf", &num);

    double sqartRoot = sqrt(num);
    double power = pow(num, 2);

    printf("\nResult of SqartRoot is %lf ", sqartRoot);
    printf("\nResult of pow(%lf,2) is %lf ", num, power);
}