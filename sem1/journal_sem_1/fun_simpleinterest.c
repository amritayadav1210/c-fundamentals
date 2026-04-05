#include<stdio.h>
float simpleInterest(int p,float r,int t);
int main()
{
    int p,t;
    float r,si;
    printf("Enter the principal amount:");
    scanf("%d",&p);  
    printf("Enter the rate:");
    scanf("%f",&r);
    printf("Enter the time:");
    scanf("%d",&t);
    si=simpleInterest(p,r,t);
    printf("Simple Interest =%f",si);
}
float simpleInterest(int p,float r,int t)
{
    float si=p*r*t/100.0;

    return si;
}