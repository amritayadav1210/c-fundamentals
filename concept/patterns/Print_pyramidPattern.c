#include <stdio.h>
int main()
{
    // variable declaration
    int i, j, rows, columns;
    // inputs
    printf("\nEnter Number of Rows    :");
    scanf("%d", &rows);
    printf("\nEnter Number of Columns :");
    scanf("%d", &columns);

    // Pattern Logic
    int showI = 0;
    int showJ = columns-1;
    //first block
    for (i = 0; i < rows; i++)
    {   
        for (j = 0; j < columns; j++)
        {
            if(i==showI && j==showJ || i==4){
                printf(" * ",i,j);
                showI = showI+1;
                showJ = showJ-1;
            }else{
                printf("   ");
            }
        }
    //second block
        for (j = 1; j < columns; j++)
        {
            // printf(" %d-%d ",i,j);
            if (i == 4|| i == j)
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }
        }
            
        printf("\n"); // enter
    }

    return 0;
}