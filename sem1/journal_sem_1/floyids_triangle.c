#include <stdio.h>
int main()
{
    int  rows, num;
    printf("Enter the no of rows/cols:");
    scanf("%d", &rows);
    int count =1;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < rows; j++)
        {

            if (i >= j)
            {                printf("%d ",count);
                count++;
            }
        }
        printf("\n");
    }
    return 0;
}