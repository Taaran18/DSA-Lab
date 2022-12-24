#include <stdio.h>
int binarySearch(int array[], int size, int value)
{
    int low = 0;
    int high = size - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (array[mid] == value)
        {
            return mid;
        }

        if (array[mid] < value)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int size, value;
    printf("Enter array size: ");
    scanf("%d", &size);
    int array[size];
    printf("Enter array elements: ");

    for (int i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("Enter search value: ");
    scanf("%d", &value);
    int result = binarySearch(array, size, value);

    if (result == -1)
    {
        printf("Value not found\n");
    }

    else
    {
        printf("Value found at index %d\n", result);
    }
    return 0;
}
