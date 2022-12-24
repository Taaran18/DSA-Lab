#include <stdio.h>
int stack[100], x, n, i, j, top = -1;
void push();
int main()
{
    printf("Enter the size of the stack: ");
    scanf("%d", &n);
    printf("Push value in Stack.\n");
    push();
printf("Display - %d\n",stack[top]);
}

void push()
{
    printf("Enter the value of entered - \n");
    scanf("%d", &x);
    if (top>=n-1)
    {
        printf("Overflow.");
    }
    else
    {
        top = top + 1;
        stack[top] = x;
    }
}