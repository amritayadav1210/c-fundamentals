# include<stdio.h>

void display(int a[], int size);
void mergeSortDivide(int a[], int low, int high);
void mergeSortConquer(int a[], int low, int mid, int high);


int main(){

    printf("----Merge Sort----");
    int arr[] = {12,6,17,10,8};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    printf("\n------Before-------------------\n");
    display(arr,size);
    
    mergeSortDivide(arr,0,size-1);
    
    printf("\n------After-------------------\n");
    display(arr,size);
    
    return 1;
}

void display(int a[], int size){
    printf("\n-------------------------\n");
    for(int i=0;i< size;i++){
        printf(" %d",a[i]);
    }
}


void mergeSortDivide(int a[], int low, int high){
    printf("\n mergeSortDivide low: %d, high: %d",low,high);
    if(low < high){
        int mid = (low + high)/2;
        mergeSortDivide(a, low, mid);
        mergeSortDivide(a, mid+1,high);

        mergeSortConquer(a,low,mid,high);
    }
}

void mergeSortConquer(int a[], int low, int mid, int high){
    int leftSize = mid-low+1;
    int rightSize = high-mid;

    int leftArr[leftSize];
    for(int i=0;i< leftSize;i++){
        leftArr[i] = a[low+i];
    }
    
    int rightArr[rightSize];
    for(int i=0;i<rightSize;i++){
        rightArr[i] = a[i+mid +1];
    }

    int i=0,j=0,k=low;
    while(i< leftSize && j < rightSize){
        if(leftArr[i]<= rightArr[j]){
           a[k]=leftArr[i];
           k++;
           i++; 
        }else{
            a[k] = rightArr[j];
            k++;
            j++;
        }
    }

 
    while(i< leftSize ){
        a[k]=leftArr[i];
        k++;
        i++;
    }

    while(j < rightSize){
        a[k] = rightArr[j];
        k++;
        j++;
    }

    display(a,high-low);

}