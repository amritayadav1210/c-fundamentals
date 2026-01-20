#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    int rem,sum=0,count=0;
    int tempnum=num;
    //For countin the digits
    while(tempnum>0)
    {
        count++;
        tempnum=tempnum/10;
    }
    int tenpower=1;
    for(int j=0;j<count-1;j++)
    {
        tenpower=tenpower*10;     
    }
    for(int i=tenpower;i>=1;i=i/10)
    {
        rem=num%10;
        sum=sum+rem*i;
        num=num/10;
    }
    printf("The reversed number is:",sum);
    return 0;


}