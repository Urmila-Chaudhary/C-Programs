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
    if (head == NULL) {  // List is empty
        head = (struct node *)malloc(sizeof(struct node));
        head->data = e;
        head->prev = head->next = NULL;
    } else {  // Insert at the end
        t = head;
        while (t->next != NULL)
            t = t->next;
        
        t->next = (struct node *)malloc(sizeof(struct node));
        t->next->data = e;
        t->next->prev = t;
        t->next->next = NULL;
    }
}

void delete(int e) {
    struct node *t;
    if (head == NULL) {
        printf("Doubly linked list empty!\n");
    } else if (head->data == e && head->next == NULL) {  // Only one node
        free(head);
        head = NULL;
    } else if (head->data == e) {  // Delete the head node
        t = head;
        head = head->next;
        head->prev = NULL;
        free(t);
    } else {  // Delete a middle or last node
        t = head;
        while (t != NULL && t->data != e)
            t = t->next;
        
        if (t == NULL) {
            printf("Element not found\n");
        } else if (t->next == NULL) {  // Last node
            t->prev->next = NULL;
            free(t);
        } else {  // Middle node
            t->prev->next = t->next;
            t->next->prev = t->prev;
            free(t);
        }
    }
}

void display() {
    struct node *t;
    if (head == NULL) {
        printf("Doubly Linked List empty\n");
    } else {
        t = head;
        while (t != NULL) {
            printf("%d\t", t->data);
            t = t->next;
        }
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
