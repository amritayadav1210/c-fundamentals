#include <stdio.h>

int main()
{
    int n = 17;
    printf("\nPrinting Table  :", n);
    for (int i = 1; i <= 10; i++)
    {
        printf("\n%2d X %2d = %3d", n, i, (n * i));
    }
    return 0;
}