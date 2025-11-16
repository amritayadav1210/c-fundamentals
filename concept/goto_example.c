#include <stdio.h>

int main() {
    int i = 0;
    
    vishal:
    printf("\nVishal goto start");

    loop_start_annu: // The label
    if (i < 5) {
        printf("\n%d ", i);
        i++;

        if(i==3){
            goto vishal;
        }
        goto loop_start_annu; // Jump back to the label
    }

    printf("\n");
    return 0;
}