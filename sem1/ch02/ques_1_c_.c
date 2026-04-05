#include <stdio.h>
int main()
{
    int i;
    printf("\nEnter the number is:");
    scanf("%d", &i);
    if (i % 4 == 0)
    {
        printf("\nThe year is leapyear");
    }
    else
    {
        printf("\nThe year is not a leap year");
    }
    return 0;
}
