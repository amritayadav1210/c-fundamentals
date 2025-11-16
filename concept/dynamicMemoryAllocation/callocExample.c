#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 5;

    // Allocate memory for 5 integers and initialize to zero
    int* ptr = (int*)calloc(n, sizeof(int));

    if (ptr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Memory successfully allocated using calloc (initialized to zero).\n");
    printf("First element: %d\n", ptr[0]); // Will print 0

    free(ptr);
    return 0;
}
