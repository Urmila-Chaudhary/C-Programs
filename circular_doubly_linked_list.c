#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
    struct node *prev;
};

struct node *head = NULL;

void insert(int e) {
    struct node *t;
    if (head == NULL) {
        // List is empty
        head = (struct node *)malloc(sizeof(struct node));
        head->data = e;
        head->next = head;
        head->prev = head;
    } else {
        // Insert at the end
        t = head;
        while (t->next != head)
            t = t->next;
        
        struct node *newNode = (struct node *)malloc(sizeof(struct node));
        newNode->data = e;
        newNode->next = head;
        newNode->prev = t;
        t->next = newNode;
        head->prev = newNode;
    }
}

void delete(int e) {
    struct node *t;
    if (head == NULL) {
        printf("Circular doubly linked list empty!\n");
    } else if (head->data == e && head->next == head) {
        // Only one node
        free(head);
        head = NULL;
    } else if (head->data == e) {
        // Delete head node
        t = head;
        head = head->next;
        head->prev = t->prev;
        t->prev->next = head;
        free(t);
    } else {
        // Delete node in the middle or end
        t = head->next;
        while (t != head && t->data != e)
            t = t->next;

        if (t == head) {
            printf("Element not found\n");
        } else {
            t->prev->next = t->next;
            t->next->prev = t->prev;
            free(t);
        }
    }
}

void display() {
    struct node *t;
    if (head == NULL) {
        printf("Circular doubly linked list empty\n");
    } else {
        t = head;
        do {
            printf("%d\t", t->data);
            t = t->next;
        } while (t != head);
        printf("\n");
    }
}

int menu() {
    int ch;
    printf("Insert - 1, Delete - 2, Display - 3, Exit - 4\n");
    printf("Enter your choice: ");
    scanf("%d", &ch);
    return ch;
}

int main() {
    int ch, e;
    while ((ch = menu()) != 4) {
        switch (ch) {
            case 1:
                printf("Enter the value to be inserted: ");
                scanf("%d", &e);
                insert(e);
                break;
            case 2:
                printf("Enter the value to be deleted: ");
                scanf("%d", &e);
                delete(e);
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
