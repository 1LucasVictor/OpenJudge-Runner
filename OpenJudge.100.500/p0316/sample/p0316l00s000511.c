#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Node{
    int key;
    struct Node *right;
    struct Node *left;
    struct Node *parent;
};
void insert(int);
void inorder(struct Node *);
void preorder(struct Node *);

struct Node *root,*NIL;

int main(){
    int n,j,x;
    char St[10];

    scanf("%d",&n);
    for(j=0;j<n;j++){
        scanf("%s%d",St,&x);
        if(strcmp(St,"print")==0){
            inorder(root);
            printf("\n");
            preorder(root);
            printf("\n");
        }
        else {
            insert(x);
        }
        
    }
    return 0;
}

void insert(int k){
    struct Node *x=root;
    struct Node *y=NIL;
    struct Node *z;

    z=(struct Node *)malloc(sizeof(struct Node));
    z->key=k;
    z->left=NIL;
    z->right=NIL;

    while(x!=NIL){
        y=x;
        if(z->key < x->key){
            x=x->left;
        }
        else{
            x=x->right;
        }
    }
    z->parent=y;
    if(y==NIL){
        root=z;
    }
    else{
        if(z->key < y->key){
            y->left=z;
        }
        else{
            y->right=z;
        }
    }
}

void inorder(struct Node *u){
    if(u==NIL) return;
    inorder(u->left);
    printf(" %d",u->key);
    inorder(u->right);
}
void preorder(struct Node *u){
    if(u==NIL) return;
    printf(" %d",u->key);
    preorder(u->left);
    preorder(u->right);
}
