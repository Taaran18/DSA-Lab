#include <stdio.h>
int stack[100], choice, n, top, x, i;
void push();
void pop();
void display();
int main()
{
    top = -1;
    printf("\n Enter the size of STACK:");
    scanf("%d", &n);
    printf("\n STACK OPERATIONS USING ARRAY");
    printf("\n 1.PUSH\n 2.POP\n 3.DISPLAY\n 4.EXIT");
    while (choice != 4)
    {
        printf("\n Enter the Choice:");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
        {
            push();
            break;
        }
        case 2:
        {
            pop();
            break;
        }
        case 3:
        {
            display();
            break;
        }
        case 4:
        {
            printf("Exit");
            break;
        }
        default:
        {
            printf("\n Enter the Choice:");
        }
        }
    }
    return 0;
}

void push()
{
    if (top >= n - 1)
    {
        printf("\nOverflow");
    }
    else
    {
        printf(" Enter a value to be pushed:");
        scanf("%d", &x);
        top++;
        stack[top] = x;
    }
}

void pop()
{
    if (top <= -1)
    {
        printf("\nUnderflow");
    }
    else
    {
        printf("\nThe popped elements is %d", stack[top]);
        top--;
    }
}

void display()
{
    if (top >= 0)
    {
        printf("\n The elements in STACK \n");
        for (i = top; i >= 0; i--)
            printf("\n%d", stack[i]);
        printf("\n Press Next Choice");
    }
    else
    {
        printf("\n The Stack is Empty");
    }
}
