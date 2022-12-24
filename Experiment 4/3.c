#include <stdio.h>
int main()
{
    int m, n, i, j, size = 0;
    printf("Enter the Number of Rows -");
    scanf("%d", &m);
    printf("Enter the Number of Columns -");
    scanf("%d", &n);
    int a[10][10];
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("Enter the Elements - ");
            scanf("%d ", &a[i][j]);
        }
    }
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (a[i][j] != 0)
            {
                size++;
            }
        }
    }
    int cm[100][3];
    int s = 0;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (a[i][j] != 0)
            {
                cm[s][0] = i;
                cm[s][1] = j;
                cm[s][2] = a[i][j];
                s++;
            }
        }
    }
    printf("Row\tColumn\tValue\t\n");
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d \t", cm[i][j]);
        }
        printf("\n");
    }
    return 0;
}