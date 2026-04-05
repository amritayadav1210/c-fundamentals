#include <stdio.h>
int main()
{
    int angle1, angle2, angle3;
    printf("Enter angle 1:");
    scanf("%d", &angle1);

    printf("Enter angle 2:");
    scanf("%d", &angle2);

    printf("Enter angle 3:");
    scanf("%d", &angle3);

    if (angle1 == angle2 && angle2 == angle3 && angle3==angle1)
        printf("\nThis is an equilateral triangle");
      else if (angle1 == angle2 || angle2 == angle3 || angle1 == angle3)
        printf("\nThis is an isoceles triangle");  
    else if (angle1 != angle2 && angle2!= angle3 && angle3!=angle1)
        printf("\nThis is a scalar triangle");
    else if (angle1 == 90 || angle2 == 90 || angle3 == 90)
        printf("\nThis is an Right Angled triangle");


    return 0;
}