#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
typedef struct bnode{
    int key;
    struct bnode *parent;
    struct bnode *left;
    struct bnode *right;
}BinNode;
 
typedef struct btree{
    BinNode *bn;
    BinNode *root;
    int size;
}BinTree;
 
BinNode initBinNode(int);
void Insert(BinTree *, BinNode *);
void InorderPrint(BinNode *);
void PreorderPrint(BinNode *);
 
int main(void){
    int m, k;
    char s[10];
    int i;
 
    BinTree t;
    BinTree *T = &t;
    T->root = NULL;
    T->size = 0;
 
    scanf("%d", &m);
    T->bn = calloc(m, sizeof(BinNode));
    for (i = 0; i < m; i++){
        scanf("%s", s);
        if (!strcmp(s, "insert")){
            scanf("%d", &k);
            T->bn[T->size] = initBinNode(k);
            BinNode *z = &(T->bn[T->size]);
            T->size++;
            Insert(T, z);
        }
        else if (!strcmp(s, "print")){
                InorderPrint(T->root);
                printf("\n");
                PreorderPrint(T->root);
                printf("\n");
        }
    }
 
    return 0;
}
 
 
BinNode initBinNode(int v){
    BinNode z;
    z.key = v;
    z.parent = NULL;
    z.left = NULL;
    z.right = NULL;
 
    return z;
}
 
void Insert(BinTree *T, BinNode *z){
    BinNode *x, *y;
 
    y = NULL;
    x = T->root;
    while (x != NULL){
        y = x;
        if (z->key < x->key)
            x = x->left;
        else
            x = x->right;
    }
    z->parent = y;
 
    if (y == NULL)
        T->root = z;
    else if (z->key < y->key)
        y->left = z;
    else
        y->right = z;
}
 
void InorderPrint(BinNode *p){
    if (p != NULL){
        InorderPrint(p->left);
        printf(" %d", p->key);
        InorderPrint(p->right);
    }
}
 
void PreorderPrint(BinNode *p){
    if (p != NULL){
        printf(" %d", p->key);
        PreorderPrint(p->left);
        PreorderPrint(p->right);
    }
}