#include <stdio.h>
int main()

{
  int num;
  printf("\nEnter a five digit number ");
  scanf("%d", &num);
  printf("\n________________________________ ");

  int rem, sum = 0, count = 0;

  int digitCount = 0;
  int tempNum=num;

  while (tempNum > 0)
  {
    digitCount++;
    printf("\n----Current Value of digitCount=%d", digitCount);
    //tempNum = tempNum / 10;
    tempNum /= 10;
  }

  printf("\n----Total No of Digits=%d", digitCount);
  printf("\n---- num=%d", num);
    
  int tenPower=1;
  for(int j=0;j<digitCount-1;j++){
    tenPower*=10;
  }
  
  
  for (int i= tenPower; i >= 1; i /= 10)
  {
    printf("\tThe value of i = %d\n", i);
    printf("\n--------------Startofloop------------\n ");

    printf("\nBefore Step 1: num=%d, rem=%d", num, rem);
    rem = num % 10; // Step 1:
    printf("\nAfter Step 1: num=%d, rem=%d", num, rem);

    printf("\nBefore Step 2: sum=%d, rem=%d", sum, rem);
    sum = sum + rem * i; // Step 2:
    printf("\nAfter Step 2: sum=%d, rem=%d, i=%d", sum, rem, i);

    printf("\nBefore Step 3: num=%d", num);
    num = num / 10; // Step 3:
    printf("\nAfter Step 3: num=%d", num);

    printf("\n--------------EndofLoop------------------\n ");
  }
  printf("the reverse of the number is:%d", sum);

  return 0;
}