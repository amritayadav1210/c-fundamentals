#include <stdio.h>
int main()
{
    int a, b, c;
    int ch;
    printf("enter the first no:");
    scanf("%d", &a);
    printf("enter the second no:");
    scanf("%d", &b);
    printf("\n1. Addition \n2. Subtraction \n3. Multiplication\n4. Division\n\n");

    printf("\nEnter your choice:");
    scanf("%d", &ch);
    printf("\n");
    switch (ch)
    {

    case 1:
        c = a + b;
        printf("the result is :%d", c);
        break;

    case 2:
        c = -b;
        printf("the result is :%d", c);
        break;

    case 3:
        c = a * b;
        printf("the result is :%d", c);
        break;

    case 4:
        c = a / b;
        printf("the result is :%d", c);
        break;
    default:
        printf("invalid choice\n");
    }
    return 0;
}