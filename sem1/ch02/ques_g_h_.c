#include <stdio.h>
int main()
{
    int orderQuantity, ;
    int remainingDeliveryDate=5 , availableStock = 50;
    char creditStatus;
    printf("\nPress 'Y' for the credit status 'Ok'.\nPress any other character for the credit status 'Not Ok'");
    scanf("%c", &creditStatus);

    if (creditStatus == 'y' || creditStatus == 'Y')
    {
        printf("\nThe Credit is OK");
        printf("\nEnter the Order Quantity:");
        scanf("%d", &orderQuantity);

        if (orderQuantity <= availableStock)
        {
            availableStock = availableStock - orderQuantity;
            printf("\nThe Order of Quantity:%d is Delivered to Customer Succesfully!!", orderQuantity);
            printf("\nThe Current Available Stock : %d", availableStock);
        }
        else
        {
            printf("\nOrder Quantity(%d) is greater that the Current Available Stock(%d) ", orderQuantity, availableStock);
            printf("\nAs per current situation we can deliver you %d items", availableStock);
            int remainingItems = orderQuantity - availableStock;
            printf("\nRemaining items %d we will deliver after %d days", remainingItems,remainingDeliveryDate);
        }
    }
    else
    {
        printf("\n The Credit is 'Not OK' Please Try Again !!");
    }

    return 0;
}