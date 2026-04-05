#include <stdio.h>
int main()
{
    int costprice, sellingprice, value;
    printf("\ncost price of the produvt is:");
    scanf("%d", &costprice);

    printf("selling price of the product is:");
    scanf("%d", &sellingprice);
    value = sellingprice - costprice;
    if (value > 0)
    {
        printf("\nThe Deal is in profit");
        printf("\nthe profit value is:%d", value);
    }
    else if (value < 0)
    {
        printf("\nThe Deal is in loss");
        printf("\nthe loss value is:%d", value);
    }
    else
    {
        printf("No Loss or Profit");
    }
    return 0;
}