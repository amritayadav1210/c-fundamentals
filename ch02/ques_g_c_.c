#include <stdio.h>
int main()
{
    int hardness, tensilestrength;
    float carboncontent;
    //int const tensilestrength;
    printf("enter the hardness of the steel:");
    scanf("%d", &hardness);
    printf("enter the carbon conent of the steel:");
    scanf("%f", &carboncontent);
    printf("enter the tenile strength of the steel:");
    scanf("%d", &tensilestrength);
    if (hardness > 50 && carboncontent < 0.7 && tensilestrength > 5600)
        printf("The Grade is 10");
    else if (hardness > 50 && carboncontent < 0.7 && tensilestrength <= 5600)
        printf("The Grade is 9");
    else if (hardness <= 50 && carboncontent < 0.7 && tensilestrength > 5600)
        printf("The Grade is 8");
    else if (hardness > 50 && carboncontent >= 0.7 && tensilestrength > 5600)
        printf("The Grade is 7");
    else if (hardness > 50 || carboncontent < 0.7 || tensilestrength > 5600)
        printf("The Grade is 6");
    else
        printf("The grade is 5");

    return 0;
}
