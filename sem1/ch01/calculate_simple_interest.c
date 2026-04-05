#include <stdio.h>

int main(){
    // integer variable declaration
    int p,n;

    //float variable declaration
    float r,si;
    printf("Enter the Principle Amount :");
    scanf("%d",&p);
    printf("Enter the time :");
    scanf("%d",&n);
    printf("Enter the rate of interest :");
    scanf("%f",&r);

    //assigning values
    //p=100;


    //formula for simple interest
    si=p*n*r/100;
    
    printf("%f",si);
    return 0;

}
