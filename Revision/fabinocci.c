#include<stdio.h>
int fabinoci(int n);

int main()
{
   
    for(int i=0;i<=10;i++)
    {
        int result = fabinoci(i);
        printf(" %d",result);        
    }
}
int fabinoci(int n)
{
    

    if(n ==0 || n == 1){
        return n;
    }
    return fabinoci(n-1)+fabinoci(n-2);
}
