#include <stdio.h>
#include <stdlib.h>
#define MAX 50
void Insert_queue();
void Display_queue();
int queue_array[MAX];
int rear = -1;
int front = -1;
int element, i, choice;

void Insert_queue()
{
    if (front == -1)
    {
        front = rear = 0;
        queue_array[rear] = element;
    }

    else if (rear == MAX - 1)
    {
        printf("Queue is full");
    }

    else
    {
        rear++;
        queue_array[rear] = element;
    }
}

void Display_queue()
{
    if (front == -1)
    {
        printf("Queue is empty");
    }

    else
    {
        printf("Queue is -\n");
        for (i = front; i <= rear; i++)
        {
            printf("%d", queue_array[i]);
            printf("\n");
        }
    }
}

int main()
{
    int choice;
    while (1)
    {
        printf(" 1. Insert \n 2. Display \n 3. Exit \n");
        printf("Enter your choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter the element to be inserted : ");
            scanf("%d", &element);
            Insert_queue();
            break;
        case 2:
            Display_queue();
            break;
        case 3:
            exit(0);
            break;

        default:
            printf("Wrong choice");
            break;
        }
    }
}
