#include<stdio.h>
int add(int a,int b);
float divide(int a, int b);

int main(){

    int n,m;
    
    printf("\n result of add(4,7) = %d",add(4,7));
    printf("\n result of add(14,27) = %d",add(14,27));
    printf("\n result of add(54,76) = %d",add(54,76));

    printf("\n result of divide(4,2) = %d\n",divide(4,2));
    printf("\n result of divide(53,6) = %d\n",divide(53,6));
    printf("\n result of divide(54,0) = %d\n",divide(54,0));

}

int add(int a,int b){
    int c = a + b;
    return c;
}

//funtion Overloading
float divide(int a, int b){
    float c =(float) a / b ;
    printf("\n After Division Operation");
    return c;
}
