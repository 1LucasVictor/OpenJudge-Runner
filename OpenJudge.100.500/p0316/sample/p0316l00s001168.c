#include <stdio.h>
#include <stdlib.h>

#define N_MAX 500001

struct node{
    int key;
    struct node *right;
    struct node *left;
    struct node *parent;
};

typedef struct node *Node;
Node root = NULL;

void insert(int k){
    Node y = NULL;
    Node x = root;
    Node z;
    
    z = malloc(sizeof(struct node));
    z->key = k;
    z->right = NULL;
    z->left = NULL;
    while(x != NULL){
        y = x;
        if(z->key < x->key){
            x = x->left;
        }else{
            x = x->right;
        }
    }
    z->parent = y;

    if(y == NULL){
        root = z;
    }else if(z->key < y->key){
        y->left = z;
    }else{
        y->right = z;
    }
}

/* 中間順アルゴリズム */
#if 0
void inorder(Node u){
    
    if(u->left != NULL){
        inorder(u->left);
    }
    printf(" %d",u->key);

    if(u->right != NULL){
        inorder(u->right);
    }
}
#endif

void inorder(Node u){
    
    if(u == NULL){
        return;
    }
    inorder(u->left);
    printf(" %d",u->key);
    inorder(u->right);
}

void preorder(Node u){
    
    if(u == NULL){
        return;
    }
    printf(" %d",u->key);
    preorder(u->left);
    preorder(u->right);
}

int main(){
    int n, i, x;
    char com[20];
    scanf("%d", &n);
    
    
    for ( i = 0; i < n; i++ ){
        scanf("%s", com);
        if ( com[0] == 'i' ){
            scanf("%d", &x);
            insert(x);
        } else if ( com[0] == 'p' ){
            inorder(root);
            printf("\n");
            preorder(root);
            printf("\n");
        } 
    }
    return 0;
}




