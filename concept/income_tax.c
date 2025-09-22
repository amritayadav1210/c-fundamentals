#include<stdio.h>

//1. Income Tax Slab 
    /*
    Lower Limit      Upper Limit      Tax Rate
    ------------------------------------------
    0                2,50,000        Nil
    2,50,001         5,00,000        5%
    5,00,001         10,00,000       20%
    10,00,001        and above       30%    
    ------------------------------------------
*/
int const lower_limit[]= {0,250001,500001,1000001};
int const upper_limit[]= {250000,500000,1000000,2147483647};
float const tax_rate[]= {0.0,0.05,0.20,0.30};

int main(){

    //2. Total Income 

    int income;
    printf("Enter -- your income : ");
    scanf("%d",&income);

    float tax;
    int i;

    if(income <= upper_limit[0]){
        tax=0;
        printf("Your Income Tax slab 1 is : %d\n",tax);

    } else if(income <= upper_limit[1]){
        // 5% tax
        tax = (income - lower_limit[1]-1) * 0.05;
        printf(" tax= %d\n", tax);
    
         printf("Your Income Tax slab 2 is : %d\n",tax);

    } else if(income <= upper_limit[2]){
        printf("\n Your Income Tax slab 3 :\n");
        printf("\n income =%d",income);
        printf("\n lower_limit[2] =%d",lower_limit[2]);
        printf("\n upper_limit[1] =%d",upper_limit[1]);
        printf("\n lower_limit[1]-1 =%d",lower_limit[1]-1);
        
        // 20% tax
        tax = ((income - (lower_limit[2]-1)) * 0.20) + ((upper_limit[1] - (lower_limit[1]-1)) * 0.05);
        printf("\n Calculated tax --===-= %f", tax);
    
        
    } else {
        //30% tax
        tax = (income - (lower_limit[3]-1)) * 0.30 + (upper_limit[2] - (lower_limit[2]-1)) * 0.20 + (upper_limit[1] - (lower_limit[1]-1)) * 0.05;
        printf(" tax= %d\n", tax);
    
         printf("Your Income Tax slab 4 is : %d\n",tax);

    }

    printf("\nYour Income Tax is : %f\n",tax);

    return 0;
}
