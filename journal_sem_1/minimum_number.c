#include<stdio.h>
int findmaxinarray(num,size);

int main()
{
    int size;
    printf("Enter the size of the array: ");
    scanf("%d",&size);
     
    //now declare the array
    int num[size];
    //initialising index values /array
    for(int i=0; i<size; i++ )
    {
        printf("\nnumbers[%d]:",i);
        scanf("%d",&num[i]);

    }
    //calling my function
     int minnum=findmaxinarray(num,size);
     printf("the minimum number in the array is:%d",minnum);


}
int findmaxinarray(int a[],int size)
{
    int min_num, i;
    //declaring and initialising the minimum number
    min_num = a[0];
    //findin/checking the minimum number
    for(i=0 ; i<size ; i++)
     {
        if(min_num>a[i])
        {
            min_num=a[i];

        }

     }
     return min_num;
    
}

