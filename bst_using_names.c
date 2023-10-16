#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node {
    char data[50];
    struct node *left;
    struct node *right;
};

struct node* insertnode(struct node* root, char name[]) {
    if (root == NULL) {
        // Allocate memory and initialize the new node
        root = (struct node*)malloc(sizeof(struct node));
        strcpy(root->data, name);
        root->left = NULL;
        root->right = NULL;
    } else {
        struct node* t = root;
        while (1) {
            if (strcmp(name, t->data) < 0) {
                // Insert in the left subtree
                if (t->left == NULL) {
                    struct node *newnode = (struct node*)malloc(sizeof(struct node));
                    strcpy(newnode->data, name);
                    newnode->left = NULL;
                    newnode->right = NULL;
                    t->left = newnode;
                    break;
                }
                t = t->left;
            } else if (strcmp(name, t->data) > 0) {
                // Insert in the right subtree
                if (t->right == NULL) {
                    struct node *newnode = (struct node*)malloc(sizeof(struct node));
                    strcpy(newnode->data, name);
                    newnode->left = NULL;
                    newnode->right = NULL;
                    t->right = newnode;
                    break;
                }
                t = t->right;
            } else {
                // Duplicate values are not allowed
                printf("Duplicate value '%s' not allowed\n", name);
                break;
            }
        }
    }
    return root;
}

void inorder(struct node* r) {
    if (r != NULL) {
        inorder(r->left);
        printf("%s\n", r->data);
        inorder(r->right);
    }
}

int main() {
    struct node* root = NULL;
    root = insertnode(root, "John");
    root = insertnode(root, "Ali");
    root = insertnode(root, "Babita");
    root = insertnode(root, "Chahar");
    root = insertnode(root, "Alice");
    root = insertnode(root, "Faruk");

    printf("Names in ascending order:\n");
    inorder(root);

    return 0;
}
