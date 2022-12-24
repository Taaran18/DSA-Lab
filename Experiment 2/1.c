#include <stdio.h>
int main()
{
    int m, n, i, j, a[10][10];
    printf("Enter the value of row -");
    scanf("%d", &m);
    printf("Enter the value of column -");
    scanf("%d", &n);
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("Enter the elements -");
            scanf("%d", &a[i][j]);
        }
    }
    printf("Display the array -\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", a[i][j]);
            if(j==m)
            {   
                printf("\n");
            }
        }
    }
}