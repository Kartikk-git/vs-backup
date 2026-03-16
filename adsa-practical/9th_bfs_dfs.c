#include<stdio.h>

//BFS AND DFS implementation using recursive program 
int adj[10][10], visited[10], n;

void DFS(int v)
{
    int i;
    printf("%d ", v);
    visited[v] = 1;
    for (i = 0; i < n; i++)
    {
        if (adj[v][i] == 1 && !visited[i])
        {
            DFS(i);
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
    printf("Depth First Search starting from vertex 0:\n");
    DFS(0);

    //BFS
    for (i = 0; i < n; i++)
        visited[i] = 0;
    printf("\nBreadth First Search starting from vertex 0:\n");
    BFS(0);

    return 0;
}
