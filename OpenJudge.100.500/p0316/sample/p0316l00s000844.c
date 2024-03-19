#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node{
    int key;
    struct node *right, *left, *p;
};

typedef struct node Node;

Node *NIL, *T;

void insert(Node *z){
    Node *y = NIL;
    Node *x = T;

    while(x != NIL){
        y = x;
        if(z->key < x->key){
            x = x->left;
        }
        else{
            x = x->right;
        }
    }
    z->p = y;

    if(y == NIL){
        T = z;
    }
    else if(z->key < y->key){
        y->left = z;
    }
    else y->right = z;
}

void inorder(Node *i){
    if(i == NIL) return;
    inorder(i->left);
    printf(" %d", i->key);
    inorder(i->right);
}

void preorder(Node *i){
if(i == NIL) return;
printf(" %d", i->key);
preorder(i->left);
preorder(i->right);
}

int main(void){
    int nm, i, inp;
    char wd[10];
    Node *z;

    scanf("%d", &nm);
    for(i = 0; i < nm; i++){
        scanf("%s", wd);
        if(strcmp(wd,"insert") == 0){
            scanf("%d", &inp);
            z = (Node *)malloc(sizeof(Node));
            z->key = inp;
            z->left = NIL;
            z->right = NIL;
            insert(z);
        }
        else if(strcmp(wd, "printf")){
            inorder(T);
            printf("\n");
            preorder(T);
            printf("\n");
        }
    }
    return 0;
}
