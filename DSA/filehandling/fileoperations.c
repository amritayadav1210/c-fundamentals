#include <stdio.h>

int main() {
    FILE *fptr;
    fptr = fopen("data.txt", "w"); // Open for writing

    if (fptr == NULL) {
        printf("Error opening file!");
        return 1;
    }

    fprintf(fptr, "Hello, C Files!"); // Write text to file
    fclose(fptr); // Always close the file
    return 0;
}
