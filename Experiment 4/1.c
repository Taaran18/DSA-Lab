#include <stdio.h>
int main()
{
    int m, n, i, j, a[10][10];
    printf("Enter the Number of Rows -");
    scanf("%d", &m);
    printf("Enter the Number of Columns -");
    scanf("%d", &n);
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("Enter the Elements - ");
            scanf("%d ", &a[i][j]);
        }
    }
    printf("Displaying the Row Major Format \n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d \t", a[i][j]);
        }
        printf("\n");
    }
    printf("Displaying the Column Major Format \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("%d \t", a[j][i]);
        }
        printf("\n");
    }
    return 0;
}