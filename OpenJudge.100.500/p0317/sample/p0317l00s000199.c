#include<stdio.h>
#include<stdlib.h>
#define MAX 500001
 
typedef struct Node {
    long key;
    struct Node *p, *l, *r;
} Node;
 
Node *root, *NIL;
 
 
void insert(long k) {
    Node *y = NIL;
    Node *x = root;
    Node *z;
     
    z = (Node *)malloc(sizeof(Node));
    z->key = k;
    z->l = z->r = NIL;
     
    while (x != NIL) {
    y = x;
    if (z->key < x->key) x = x->l;
    else x = x->r;
    }
    z->p = y;
     
    if (y == NIL) root = z;
    else if (z->key < y->key) y->l = z;
    else y->r = z;
}
 
Node* find(Node *x, long k) {
    while (x != NIL && k != x->key) {
    if (k < x->key) x = x->l;
    else x = x->r;
    }
    return x;
}
 
void inorder(Node *u) {
    if (u == NIL) return;
    inorder(u->l);
    printf(" %d", u->key);
    inorder(u->r);
}
 
void preorder(Node *u) {
    if (u == NIL) return;
    printf(" %d", u->key);
    preorder(u->l);
    preorder(u->r);
}
 
void print() {
    inorder(root);
    printf("\n");
    preorder(root);
    printf("\n");
}
 
int main() {
    long n, i, x;
    char st[20];
    scanf("%ld", &n);
    for (i = 0; i < n; i++) {
    scanf("%s", st);
    scanf("%ld", &x);
    if (st[0] == 'f') {
        if (find(root, x) != NIL) printf("yes\n");
        else printf("no\n");
    }
    else if (st[0] == 'i') insert(x);
    else if (st[0] == 'p') print();
    }
    return 0;
}