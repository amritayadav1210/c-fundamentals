#include <stdio.h>
/*
Input  : 
Enter Basic Salary : xxx.00 
Output :
-------------------------------------------------
        Salary Slip
-------------------------------------------------
    Basic                   ------------: xxx.00
    House Rent Allowance    ------------: yyy.00
    Dearness  Allowance     ------------: zzz.00
-------------------------------------------------
    Gross Salary            ------------: aaa.00
-------------------------------------------------
*/
int main()
{
    float basic;
    //Inputs
    printf("\nEnter the Value of Basic Component :");
    scanf("%f", &basic);

    //Logic to calculate salary component amount capture in variables
    float dearnessAllowence, houseRentAllowence, totalsalary;
    dearnessAllowence = (40.0 / 100) * basic;
    houseRentAllowence = (20.0 / 100) * basic;
    totalsalary = dearnessAllowence + houseRentAllowence+basic;


    //Create Output

    printf("\n-------------------------------------------------");
    printf("\n        Salary Slip");
    printf("\n-------------------------------------------------");
    printf("\n    Basic                   ------------: %.2f",basic);
    printf("\n    House Rent Allowance    ------------: %.2f",houseRentAllowence);
    printf("\n    Dearness  Allowance     ------------: %.2f",dearnessAllowence);
    printf("\n-------------------------------------------------");
    printf("\n    Gross Salary            ------------: %.2f",totalsalary);
    printf("\n-------------------------------------------------");
    
    return 0;
}