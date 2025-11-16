#include <stdio.h>
#include <string.h> // Required to use functions like strlen, strcpy, etc.
void displayCharArray(char a[]);

int main()
{
    char source[] = "Hello, world!";
    printf("----source displayCharArray----");
    displayCharArray(source);

    int length = strlen(source);
    printf("length of source using strlen(source) = %d", length);

    char destination[20]; // Ensure destination is large enough

    // Use a string library function
    strcpy(destination, source);
    printf("----destination displayCharArray----");
    displayCharArray(destination);

    printf("\nCopied string: %s\n", destination);

    char src[] = "Hello Test!!";
    char dest[10];
    strncpy(dest, src, 7);
    printf("\nCopied string strncpy(destination, source, 4) --: %s\n", dest);

    char src2[] = "Hello Test!!";
    char dest2[] = "\nI am Vishal Testing this";
    strcat(dest2, src2);
    printf("\nCopied string strcat(destination, source) --: %s\n", dest2);

    char s1[] = "Vishal";
    char s2[] = "Yadav";
    char s3[] = "Yadav";

    if (strcmp(s1, s2) == 0)
    {
        printf("\ns1 ==== s2");
    }
    else
    {
        printf("\ns1 != s2");
    }

    if (strcmp(s3, s2) == 0)
    {
        printf("\ns3 ==== s2");
    }
    else
    {
        printf("\ns3 != s2");
    }

    
    strcat(dest2, src2);
    printf("\nCopied string strcat(destination, source) --: %s\n", dest2);
    
    return 0;
}

void displayCharArray(char a[])
{
    printf("\n----------------------------------------\n");
    // Last Character of char Array = '\0'
    for (int i = 0; a[i] != '\0'; i++)
    {
        printf("\n element index: [%d] == value == '%c'", i, a[i]);
    }
    printf("\n----------------------------------------\n");
}
