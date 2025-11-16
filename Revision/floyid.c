#include <stdio.h>
int main()
{
    int dimension, i, j;
    printf("Enter the dimension ");
    scanf("%d", &dimension);
    int count = 1;
    for (i = 0; i < dimension; i++)
    {
        for (j = 0; j < dimension; j++)
        {
            if (i >= j)
            {
                printf("%d", count);
                count++;
            }
            printf("\n");
        }
    }
}