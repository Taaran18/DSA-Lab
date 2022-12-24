#include <stdio.h>
int main()
{
    int m, n, i, j, k, l, a[10][10];
    int rm;
    int w = 4;
    int b = 1024;
    printf("Enter the value of rows -");
    scanf("%d", &m);
    printf("Enter the value of columns -");
    scanf("%d", &n);
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Enter the elements -\n");
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter the subscript whose address is to be found -\n");
    scanf("%d", &k);
    printf("Enter the subscript whose address is to be found -\n");
    scanf("%d", &l);
    rm = b + 4 * (n * k + l);
    printf("%d", rm);
    return 0;
}