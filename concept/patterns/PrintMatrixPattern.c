#include <stdio.h>
int main()
{
    //variable declaration
    int i,j ,rows,columns;
    //inputs
    printf("\nEnter Number of Rows    :");
    scanf("%d", &rows);
    printf("\nEnter Number of Columns :");
    scanf("%d", &columns);

    // Pattern Logic
    for (i=1; i<=rows; i++)
    {
        for(j=1; j<=columns; j++)
        {
            printf("* ");
        }
        printf("\n");//enter
    }

    return 0;
}