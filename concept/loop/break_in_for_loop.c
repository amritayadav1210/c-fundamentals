#include <stdio.h>

int main()
{

    printf("\n Print Number from 1 to 10 Using for Loop");

    int value;
    printf("\n Before Start of for Loop!");
    for (int i = 1; i <= 100; i++)
    {
        if (i==47)
        {
            continue;
        }
        printf("\ni=%d", i);

        if (i==47)
        {
            break;
        }
        if (i % 2 == 0)
        {
            printf(" The number is even");
        }
        else
        {
            printf(" the number is odd");
        }
        if (i == 47)
        {
            break;
        }
    }
    printf("\n After End of for Loop!");

    return 0;
}