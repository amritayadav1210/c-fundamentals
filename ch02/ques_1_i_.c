//to find the point is on x axis ,y axis or origin
#include <stdio.h>

int main()
{
    int x, y;

    printf("enter the x coordinate :");
    scanf("%d", &x);
    printf("enter the y coordiante :");
    scanf("%d", &y);
    printf("\nPoint(x,y) = (%d,%d)\n", x, y);

    if (x == 0 && y == 0) // TT

        printf("\nThe point lies on the Origin!!");
    // return 0;

    if (x == 0 && y != 0) // TF

        printf("\nThe point lies on the y-axis");
    // return 0;

    if (x != 0 && y == 0) // FT

        printf("\nThe point lies on the x-axis");
    // return 0;

    if (x != 0 && y != 0) // FF
        printf("\nThe point lies on the xy-plane");

    return 0;
}