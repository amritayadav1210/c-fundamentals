#include<stdio.h>
#include<math.h>
int main()
{
    double x1=2,x2=4,x3=6,y1=8,y2=10,y3=12;
    double distance1;
    double add;
    double power1 = pow(x2-x1, 2);
    printf("--power1:%lf",power1);

    double power2 = pow(y2-y1, 2);
    add = power1+power2;
    sqrt(add);
    //dist=sqrt(pow(x2-x1, 2)+pow(y2-y1, 2));
    
    
   // (x1-x2)^2 = pow()
   printf("--The disttance 1 is:%lf",add);

   //double distance1=sqrt();
 

}