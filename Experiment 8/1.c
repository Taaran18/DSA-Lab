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
        printf("\nUSN\tNAME\t\tBRANCH\tSEM\tPh.NO.");

        while (p != NULL)
        {
            printf("\n%s\t%s\t\t%s\t%d\t%s", p->usn, p->name, p->branch, p->sem, p->phno);
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

NODE *insert_front(NODE *head)
{
    if (countnodes(head) == MAX)
        printf("\nList is Full /Overflow!!");
    else
        head = create(head);
    return head;
}

NODE *insert_rear(NODE *head)
{
    NODE *p, *newnode;
    p = head;
    if (countnodes(head) == MAX)
        printf("\nList is Full(QUEUE)!!");
    else
    {
        if (head == NULL)
        {
            newnode = getnode(head);
            head = newnode;
        }
        else
        {
            newnode = getnode(head);
            while (p->next != NULL)
            {
                p = p->next;
            }
            p->next = newnode;
        }
    }
    return head;
}

NODE *insert(NODE *head)
{
    int ch;
    do
    {
        printf("\n1.Insert at Front(First)\t2.Insert at End(Rear/Last)\t3.Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            head = insert_front(head);
            break;
        case 2:
            head = insert_rear(head);
            break;
        case 3:
            break;
        }
        head = display(head);
    } while (ch != 3);
    return head;
}

NODE *delete_front(NODE *head)
{
    NODE *p;
    if (head == NULL)
        printf("\nList is Empty/Underflow (STACK/QUEUE)");
    else
    {
        p = head;
        head = head->next;
        free(p);
        printf("\nFront(first)node is deleted");
    }
    return head;
}

NODE *delete_rear(NODE *head)
{
    NODE *p, *q;
    p = head;
    while (p->next != NULL)
    {
        p = p->next;
    }
    q = p->next;
    free(q);
    p->next = NULL;
    printf("\nLast(end) entry is deleted");
    return head;
}

NODE *del(NODE *head)
{
    int ch;
    do
    {
        printf("\n1.Delete from Front(First)\t2.Delete from End(Rear / Last))\t3.Exit ");
        printf("\nEnter your choice: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            head = delete_front(head);
            break;
        case 2:
            head = delete_rear(head);
            break;
        case 3:
            break;
        }
        head = display(head);
    } while (ch != 3);
    return head;
}

NODE *stack(NODE *head)
{
    int ch;
    do
    {
        printf("\nSSL used as Stack...");
        printf("\n 1.Insert at Front(PUSH) \t2.Delete from Front(POP))\t3.Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            head = insert_front(head);
            break;
        case 2:
            head = delete_front(head);
            break;
        case 3:
            break;
        }
        head = display(head);
    } while (ch != 3);
    return head;
}

NODE *queue(NODE *head)
{
    int ch;
    do
    {

        printf("\nSSL used as Queue...");
        printf("\n 1.Insert at Rear(INSERT) \t2.Delete from Front(DELETE))\t3.Exit ");
        printf("\nEnter your choice: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            head = insert_rear(head);
            break;
        case 2:
            head = delete_front(head);
            break;
        case 3:
            break;
        }
        head = display(head);
    } while (ch != 3);
    return head;
}

int main()
{
    int ch, i, n;
    NODE *head;
    head = NULL;
    printf("\n*Student Database *");
    do
    {
        printf("\n 1.Create\n 2.Display\n 3.Insert\n 4.Delete\n 5.Stack\n 6.Queue\n 7.Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("\nHow many student data you want to create: ");
            scanf("%d", &n);
            for (i = 0; i < n; i++)
                head = create(head);
            break;
        case 2:
            head = display(head);
            break;
        case 3:
            head = insert(head);
            break;
        case 4:
            head = del(head);
            break;
        case 5:
            head = stack(head);
            break;
        case 6:
            head = queue(head);
            break;
        case 7:
            break;
        }
    } while (ch != 7);
}