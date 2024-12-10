#include <stdio.h>
#include <stdlib.h>

#define SIZE 100

int queue[SIZE], front = -1, rear = -1;

void enqueue(int item) {
    if (rear == SIZE - 1) return;
    if (front == -1) front = 0;
    queue[++rear] = item;
}

int dequeue() {
    if (front == -1) return -1;
    int item = queue[front];
    if (front == rear) front = rear = -1;
    else front++;
    return item;
}

void bfs(int graph[][SIZE], int n, int start) {
    int visited[SIZE] = {0};
    enqueue(start);
    visited[start] = 1;

    while (front != -1) {
        int node = dequeue();
        printf("%d ", node);

        for (int i = 0; i < n; i++) {
            if (graph[node][i] && !visited[i]) {
                enqueue(i);
                visited[i] = 1;
            }
        }
    }
}

int main() {
    int graph[SIZE][SIZE] = {
        {0, 1, 1, 0},
        {1, 0, 1, 1},
        {1, 1, 0, 1},
        {0, 1, 1, 0}};
    int n = 4;

    printf("BFS starting from node 0: ");
    bfs(graph, n, 0);

    return 0;
}
