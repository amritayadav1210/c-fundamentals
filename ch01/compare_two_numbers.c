#include <stdio.h>

int main()
{

    int a;
    int b;
    int c;
    int d;

    printf("Enter the value of a\n");
    scanf("%d", &a);

    printf("Enter the value of b\n");
    scanf("%d", &b);

    printf("Enter the value of c\n");
    scanf("%d", &c);

    printf("Enter the value of d\n");
    scanf("%d", &d);

    printf("\na=%d, b=%d, c=%d, d=%d", a, b, c);
    // Logic to Find Greatest

    if (a > b)
    {
        if (a > c)
        {
            if (a > d)
            {
                printf("\na=%d isthe greatest number", a);
            }
            else
            {
                printf("\nd=%d isthe greatest number", d);
            }
        }
        else
        {
            if (c > d)
            {
                printf("\nc=%d isthe greatest number", c);
            }
            else
            {
                printf("\nd=%d isthe greatest number", d);
            }
        }
    }
    else
    {
        if (b > c)
        {
            if (b > d)
            {
                printf("\nb=%d isthe greatest number", b);
            }
            else
            {
                printf("\nd=%d isthe greatest number", d);
            }
        }
        else
        {
            if (c > d)
            {
                printf("\nc=%d isthe greatest number", c);
            }
            else
            {
                printf("\nd=%d isthe greatest number", d);
            }
        }
    }

    return 0;
}