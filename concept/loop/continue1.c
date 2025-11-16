#include <stdio.h>

int main()
{
    printf("\n-----This is Main-start---");

    for (int i = 0; i < 10; i+=2)
    {
        /*
        if(i%2==1){
            continue;
        }
        */
        
        printf("\nEven Number = %d", i);

        
    }
    printf("\n-----This is Main-end!!---");

    return 0;
}