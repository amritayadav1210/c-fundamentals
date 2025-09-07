// Calculating area of rectangle 
#include <stdio.h>

const float PI=3.14;
        
int main(){

    printf ("Press '1' For Rectangle\n");
    printf ("Press '2' For Circle\n");
    printf ("Your Press :");
    int choice;
    scanf("%d",&choice);
    
    float area;

    if(choice == 1){
        // Area of Rectangle
        // inputs : lenght(l) ,breadth (b)
        // formula: l*b
        // output : area (area)
        int b;
        float l;
        printf ("enter breadth of thr rectangle:");
        scanf("%d",&b);

        printf("enter leanth of the rectangle:");
        scanf("%f",&l);
        
        area=l*b;
        printf(" area of rectangle %f\n",area );
    
    } else if(choice==2){
        // area of circle
        //inputs: radius(r)
        //formula: pi*r*r;
        // output : area of circle(area)
        int r;
        printf("radius:");
        scanf("%d",&r);

        area=PI*r*r;
        printf("%f",area);

    }else {
        printf(" You have entered wrong choice!!");
    }
    
    return 0;
}