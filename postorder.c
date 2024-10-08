#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *left;
    struct node *right;
};

typedef struct node tree;

struct stack {
    tree *r;
    int count;
    struct stack *next;
};

typedef struct stack stack;

tree *root = NULL;
stack *top = NULL;

void insert(int e) {
    tree *p, *x;
    if (root == NULL) {
        root = (tree *)malloc(sizeof(tree));
        root->data = e;
        root->left = NULL;
        root->right = NULL;
    } else {
        p = root;
        while (p != NULL) {
            x = p;
            if (e > p->data) {
                p = p->right;
            } else if (e < p->data) {
                p = p->left;
            } else {
                printf("\nDuplicate values not allowed\n");
                return;
            }
        }
        tree *t = (tree *)malloc(sizeof(tree));
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

void push(tree *t, int c) {
    stack *temp = (stack *)malloc(sizeof(stack));
    temp->r = t;
    temp->count = c;
    temp->next = top;
    top = temp;
}

tree *pop() {
    tree *t = NULL;
    if (top != NULL) {
        t = top->r;
        stack *temp = top;
        top = top->next;
        free(temp);
    }
    return t;
}

int peek() {
    int c = -1;
    if (top != NULL) {
        c = top->count;
    }
    return c;
}

void postorder(tree *root) {
    tree *t;
    int c;
    for (t = root; t != NULL; t = t->left) {
        push(t, 1);
    }
    
    c = peek();
    t = pop();
    
    while (t != NULL) {
        if (c == 1) {
            push(t, 2);
            for (t = t->right; t != NULL; t = t->left) {
                push(t, 1);
            }
        } else if (c == 2) {
            printf("%d ", t->data);
        }
        
        c = peek();
        t = pop();
    }
}

int main() {
    insert(100);
    insert(50);
    insert(60);
    insert(200);
    insert(150);
    insert(145);
    insert(15);
    insert(25);
    
    printf("\nPostorder without using recursion:\n");
    postorder(root);
    
    return 0;
}
