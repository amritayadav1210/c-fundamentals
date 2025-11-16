#include <stdio.h>
#include <stdlib.h> // Required for malloc, free, etc.

int main()
{
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Allocate memory for 'n' integers
    // malloc returns void*, so we cast it to an int* pointer type
    int *ptr = (int *)malloc(n * sizeof(int));

    // Check if allocation was successful
    if (ptr == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1; // Exit with error
    }

    printf("Memory successfully allocated using malloc.\n");

    // Initialize the allocated memory (it contains garbage initially)
    for (int i = 0; i < n; i++)
    {
        *(ptr + i) = i + 1; // Equivalent to ptr[i] = i + 1;
    }

    // Print the elements
    printf("The elements are: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d, ", *(ptr + i));
    }
    printf("\n");

    // 4. free() - Release the memory
    free(ptr);
    printf("Memory freed.\n");

    return 0;
}
