#include<stdio.h>

//stack implementation using array
#define MAX 100

int stack[MAX];
int top = -1;

void push(int val)
{
    if (top == MAX - 1)
    {
        printf("Stack Overflow\n");
        return;
    }
    stack[++top] = val;
    printf("Pushed %d to stack\n", val);
}

void pop()
{
    if (top == -1)
    {
        printf("Stack Underflow\n");
        return;
    }
    printf("Popped %d from stack\n", stack[top--]);
}

void display()
{
    if (top == -1)
    {
        printf("Stack is empty\n");
        return;
    }
    printf("Stack elements are:\n");
    for (int i = top; i >= 0; i--)
    {
        printf("%d\n", stack[i]);
    }
}

void peek()
{
    if (top == -1)
    {
        printf("Stack is empty\n");
        return;
    }
    printf("Top element is %d\n", stack[top]);
}

int main()
{
    int choice, val;
    while (1)
    {
        printf("\nStack Operations:\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. Display\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter value to push: ");
            scanf("%d", &val);
            push(val);
            break;
        case 2:
            pop();
            break;
        case 3:
            peek();
            break;
        case 4:
            display();
            break;
        case 5:
            exit(0);
        default:
            printf("Invalid choice! Please try again.\n");
        }
    }
    return 0;
}