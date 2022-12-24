#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int MAX = 4, count;
struct student
{
    char usn[10];
    char name[30];
    char branch[5];
    int sem;
    char phno[10];
    struct student *next;
};

typedef struct student NODE;
int countnodes(NODE *head)
{
    NODE *p;
    count = 0;
    p = head;
    while (p != NULL)
    {
        p = p->next;
        count++;
    }
    return count;
}

NODE *getnode(NODE *head)
{
    NODE *newnode;
    newnode = (NODE *)malloc(sizeof(NODE));
    printf("\nEnter USN, Name, Branch, Sem, Ph.No\n");
    fflush(NULL);

    gets(newnode->usn);
    fflush(NULL);

    gets(newnode->name);
    fflush(NULL);

    gets(newnode->branch);
    scanf("%d", &(newnode->sem));
    fflush(NULL);

    gets(newnode->phno);
    newnode->next = NULL;
    head = newnode;
    return head;
}

NODE *display(NODE *head)
{
    NODE *p;
    if (head == NULL)
        printf("\nNo student data\n");
    else
    {
        p = head;
        printf("\n----STUDENT DATA --- \n");
        printf("\nUSN\tNAME\tBRANCH\tSEM\tPh.NO.");

        while (p != NULL)
        {
            printf("\n%s\t%s\t%s\t%d\t%s", p->usn, p->name, p->branch, p->sem, p->phno);
            p = p->next;
        }

        printf("\nThe no. of nodes in list is: %d", countnodes(head));
        return head;
    }
}

NODE *create(NODE *head)
{
    NODE *newnode;
    if (head == NULL)
    {
        newnode = getnode(head);
        head = newnode;
    }
    else
    {
        newnode = getnode(head);
        newnode->next = head;
        head = newnode;
    }
    return head;
}

int main()
{
    int ch, i, n;
    NODE *head;
    head = NULL;
    printf("\nEnter number of students: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        head = create(head);
    }
    for (i = 0; i < n; i++)
    {
        display(head);
    }
    return 0;
}