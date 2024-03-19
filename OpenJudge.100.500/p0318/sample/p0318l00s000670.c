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
 
Node * find(Node *x, long k) {
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
 
Node* getMinimum(Node *x) {
    while (x->l != NIL) x = x->l;
    return x;
}
 
Node* getSuccessor(Node *x) {
    if (x->r != NIL) return getMinimum(x->r);
     
    Node *y;
    y = x->p;
    while ( y!=NIL && x == y->r) {
    x = y;
    y = y->p;
    }
    return y;
}
void deleteNode(Node *z) {
    Node *y;
    Node *x;
    if (z->l == NIL || z->r == NIL) y = z;
    else y = getSuccessor(z);
 
    if (y->l != NIL) x = y->l;
    else x = y->r;
     
    if (x != NIL) x->p = y->p;
     
    if (y->p == NIL) root = x;
    else if (y == y->p->l) y->p->l = x;
    else y->p->r = x;
 
    if (y!= z) z->key = y->key;
}
 
 
int main() {
    long n, i, x;
    char st[20];
    scanf("%ld", &n);
    for (i = 0; i < n; i++) {
    scanf("%s", st);
    scanf("%ld", &x);
    Node *u = find(root, x);
    if (st[0] == 'f') {
        if (u != NIL) printf("yes\n");
        else printf("no\n");
    }
    else if (st[0] == 'i') insert(x);
    else if(st[0] == 'd') deleteNode(find(root, x));
    else if (st[0] == 'p') print();
    }
    return 0;
}

