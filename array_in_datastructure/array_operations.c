#include<stdio.h>
int add(int a[] ,int size, int lastElementIndex, int data);
void display(int a[],int lastElementIndex);

int main()
{
    int size=10;
    int a[size];
    int lastElementIndex = -1;
    printf("main method");
    printf("\nlast ::%d",lastElementIndex);
    lastElementIndex = add(a,size,lastElementIndex,5);
    printf("\nlast ::%d",lastElementIndex);
    display(a,lastElementIndex);
    lastElementIndex = add(a,size,lastElementIndex,10);
    printf("\nlast ::%d",lastElementIndex);
    display(a,lastElementIndex);

    
}

int add(int a[] ,int size, int lastElementIndex, int data){

    if(lastElementIndex >=-1 && lastElementIndex < size ){
        lastElementIndex = lastElementIndex+1;
        a[lastElementIndex] = data;
    }else{
        printf("Invalid Last Index !!");
    }
    return lastElementIndex;
}

void display(int a[],int lastElementIndex){
    printf("\n-------------Display-starts-----------------");
    for(int i=0;i<= lastElementIndex;i++){
        printf(" \n a[%d] = %d",i,a[i]);
    }
    printf("\n-------------Display-ends-----------------");
    
}