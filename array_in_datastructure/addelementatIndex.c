#include<stdio.h>

void rightShiftArrayElement(int a[],int endIndex,int index);
void display(int a[],int size);
void add(int a[],int endIndex,int index,int data );

int main()
{
    
    int arr[]={5,6,8,9,3};
    int size = sizeof(arr)/sizeof(arr[0]);

    printf("\n before shifting--");
    display(arr,size);
    //rightShiftArrayElement(arr,3,1);
    add(arr,3,0,10 );
    printf("\n after shifting--");
    display(arr,size);
    
    
    return 0;
}

void add(int a[],int endIndex,int index,int data ){
    rightShiftArrayElement(a,endIndex,index);
    endIndex++;
    a[index]=data;
}

void rightShiftArrayElement(int a[],int endIndex,int index){
    for(int i=endIndex;i>=index;i--){
        a[i+1]=a[i];
    }
}

void display(int a[],int size){
    printf("\n-------------------------------------");
    for(int i=0;i<size;i++){
        printf(" %d ",a[i]);
    }
    printf("\n-------------------------------------");
    
}