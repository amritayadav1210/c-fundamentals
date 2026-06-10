#include <stdio.h>
#include <stdlib.h>

#define MAX 100

struct Stack
{
    int items[MAX];
    int top;
};

void initStack(struct Stack *s)
{
    s->top = -1;
}

int isFull(struct Stack *s)
{
    return s->top == MAX - 1;
}

int isEmpty(struct Stack *s)
{
    return s->top == -1;
}

void push(struct Stack *s, int value)
{
    printf("\n--push performed--:%d", value);
    if (isFull(s))
    {
        printf("Stack Overflow!\n");
    }
    else
    {
        (s->top)++;
        s->items[s->top] = value;
    }
}

int pop(struct Stack *s)
{
    printf("\n--pop  performed--");
    if (isEmpty(s))
    {
        printf("Stack Underflow!\n");
        return -1;
    }
    else
    {
        int removedItem = s->items[s->top];
        (s->top)--;
        return removedItem;
    }
}

// Peek operation
int peek(struct Stack *s)
{
    printf("\n--peek performed--");

    if (isEmpty(s))
    {
        printf("Stack is empty.\n");
        return -1;
    }
    return s->items[s->top];
}

// display()
void display(struct Stack *s)
{
    printf("\n\n  |    |");
    if (isEmpty(s))
    {
        printf("Stack is empty.\n");
    }

    int i = s->top;
    printf("\n  | %d | <-- top", s->items[i]);
    i--;
    while (i >= 0)
    {
        printf("\n  | %d |", s->items[i]);
        i--;
    }
    printf("\n----------\n");
}

int main()
{
    system("cls");

    struct Stack xStack;

    initStack(&xStack);

    // 1. Test Pushing

    display(&xStack);
    push(&xStack, 10);
    display(&xStack);
    push(&xStack, 20);
    display(&xStack);
    push(&xStack, 30);
    display(&xStack);
    push(&xStack, 40);
    display(&xStack);
    push(&xStack, 15);

    display(&xStack);

    // 2. Test Peeking
    printf("Current top element is: %d\n", peek(&xStack));

    // 3. Test Popping
    pop(&xStack);
    display(&xStack);
    pop(&xStack);
    display(&xStack);

    // 4. Final state
    printf("Top element after pops: %d\n", peek(&xStack));
    display(&xStack);

    return 0;
}
