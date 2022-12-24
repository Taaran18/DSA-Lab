#include <stdio.h>
void merge(int a[], int low, int mid, int high)
{
    int temp[50];
    int i, j, k;
    i = low;
    j = mid + 1;
    k = low;

    while (i <= mid && j <= high)
    {

        if (a[i] < a[j])
        {
            temp[k] = a[i];
            i++, k++;
        }
        else
        {
            temp[k] = a[j];
            j++, k++;
        }
    }

    while (i <= mid)
    {
        temp[k] = a[i];
        k++;
        i++;
    }

    while (j <= high)
    {
        temp[k] = a[j];
        k++, j++;
    }

    for (i = low; i <= high; i++)
    {

        a[i] = temp[i];
    }
}

void mergesort(int a[], int low, int high)
{
    int mid;

    if (low < high)
    {

        mid = (low + high) / 2;
        mergesort(a, low, mid);
        mergesort(a, mid + 1, high);
        merge(a, low, mid, high);
    }
}

int main()
{

    int n, i;
    printf("Enter the value - \n");
    scanf("%d", &n);
    int a[n];
    printf("Enter the element\n");
    for (i = 0; i < n; i++)

    {
        scanf("%d", &a[i]);
    }

    mergesort(a, 0, n - 1);
    printf("Sorted Array\n");
    for (i = 0; i < n; i++)

    {
        printf("%d\n", a[i]);
    }
}
