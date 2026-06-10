#include <stdio.h>
#include <stdlib.h>

#define MAX 100

struct Stack {
    int items[MAX];
    int top;
};

void initStack(struct Stack* s) {
    s->top = -1;
}

int isFull(struct Stack* s) {
    return s->top == MAX - 1;
}

int isEmpty(struct Stack* s) {
    return s->top == -1;
}

void push(struct Stack* s, int value) {
    if (isFull(s)) {
        printf("\nStack Overflow! Cannot push %d\n", value);
    } else {
        (s->top)++;
        s->items[s->top] = value;
        printf("\n--push performed--: %d", value);
    }
}

int pop(struct Stack* s) {
    if (isEmpty(s)) {
        printf("\nStack Underflow! Nothing to pop.\n");
        return -1;
    } else {
        int removedItem = s->items[s->top];
        (s->top)--;
        printf("\n--pop performed--: %d", removedItem);
        return removedItem;
    }
}

int peek(struct Stack* s) {
    if (isEmpty(s)) {
        printf("\nStack is empty.\n");
        return -1;
    }
    return s->items[s->top];
}

void display(struct Stack* s) {
    if (isEmpty(s)) {
        printf("\nStack is empty.\n");
        return;
    }
    printf("\n\n |   |");
    int i = s->top;
    printf("\n | %d | <-- top", s->items[i]);
    i--;
    while (i >= 0) {
        printf("\n | %d |", s->items[i]);
        i--;
    }
    printf("\n----------\n");
}

int main() {
    struct Stack myStack;
    initStack(&myStack);
    int choice, val;

    system("cls"); // Clears screen at start

    while (1) {
        printf("\n========= STACK MENU =========");
        printf("\n1. PUSH (Add element)");
        printf("\n2. POP (Remove element)");
        printf("\n3. PEEK (View top)");
        printf("\n4. DISPLAY (Show stack)");
        printf("\n5. EXIT");
        printf("\n==============================");
        printf("\nEnter choice: ");
        
        if (scanf("%d", &choice) != 1) {
            printf("Invalid input. Please enter a number.\n");
            while(getchar() != '\n'); // Clear buffer
            continue;
        }

        switch (choice) {
            case 1:
                printf("Enter value to push: ");
                scanf("%d", &val);
                push(&myStack, val);
                display(&myStack);
                break;
            case 2:
                pop(&myStack);
                display(&myStack);
                break;
            case 3:
                val = peek(&myStack);
                if (val != -1) {
                    printf("\n--peek performed--: %d\n", val);
                }
                break;
            case 4:
                display(&myStack);
                break;
            case 5:
                printf("Exiting program...\n");
                exit(0);
            default:
                printf("Invalid choice! Try 1-5.\n");
        }
    }

    return 0;
}
