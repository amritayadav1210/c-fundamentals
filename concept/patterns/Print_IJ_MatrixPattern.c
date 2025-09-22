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
    for (i=0; i<rows; i++)
    {
        for(j=0; j<columns; j++)
        {
           // printf(" %d-%d ",i,j);
            if(i==j || i ==0 || i==(columns-1) || i<j){
                printf(" * ");
            }else{
                printf("   ");
            }
        }
        printf("\n");//enter
    }

    return 0;
}