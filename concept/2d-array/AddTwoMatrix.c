#include <stdio.h>
void initialize2DArray(int row, int col, int a[row][col]);
void display2DArray(int row, int col, int a[row][col]);
void addTwo2DArray(int row, int col, int a[row][col], int b[row][col], int c[row][col]);

void main()
{
    int row, col;
    printf("\n Enter the No of Row :");
    scanf("%d", &row);
    printf("\n Enter the No of Col :");
    scanf("%d", &col);

    int a[row][col];
    initialize2DArray(row, col, a);
    display2DArray(row, col, a);

    int b[row][col];
    initialize2DArray(row, col, b);
    display2DArray(row, col, b);

    int addResult[row][col];
    addTwo2DArray(row, col, a, b, addResult);

    printf("--------Print a[][]------------");
    display2DArray(row, col, a);
    printf("--------Print b[][]------------");
    display2DArray(row, col, b);
    printf("--------Print c[][]------------");
    display2DArray(row, col, addResult);

}

// Function for initializing the 2D Array
void initialize2DArray(int row, int col, int a[row][col])
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("\nEnter elements for Matrix Position [%d] [%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
}

// Function for initializing the 2D Array
void display2DArray(int row, int col, int a[row][col])
{
    printf("\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d  ", a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

// Function to Add Two 2D arrays and Return Result in c Array
void addTwo2DArray(int row, int col, int a[row][col], int b[row][col], int c[row][col])
{
    printf("\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
            printf("%d  ", c[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}