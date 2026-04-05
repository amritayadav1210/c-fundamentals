#include<stdio.h>
void methodC();
void methodA();

int main(){

    printf("-\n--Main starts");
    methodA();
    printf("\nmain line 6");

    return 0;
}

void methodA(){
    printf("\n methodA step 1");
    printf("\n methodA step 2");
    printf("\n methodA step 3");
    methodC();
    printf("\n methodA step 4");
    printf("\n methodA step 5");
    
}
void methodC(){
    printf("\n methodC step 1");
    //methodA();
    printf("\n methodC step 2");
    
}