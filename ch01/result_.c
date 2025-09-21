#include <stdio.h>
int main()
{
    float marks, results;
    printf("Enter your marks:");
    scanf("%f", &marks);
    if (marks < 33)
        printf("the person is fail");
    else if (33 <= marks && marks <= 50)
        printf("the person is 3rd division");
    else if (50 < marks && marks <= 60)
        printf("the person is 2nd division");
    else if (60 < marks && marks <= 100)
        printf("the person is 1st division");
    else
        printf("the number is invalid");

    return 0;
}
