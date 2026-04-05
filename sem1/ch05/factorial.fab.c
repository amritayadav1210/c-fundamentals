#include <stdio.h>
int rec(int x);

int main()
{
    int num, fact;
    printf("Enter the number:");
    scanf("%d", &num);
    fact = rec(num);
    printf("fact=%d", fact);
    return 0;
}
int rec(int x)
{
    int f;
    if (x == 1)
        return (1);
    else
        f = x * rec(x - 1);
    return (f);
}