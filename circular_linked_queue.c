#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

typedef struct node queue;

queue *front = NULL;
queue *rear = NULL;

void enqueue(int e) {
    queue *t = (queue *)malloc(sizeof(queue));
    t->data = e;

    if (front == NULL) {  // Queue is empty
        front = t;
        rear = t;
    } else {
        rear->next = t;
        rear = t;
    }

    rear->next = front;  // Making it circular
}

void dequeue() {
    if (front == NULL) {
        printf("Circular linked Queue is Empty\n");
    } else {
        printf("Dequeued element: %d\n", front->data);

        if (front == rear) {  // Only one element in the queue
            free(front);
            front = NULL;
            rear = NULL;
        } else {
            queue *temp = front;
            front = front->next;
            rear->next = front;  // Maintaining the circular link
            free(temp);
        }
    }
}

void display() {
    if (front == NULL) {
        printf("Empty circular linked Queue\n");
    } else {
        queue *t = front;
        printf("Queue elements: ");
        do {
            printf("%d\t", t->data);
            t = t->next;
        } while (t != front);
        printf("\n");
    }
}

int menu() {
    int ch;
    printf("Enqueue - 1, Dequeue - 2, Display - 3, Exit - 4\n");
    printf("Enter your choice: ");
    scanf("%d", &ch);
    return ch;
}

int main() {
    int ch, a;
    while ((ch = menu()) != 4) {
        switch (ch) {
            case 1:
                printf("Enter an element to insert: ");
                scanf("%d", &a);
                enqueue(a);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                display();
                break;
            default:
                printf("Wrong Choice!!!\n");
                break;
        }
    }
    return 0;
}
