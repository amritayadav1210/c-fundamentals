#include <stdio.h>
int main()
{
    int i;
    printf("\nEnter the number is:");
    scanf("%d", &i);
    if (i % 2 == 0)
    {
        printf("\nThe number is even");
    }
    else
    {
        printf("\nThe number is odd");
    }
    return 0;
}