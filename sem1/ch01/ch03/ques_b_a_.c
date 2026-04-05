// calculate money paid for overtime / above 40 hours
#include <stdio.h>
int main()
{
    int i, totaltime, overtime, overtimesalary;

    for (i = 1; i<=10; i++)
   { //printf("\nThe value of i = %d",i);

    printf("\ntotal time worked by men:");
    scanf("%d",&totaltime);

    overtime = totaltime - 40;

    overtimesalary = 12 * overtime;
    printf(" overtimesalary= %d\n", overtimesalary);
    }
}