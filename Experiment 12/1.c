#include <stdio.h>
#include <stdlib.h>
int a[50][50], n, visited[50];
int front = -1, rear = -1;
int s[20], top = -1;

void bfs(int v)
{
    int i, j;
    int q[20];
    int f = 0, r = -1;
    q[++r] = v;
    visited[v] = 1;
    while (f <= r)
    {
        v = q[f++];
        printf("%d ", v);
        for (i = 1; i <= n; i++)
        {
            if (a[v][i] == 1 && visited[i] == 0)
            {
                q[++r] = i;
                visited[i] = 1;
            }
        }
    }
}

void dfs(int v)
{
    int i;
    visited[v] = 1;
    printf("%d ", v);
    for (i = 1; i <= n; i++)
    {
        if (a[v][i] == 1 && visited[i] == 0)
        {
            dfs(i);
        }
    }
}

int main()
{
    int i, j, ch, start;
    printf("Enter the number of vertices: ");
    scanf("%d", &n);
    printf("Enter the adjacency matrix: ");
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            printf("Enter a[%d][%d]", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    for (i = j; i <= n; i++)
    {
        visited[i] = 0;
        printf("Enter the starting vertex: ");
        scanf("%d", &start);
    }
    printf("\n1. BFS\n2. DFS\n3. Exit");
    printf("Enter your choice: ");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
        printf("Nodes reachable from starting vertex %d are: ", start);
        bfs(start);
        for (i = 0; i < n; i++)
        {
            if (visited[i] == 0)
            {
                printf("The vertex is not reachable is %d: ", i);
            }
        }
        break;
    case 2:
        printf("Nodes reachable from starting vertex %d are: ", start);
        dfs(start);
        break;
    case 3:
        exit(0);

    default:
        printf("Invalid choice");
    }
}