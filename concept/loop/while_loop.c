#include <stdio.h>

int main()
{

    printf("\n Print Number from 1 to 10 Using while Loop");

    printf("\n Before Start of for Loop!");
    int i = 1;
    while (i <= 10)
    {
        printf("\ni=%d", i);
        i++;
    }
    printf("\n After End of while Loop!");
    return 0;
}