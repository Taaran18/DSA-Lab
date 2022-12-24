#include <stdio.h>
int main()
{
    int m, n, i, j;
    int counter = 0;
    printf("Enter the Number of Rows -");
    scanf("%d", &m);
    printf("Enter the Number of Columns -");
    scanf("%d", &n);
    int arr[10][10];
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("Enter a [%d][%d] Elements - ", i, j);
            scanf("%d ", &arr[i][j]);
        }
    }
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (arr[i][j] != 0)
                counter++;
        }
    }
    if (counter > ((m * n) / 2))
        printf("It is a Spare Matrix.");
    else
        printf("It is not a Spare Matrix.");
    return 0;
}