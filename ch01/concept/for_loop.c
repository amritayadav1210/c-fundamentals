#include<stdio.h>

/*
----------: Syntax :------------
for( exp1 ; exp2 ; exp3 ) {

}
--------------------------------
*/

int main(){

    printf("Before First Loop\n");

    for(int i=0;i<= 10;i+=4){
        printf("---------------------\n");
        printf("\tThe value of i = %d\n",i);
        printf("---------------------\n");
        
    }


    printf("Before Second Loop\n");
    int j;

    for( j=0;j<= 14;j+=6){
        printf("*********************\n");
        printf("\tThe value of j = %d\n",j);
        printf("*********************\n");
        
    }

    printf("Before Third Loop\n");
    int k=0;

    for(j=20  ;k< 3;k++,j+=8){
        printf("X------X-------X-------X\n");
        printf("\tThe value of j = %d and k = %d\n",j,k);
        printf("X------X-------X-------X\n");
    }

    printf("Before Fourth Loop\n");
    
    for( ; ; ){
    /*
        if(k<6)
            break;
    */ 
     
        printf("X------X-------X-------X\n");
        printf("\tThe value of j = %d and k = %d\n",j,k);
        
        printf("X------X-------X-------X\n");
        k++;
    }


}