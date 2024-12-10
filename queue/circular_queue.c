#include <stdio.h>
#define MAX 5

int cqueue[MAX];
int front = -1, rear = -1;

void enqueue(int value) {
    if ((rear + 1) % MAX == front) {
        printf("Circular Queue Overflow\n");
    } else {
        if (front == -1) front = 0;
        rear = (rear + 1) % MAX;
        cqueue[rear] = value;
        printf("Inserted %d\n", value);
    }
}

void dequeue() {
    if (front == -1) {
        printf("Circular Queue Underflow\n");
    } else {
        printf("Deleted %d\n", cqueue[front]);
        if (front == rear) {
            front = rear = -1;
        } else {
            front = (front + 1) % MAX;
        }
    }
}

void display() {
    if (front == -1) {
        printf("Circular Queue is empty\n");
    } else {
        printf("Circular Queue\n");
        int i = front;
        while (1) {
            printf("%d ", cqueue[i]);
            if (i == rear) break;
            i = (i + 1) % MAX;
        }
        printf("\n");
    }
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();
    dequeue();
    display();
    return 0;
}
