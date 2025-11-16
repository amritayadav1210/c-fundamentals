#include <stdio.h>
#define PI 3.14

void calculateAreaPerimeter(int r, int *a, int *p);

int main()
{

    int radius, area, perimeter;
    printf("\nEnter the Radious of Circle : ");
    scanf("%d", &radius);

    calculateAreaPerimeter(radius, &area, &perimeter);

    printf("\nArea of Circle : %d",area);
    printf("Perimeter of Circle : %d",perimeter);

    
    return 1;
}

void calculateAreaPerimeter(int r, int *a, int *p)
{
    // area = pi*r*r;
    *a = PI * r * r;
    // perimeter = 2*pi*r
    *p = 2 * PI * r;
}
