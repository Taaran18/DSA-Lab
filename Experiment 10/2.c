#include <stdio.h>
void quicksort(int a[], int start, int end)
{
    int temp, i, j, pivot;
    if (start < end)
    {
        pivot = start;
        i = start;
        j = end;

        while (i < j)
        {
            while (a[i] <= a[pivot] && i < end)
                i++;
            while (a[j] > a[pivot])
                j--;
            if (i < j)
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
        temp = a[pivot];
        a[pivot] = a[j];
        a[j] = temp;
        quicksort(a, 0, j - 1);   
        quicksort(a, j + 1, end); 
    }
}

int main()
{

    int n, i;
    printf("Enter the value of n\n");
    scanf("%d", &n);
    int a[n];
    printf("Enter the element\n");
    for (i = 0; i < n; i++)

    {
        scanf("%d", &a[i]);
    }

    quicksort(a, 0, n - 1);
    printf("Sorted Array\n");
    for (i = 0; i < n; i++)

    {
        printf("%d\n", a[i]);
    }

    return 0;
}