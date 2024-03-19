#include<stdio.h>
#include<stdlib.h>

struct node {
    int key;
    struct node *left, *right, *parent;
};

typedef struct node* Node;

Node root;

void insert(int k) {
    Node x, y, newnode;

    newnode = (Node)malloc(sizeof(struct node));
    
    newnode->key = k;
    newnode->left = newnode->right = NULL;

    x = root; 
    y = NULL;
    
    while (x != NULL) {
        y = x;
        if (newnode->key < x->key) x = x->left;
        else x = x->right;
    }
    newnode->parent = y;

    if (y == NULL) root = newnode;
    else if (newnode->key < y->key) y->left = newnode;
    else y->right = newnode;
}

void inorder(Node T) {
    if (T == NULL) return;
    inorder(T->left);
    printf(" %d", T->key);
    inorder(T->right);
}

void preorder(Node T) {
    if (T == NULL) return;
    printf(" %d", T->key);
    preorder(T->left);
    preorder(T->right);
}

Node find(int k) {
    Node T;
    T = root;
    while (T != NULL && T->key != k) {
        if (k < T->key) T = T->left;
        else T = T->right;
    }

    return T;
}

Node getMinimum(Node n) {
    while (n->left != NULL) n = n->left;
    return n;
}

Node getSuccessor(Node z) {
    Node y;

    if (z->right != NULL) return getMinimum(z->right);

    y = z->parent;
    while (z != NULL && z == y->right) {
        z = y;
        y = y->parent;
    }

    return y;
}

void delete(Node z) {
    Node x, y;
    if (z->left != NULL && z->right != NULL) y = getSuccessor(z);
    else y = z;

    if (y->left != NULL) x = y->left;
    else x = y->right; 

    if (x != NULL) x->parent = y->parent;

    if (y->parent == NULL) root = x;
    else if (y == y->parent->left) y->parent->left = x;
    else y->parent->right = x;

    if (y != z) z->key = y->key;

    free(y);
}

int main() {
    int n, k;
    int i;
    char com[8];

    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf(" %s", com);
        if (com[0] == 'i') {
            scanf("%d", &k);
            insert(k);
        }
        else if (com[0] == 'p') {
            inorder(root);
            printf("\n");
            preorder(root);
            printf("\n");
        }
        else if (com[0] == 'f') {
            scanf("%d", &k);
            if (find(k) == NULL) printf("no\n");
            else printf("yes\n");
        }
        else {
            scanf("%d", &k);
            delete(find(k));
        }
    }

    return 0;
}

