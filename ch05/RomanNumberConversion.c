#include<stdio.h>

//const number[]={1,5,10,50,100,500,1000};
const char roman[]={'i','v','x','l','c','d','m'} ;
    
int main(){
    printf("---This is Main----");

    
    int input = 29;

    int i = input;

    int count = 0;

    char romValue[20] ; 
    int j=0;
    int r=0;

    while(i%10>0){

        printf("\ni=%d",i);
        int currentDigit = i%10;
        printf("\ncurrentDigit=%d",currentDigit);
        
        if(currentDigit >= 1 && currentDigit <=3)
        {   
            for( ;j<currentDigit;j++){
                printf("\nj=%d , roman[count] = %c",j,roman[count]);
                romValue[r] = roman[count];
            }
        }else if(currentDigit == 4){
            romValue[r] = roman[count];
            r++;
            romValue[r] = roman[count+1];
            r++;
        }else if(currentDigit == 5){
            romValue[r] = roman[count+1];
            r++;
        }else if(currentDigit >= 6 && currentDigit <=8)
        {
            romValue[r] = roman[count+1];
            r++;
            //j=1, currentDigit = 6
            for( ;j<=currentDigit-5;j++,r++){
                printf("\nj=%d , roman[count] = %c",j,roman[count]);
                romValue[r] = roman[count];
            }
        }else if(currentDigit == 9){
            printf("\n 9 block");
            romValue[r] = roman[count];
            r++;
            romValue[r] = roman[count+2];
            r++;
        }

        //break;
        j=0;
        i=i/10;
        count+=2;
    }

    int size = sizeof(romValue)/sizeof(romValue[0]);

    printf("\n Roman Value = ");
    for(int i=0;i<r;i++){
        printf("%c",romValue[i]);
    }
    printf("\n\n");


}

void mapNumberToRoman(int temp){
    

}


