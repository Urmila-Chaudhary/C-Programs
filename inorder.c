#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *left;
    struct node *right;
};

typedef struct node tree;

tree *root = NULL;
tree *stack[20];
int top = -1;

void insert(int e) {
    tree *p, *x, *t;

    if (root == NULL) {
        root = (tree *)malloc(sizeof(tree));
        root->data = e;
        root->left = NULL;
        root->right = NULL;
    } else {
        p = root;
        while (p != NULL) {
            x = p;
            if (p->data > e) {
                p = p->left;
            } else if (p->data < e) {
                p = p->right;
            } else {
                printf("Repeated value not allowed!\n");
                return;
            }
        }
        
        t = (tree *)malloc(sizeof(tree));
        t->data = e;
        t->left = NULL;
        t->right = NULL;
        
        if (x->data < e) {
            x->right = t;
        } else {
            x->left = t;
        }
    }
}

void inorder(tree *r) {
    if (r != NULL) {
        inorder(r->left);
        printf("%d\t", r->data);
        inorder(r->right);
    }
}

void push(tree *e) {
    if (top == 19) {
        printf("Stack is full\n");
    } else {
        stack[++top] = e;
    }
}

tree *pop() {
    if (top == -1) {
        return NULL;
    } else {
        return stack[top--];
    }
}

void inorder2(tree *r) {
    tree *t = r;
    tree *temp;

    while (1) {
        if (t != NULL) {
            push(t);
            t = t->left;
        } else {
            if (top == -1) {
                break;
            }
            temp = pop();
            if (temp != NULL) {
                printf("%d\t", temp->data);
                t = temp->right;
            }
        }
    }
}

int main() {
    insert(50);
    insert(15);
    insert(70);
    insert(10);
    insert(25);
    insert(55);
    insert(90);
    insert(13);
    insert(40);
    
    printf("Inorder with recursion:\n");
    inorder(root);
    printf("\n\nInorder without recursion:\n");
    inorder2(root);
    printf("\n");
    
    return 0;
}
