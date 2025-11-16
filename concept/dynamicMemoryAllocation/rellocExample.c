#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr, initial_size = 2, new_size = 4;

    ptr = (int*)malloc(initial_size * sizeof(int));
    if (ptr == NULL) return 1;

    ptr[0] = 10;
    ptr[1] = 20;

    printf("Original size values: %d, %d\n", ptr[0], ptr[1]);

    // Reallocate to a larger size
    ptr = (int*)realloc(ptr, new_size * sizeof(int));
    if (ptr == NULL) return 1;

    ptr[2] = 30;
    ptr[3] = 40;

    printf("New size values: %d, %d, %d, %d\n", ptr[0], ptr[1], ptr[2], ptr[3]);

    free(ptr);
    return 0;
}
