#include <stdio.h>
void mainmenu();
void lisearch();
void bubble();
int n, s, i, ch = 0;
int a[100];
int temp, j;
void main()
{

	printf("Enter the size of the array: ");
	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		printf("\nEnter the %d element of the array:", i);
		scanf("%d", &a[i]);
	}

	mainmenu();
}

void lisearch()
{
	printf("Enter the element to be searched: ");
	scanf("%d", &s);

	for (i = 0; i < n; i++)
	{
		if (a[i] == s)
		{
			printf("\n %d is present at %d \n", s, i);
		}

		if (i >= n)
		{
			printf("Element not found...!\n");
		}
	}
}

void bubble()
{

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - 1; j++)
		{
			if (a[j] > a[j + 1])
			{
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
	printf("\n The sorted list is : ");
	for (int i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}

void mainmenu()
{
	printf("\n Welcome to my deshboard...!");
	printf("\n\n 1 Linear Search");
	printf("\n 2 Bubble sort");
	printf("\n\n Enter your choice:- ");
	scanf("%d", &ch);
	switch (ch)
	{
	case 1:
		lisearch();
		break;

	case 2:
		bubble();
		break;

	default:
		printf("\nEnter the correct choice");
		break;
	}
}
