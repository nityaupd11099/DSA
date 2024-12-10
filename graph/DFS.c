#include <stdio.h>

#define SIZE 100

void dfs(int graph[][SIZE], int visited[], int n, int node) {
    visited[node] = 1;
    printf("%d ", node);

    for (int i = 0; i < n; i++) {
        if (graph[node][i] && !visited[i]) {
            dfs(graph, visited, n, i);
        }
    }
}

int main() {
    int graph[SIZE][SIZE] = {
        {0, 1, 1, 0},
        {1, 0, 1, 1},
        {1, 1, 0, 1},
        {0, 1, 1, 0}};
    int visited[SIZE] = {0};
    int n = 4;

    printf("DFS starting from node 0: ");
    dfs(graph, visited, n, 0);

    return 0;
}
