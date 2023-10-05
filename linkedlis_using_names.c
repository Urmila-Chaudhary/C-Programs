#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node {
    char name[50];
    struct node *next;
};

struct node *head = NULL;

void insert(char name[]) {
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    strcpy(newNode->name, name);
    newNode->next = head;
    head = newNode;
}

void deleteNode(char name[]) {
    struct node *current = head;
    struct node *prev = NULL;

    while (current != NULL && strcmp(current->name, name) != 0) {
        prev = current;
        current = current->next;
    }

    if (current == NULL) {
        printf("Name not found\n");
        return;
    }

    if (prev != NULL) {
        prev->next = current->next;
    } else {
        head = current->next;
    }

    free(current);
}

void display() {
    struct node *ptr = head;
    while (ptr != NULL) {
        printf("%s\t", ptr->name);
        ptr = ptr->next;
    }
    printf("\n");
}

void sort() {
    struct node *current = head, *index = NULL;
    char temp[50];

    if (head == NULL) {
        return;
    }

    while (current != NULL) {
        index = current->next;
        while (index != NULL) {
            if (strcmp(current->name, index->name) > 0) {
                strcpy(temp, current->name);
                strcpy(current->name, index->name);
                strcpy(index->name, temp);
            }
            index = index->next;
        }
        current = current->next;
    }
}

void reverse() {
    struct node *prev = NULL;
    struct node *current = head;
    struct node *next = NULL;

    while (current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

    head = prev;
}

int count() {
    struct node *temp = head;
    int count = 0;

    while (temp != NULL) {
        count++;
        temp = temp->next;
    }

    return count;
}

int main() {
    insert("apple");
    insert("bat");
    insert("charlie");
    insert("deon");
    insert("dia");

    printf("Initial List:\n");
    display();

    printf("\nAfter Sorting:\n");
    sort();
    display();

    printf("\nAfter Reversing:\n");
    reverse();
    display();

    deleteNode("apple");
    printf("\nAfter Deleting 'apple':\n");
    display();

    printf("\nNumber of nodes in the list: %d\n", count());

    return 0;
}
