void display2DArray(int row, int col, int a[row][col])
{
    printf("\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d  ",a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}