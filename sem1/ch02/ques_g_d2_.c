#include <stdio.h>

void show();

int main()
{
    /*
    1-5 - 0.5 rupee
    6-10 - 1 rupee
    10 > - 5 rupee
    30 > membership cancel

    up[n]-ll[n] +1= no of days 
    */
    int days;
    float fine;
    float newRate;

    int const lowerRange[] = {1,6,11};  
    int const upperRange[] = {5,10,30};
    float const rates[] = {2.5,15,25};
    
    printf("Enter the delay days :");
    scanf("%d", &days);

    if (lowerRange[0] <= days && days <= upperRange[0])
    {
        newRate = rates[0];
        fine = days * newRate;
        printf("Your fine is : %f\n", fine);
    }
    else if (lowerRange[1] <= days && days <= upperRange[1])
    {
        newRate = rates[1];
        int noOfDayInPrevSlab = (upperRange[0]-lowerRange[0]+1); 
        fine = (days - noOfDayInPrevSlab) * newRate + noOfDayInPrevSlab * rates[0];
        printf("Your fine is : %f\n", fine);
    }
    else if (days > lowerRange[2] )
    {
        newRate = rates[2];
        int noOfDayInPrevSlab = (upperRange[1]-lowerRange[1]+1); 
        
        fine = (days - upperRange[1]) * newRate + noOfDayInPrevSlab * rates[1] + noOfDayInPrevSlab * rates[0];
        printf("Your fine is : %f\n", fine);
        printf("Your membership is cancelled\n");
    }
    if (days > upperRange[2])
    {
        printf("Your membership is cancelled\n");
    }

    show();

    return 0;
}

void show(){
    printf("----calling show method---------");
}