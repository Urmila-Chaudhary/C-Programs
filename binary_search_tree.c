#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *left;
    struct node *right;
};

typedef struct node tree;

tree *root = NULL;

// Function to insert a value into the BST
void insert(int e) {
    tree *x, *p, *t;
    
    if (root == NULL) {
        // If the tree is empty, create the root node
        root = (tree *)malloc(sizeof(tree));
        root->data = e;
        root->left = NULL;
        root->right = NULL;
    } else {
        // Traverse the tree to find the correct insertion point
        p = root;
        while (p != NULL) {
            x = p;
            if (e > p->data) {
                p = p->right;
            } else if (e < p->data) {
                p = p->left;
            } else {
                printf("Duplicate value not allowed\n");
                return;
            }
        }
        
        // Allocate memory for the new node and insert it
        t = (tree *)malloc(sizeof(tree));
        t->data = e;
        t->left = NULL;
        t->right = NULL;
        
        if (e > x->data) {
            x->right = t;
        } else {
            x->left = t;
        }
    }
}

// Function to perform inorder traversal
void inorder(tree *root) {
    if (root != NULL) {
        inorder(root->left);
        printf("%d\t", root->data);
        inorder(root->right);
    }
}

// Function to perform preorder traversal
void preorder(tree *root) {
    if (root != NULL) {
        printf("%d\t", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

// Function to perform postorder traversal
void postorder(tree *root) {
    if (root != NULL) {
        postorder(root->left);
        postorder(root->right);
        printf("%d\t", root->data);
    }
}

int main() {
    // Insert values into the BST
    insert(60);
    insert(70);
    insert(55);
    insert(80);
    
    // Display tree traversals
    printf("Inorder: \n");
    inorder(root);
    printf("\nPreorder: \n");
    preorder(root);
    printf("\nPostorder: \n");
    postorder(root);
    
    return 0;
}
