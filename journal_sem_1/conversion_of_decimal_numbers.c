#include<stdio.h>
void decimalToBinaryConversion(int decimalNumuber);

int main()
{
    int num, i, q, rem=0;
    printf("Enter any number:");
    scanf("%d",&num);
    decimalToBinaryConversion(num);

   return 0;
}

void decimalToBinaryConversion(int decimalNumuber){
    int binArr[50] ;
    int num=decimalNumuber,rem;
    int count=-1;
    int i;
    while (num > 0)
    {
        rem = num % 2;  //Step 1:
        printf("rem = %d\n",rem);
        count++;
        binArr[count]= rem;

        num = num / 2;  //Step 3:
    }

    //Print in reverse order
    for( i=count;i>=0;i--){
        printf("%d",binArr[i]);
    }

}