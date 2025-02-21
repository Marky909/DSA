#include <stdio.h>
#include <stdlib.h>

#define MAXSIZE 10

int front = -1;
int rear = -1;
int cq[MAXSIZE];

void enqueue();
void dequeue();
void display();

int main() {
    int choice;
    
    while (1) {  // Infinite loop until the user exits
        printf("\n\n1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                enqueue();
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            case 4:
                printf("Exiting from the program!!!!!\n");
                exit(0);
            default:
                printf("Enter a valid choice between (1-4)\n");
        }
    }
}

void enqueue() {
    int item;
    
    if ((rear + 1) % MAXSIZE == front) {
        printf("Queue is full!!\n");
        return;
    }

    printf("Enter the element you want to insert: ");
    scanf("%d", &item);

    if (front == -1) {
        front = rear = 0;
    } else {
        rear = (rear + 1) % MAXSIZE;
    }

    cq[rear] = item;
    printf("%d inserted\n", item);
}

void dequeue() {
    if (front == -1) {
        printf("Queue is empty!!\n");
        return;
    }

    int item = cq[front];
    printf("%d removed from queue\n", item);

    if (front == rear) {
        front = rear = -1;
    } else {
        front = (front + 1) % MAXSIZE;
    }
}

void display() {
    if (front == -1) {
        printf("Queue is empty!!\n");
        return;
    }

    printf("Displaying the elements of the queue:\n");           
    int i = front;
    while (i != rear) {
        printf("%d ", cq[i]);
        i = (i + 1) % MAXSIZE;
    }
    printf("%d\n", cq[i]);  // Print last element
}