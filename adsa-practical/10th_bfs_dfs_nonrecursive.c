#include <stdio.h>

// BFS AND DFS implementation using non-recursive method

int adj[10][10], visited[10], n;

void DFS(int start)
{
    int stack[10], top = -1, i;
    stack[++top] = start;

    while (top != -1)
    {
        int v = stack[top--];
        if (!visited[v])
        {
            printf("%d ", v);
            visited[v] = 1;
        }
        for (i = n - 1; i >= 0; i--)
        {
            if (adj[v][i] == 1 && !visited[i])
            {
                stack[++top] = i;
            }
        }
    }
}

void BFS(int start)
{
    int queue[10], front = -1, rear = -1, i;
    visited[start] = 1;
    queue[++rear] = start;

    while (front < rear)
    {
        int v = queue[++front];
        printf("%d ", v);
        for (i = 0; i < n; i++)
        {
            if (adj[v][i] == 1 && !visited[i])
            {
                visited[i] = 1;
                queue[++rear] = i;
            }
        }
    }
}

int main()
{
    n = 5; //number of vertices
    int edge[5][5] = {
        {0, 1, 1, 0, 0},
        {1, 0, 0, 1, 1},
        {1, 0, 0, 0, 1},
        {0, 1, 0, 0, 1},
        {0, 1, 1, 1, 0}
    };

    int i, j, start;

    //initialize adjacency matrix
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            adj[i][j] = edge[i][j];

    //DFS
    for (i = 0; i < n; i++)
        visited[i] = 0;

    printf("Enter the starting vertex for DFS (0 to %d): ", n - 1);
    scanf("%d", &start);
    printf("DFS traversal starting from vertex %d:\n", start);
    DFS(start);

    //BFS
    for (i = 0; i < n; i++)
        visited[i] = 0;

    printf("\nEnter the starting vertex for BFS (0 to %d): ", n - 1);
    scanf("%d", &start);
    printf("BFS traversal starting from vertex %d:\n", start);
    BFS(start);

    return 0;
}