/*
Fibonacci sequence: a series of numbers in which
each number is the sum of the two preceding ones.
*/

#include<stdio.h>

int main(){
    
    //int result = fabinoci(7);
    //printf("fabinoci %d",result);

    for(int i=1;i<=10;i++){
        int result = fabinoci(i);
        printf(" %d",result);        
    }

}

int fabinoci(int n){
    //base case
    if(n ==1 || n == 2){
        return 1;
    }
    return fabinoci(n-1)+fabinoci(n-2);
}

/*
int displayFabinoci(int n){
    int lastDigit=1 ,secondLastDigit=1;

    if(n == 1 || n == 2){
        return 1;
    }
}
*/

