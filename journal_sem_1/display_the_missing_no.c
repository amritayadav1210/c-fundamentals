#include<stdio.h>
int main()
{
    int num ,i ,rem ;  
    double digitArray[10];


    printf("Enter any number:");
    scanf("%d",&num);
    printf("-----size of Rem :%d",sizeof(rem));

     for(i=0;i<=num;i++)
      {
        rem=num%10;
        printf("\nThe rem is:%d",rem);
        digitArray[rem]=1;

            num=num/10;
      printf("\nThe new number is:%d",num);
      
      }
        
      int size = sizeof(digitArray) / sizeof(digitArray[0]);
      printf("\nsizeof --->>%d",sizeof(digitArray));
      printf("\nsizeof --->>%d",sizeof(digitArray[0]));
      printf("\nsize --->>%d",size);
      
      

      printf("\nDigits not Found in the Entered Number are :");
      for(int i = 0;i< size;i++){
        if(digitArray[i] != 1){
            printf(" %d",i);
        }
        //printf("\n a[%d]==%d",i,digitArray[i]);
      }

      return 0;
      
}