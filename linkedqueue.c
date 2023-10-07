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
    t->next = NULL;

    if (front == NULL) {
        front = t;
        rear = t;
    } else {
        rear->next = t;
        rear = t;
    }
}

void dequeue() {
    if (front == NULL) {
        printf("Linked Queue Empty\n");
    } else {
        printf("%d\n", front->data);
        queue *temp = front;
        front = front->next;
        free(temp);

        if (front == NULL) {
            rear = NULL;
        }
    }
}

void display() {
    if (front == NULL) {
        printf("Empty linked Queue\n");
    } else {
        queue *t = front;
        while (t != NULL) {
            printf("%d\t", t->data);
            t = t->next;
        }
    }
    printf("\n");
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

    for (ch = menu(); ch != 4; ch = menu()) {
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
