#include <stdio.h>

void table(int number, int limit);

int main()
{
    int num, limit, calculation;
    printf("Enter the no. for which you want the tablel:");
    scanf("%d", &num);
    printf("Enter the limit till where you want to print the table:");
    scanf("%d", &limit);

    table(num, limit);

    return 0;
}

void table(int number, int limit){
    for (int i = 1; i <= limit; i++)
        printf("\n %dx%d=%d", number, i, i * number);
}