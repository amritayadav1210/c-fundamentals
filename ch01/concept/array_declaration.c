#include<stdio.h>

int main(){

    //declaration
    int a[5];

    //initilization
    a[0]=5;
    a[1]=10;
    a[2]=15;
    a[3]=20;
    a[4]=25;

    int size = sizeof(a)/sizeof(a[0]);

    for(int i=0; i< size;i++){
        printf(" a[%d] = %d \n",i,a[i]);
    }    
    
    //Declaration & Initialization 
    int b[] = {22,24,26,28};

    char name[]= {'A','m','r','i','t','a'};

    size = sizeof(name)/sizeof(name[0]);

    for(int i=0; i< size;i++){
        printf(" name[%d] = %c \n",i,name[i]);
    }    
    

}