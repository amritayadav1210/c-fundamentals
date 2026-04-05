#include <stdio.h>
int main(){

    double km, cm, m, inches, feet;
    printf("\nPlease Enter the Distance between Two Cities is(in km) : ");
    scanf("%lf",&km);
    
    
    printf("\nDistance Enterred =%.4f",km);

    m = km/100000.00; //0.00024
    printf("\nDistance in Meter(m)=%.4f",m);
    cm = km/1000.00; //0.024
    printf("\nDistance in Centimeter(cm)=%.4f",cm);
  
  
    return 0;
}