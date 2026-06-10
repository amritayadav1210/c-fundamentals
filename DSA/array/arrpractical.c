#include <stdio.h>
#include <stdlib.h>

#define MAX 100

int arr[MAX];
int n = 0;

// Function Prototypes
void create();
void traverse();
void insert();
void del();
void searchMenu();
void sortMenu();

int main()
{
    int choice;
    while (1)
    {
        printf("\n\n--- ARRAY MENU ---\n1. Create\n2. Traverse\n3. Insert\n4. Delete\n5. Search\n6. Sort\n7. Exit\nEnter: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            create();
            break;
        case 2:
            traverse();
            break;
        case 3:
            insert();
            break;
        case 4:
            del();
            break;
        case 5:
            searchMenu();
            break;
        case 6:
            sortMenu();
            break;
        case 7:
            exit(0);
        default:
            printf("Invalid choice.");
        }
    }
    return 0;
}

// --- Basic Operations ---
void create()
{
    printf("\nno of Elements: ");
    scanf("%d", &n);
    if(n>MAX)
    printf("Element out of bound");
    return;
    if(n<0)
    printf("Element below of bound");
    return;

    for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
}

void traverse()
{
    printf("\nArray: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
}

void insert()
{
    int pos, elem;
    printf("\nPos & Element: ");
    scanf("%d %d", &pos, &elem);
    for (int i = n - 1; i >= pos - 1; i--)
        arr[i + 1] = arr[i]; //Logic: It takes the value at the current position i and moves it one step to the right (i + 1).create a hole at the needed pos 
    arr[pos - 1] = elem;
    n++;
}

void del()
{
    int pos;
    printf("\nPos to delete: ");
    scanf("%d", &pos);
    for (int i = pos - 1; i < n - 1; i++)
        arr[i] = arr[i + 1];
    n--;
}

// --- Sub-menus for Search/Sort (Linear/Binary, Bubble/Insert/Select) ---
void searchMenu()
{
    int sChoice, item, found = 0;
    printf("\n1.Linear 2.Binary\nEnter: ");
    scanf("%d", &sChoice);
    printf("Item: ");
    scanf("%d", &item);
    if (sChoice == 1)
    { // Linear
        for (int i = 0; i < n; i++)
            if (arr[i] == item)
                found = 1;
    }
    else
    { // Binary (Assumes sorted)
        int low = 0, high = n - 1;
        while (low <= high)
        {
            int mid = low + (high - low) / 2;
            if (arr[mid] == item)
            {
                found = 1;
                break;
            }
            if (arr[mid] < item)
                low = mid + 1;
            else
                high = mid - 1;
        }
    }
    printf(found ? "Found" : "Not Found");
}

void sortMenu() {
    int sChoice, i, j, temp;
    printf("\n--- Sort Menu ---\n1. Bubble Sort\n2. Insertion Sort\n3. Selection Sort\nEnter choice: ");
    scanf("%d", &sChoice);

    switch (sChoice) {
        case 1: // Bubble Sort
            for (i = n; i >0; i--) {
                for (j = 0; j < i-1; j++) {
                    if (arr[j] > arr[j + 1]) {
                        temp = arr[j]; 
                        arr[j] = arr[j + 1];
                         arr[j + 1] = temp;
                    }
                }
            }
            printf("Sorted using Bubble Sort.");
            break;

        case 2: // Insertion Sort
            for (i = 1; i < n; i++) {
                 for (j = i; j>=1; j--){
                    if(arr[j-1]>arr[j]){
                        temp=arr[j-1];
                        arr[j-1]=arr[j];
                        arr[j]=temp;

                    }
                 }
            }  
            printf("Sorted using Insertion Sort.");
            break;

        case 3: // Selection Sort
            for (i = 0; i < n - 1; i++) {
                int min_idx = i;
                for (j = i + 1; j < n; j++) {
                    if (arr[j] < arr[min_idx])
                     min_idx = j;
                }
                temp = arr[min_idx];
                arr[min_idx] = arr[i];
                arr[i] = temp;
            }
            printf("Sorted using Selection Sort.");
            break;

           /* case 4: // quick Sort
            for (i = 0; i < n - 1; i++) {
                int min_idx = i;
                for (j = i + 1; j < n; j++) {
                    if (arr[j] < arr[min_idx]) min_idx = j;
                }
                temp = arr[min_idx];
                arr[min_idx] = arr[i];
                arr[i] = temp;
            }
            printf("Sorted using Selection Sort.");
            break;*/

        default:
            printf("Invalid sorting choice.");
    }
}
