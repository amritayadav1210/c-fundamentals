#include <stdio.h>
int main()
{
    int i, j;
    float remainder,quotent;
    printf(" the divisor(i) is:");
    scanf("%d", &i);
    printf(" the divedend (j) is:");
    scanf("%d", &j);
    quotent = j / i ;
    printf("%f", quotent);
    printf("the quotent is");

    remainder = j % i;
    printf("the remainder (j/i)is:");
    printf("%f", remainder);

    return 0;
}
