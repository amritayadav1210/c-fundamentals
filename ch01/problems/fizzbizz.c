#include<stdio.h>
int main()
{
    int a, b;
    
    for(int x=1;x<=20;x++ ){
        if(x%3==0){
            printf("fizz\n");
        }else if(x%5==0){
            printf("bizz\n");
        }else{
            printf("%d\n",x);
        }
        
    }
}