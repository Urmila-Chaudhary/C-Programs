#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *head = NULL;

void insert(int e) {
    struct node *t;
    if (head == NULL) {
        head = (struct node *)malloc(sizeof(struct node));
        head->data = e;
        head->next = head;
    } else {
        t = head;
        while (t->next != head) {
            t = t->next;
        }
        t->next = (struct node *)malloc(sizeof(struct node));
        t->next->data = e;
        t->next->next = head;
    }
}

void delete(int e) {
    struct node *t;

    if (head == NULL) {
        printf("\nCircular linked list is empty!!!\n\n");
        return;
    }

    if (head->data == e && head->next == head) {  // Case when only one node exists
        free(head);
        head = NULL;
    } else if (head->data == e) {  // Deleting the head node
        t = head;
        while (t->next != head) {
            t = t->next;
        }
        t->next = head->next;
        free(head);
        head = t->next;
    } else {  // Deleting a node other than head
        t = head;
        while (t->next != head && t->next->data != e) {
            t = t->next;
        }
        if (t->next == head) {
            printf("\nElement not found\n\n");
        } else {
            struct node *temp = t->next;
            t->next = t->next->next;
            free(temp);
        }
    }
}

void disp() {
    struct node *t;
    if (head == NULL) {
        printf("\nCircular linked list is empty!!!\n\n");
    } else {
        t = head;
        printf("\n");
        do {
            printf("%d\t", t->data);
            t = t->next;
        } while (t != head);
        printf("\n\n");
    }
}

int menu() {
    int ch;
    printf("1 - Insert, 2 - Delete, 3 - Display, 4 - Exit\n");
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
                insert(a);
                break;
            case 2:
                printf("Enter an element to delete: ");
                scanf("%d", &a);
                delete(a);
                break;
            case 3:
                disp();
                break;
            default:
                printf("Wrong Choice!!!\n");
                break;
        }
    }
    return 0;
}
