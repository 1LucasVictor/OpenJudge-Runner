#include <stdio.h>
#include <stdlib.h>

struct Node{
    int key;
    struct Node *right;
    struct Node *left;
    struct Node *parent;
};
struct Node *root;

void inorder(struct Node *);
void preorder(struct Node *);
void insert(int);

int main(){
    int n,x;
    char com[20];

    scanf("%d", &n);

    for (int i = 0; i < n; i++ ){
        scanf("%s", com);
        if(com[0] == 'i'){
            scanf("%d",&x);
            insert(x);
        } 
        else if(com[0] == 'p'){
            inorder(root);
            printf("\n");
            preorder(root);
            printf("\n");
        } 
    }

    return 0;
}

void inorder(struct Node *A){
    if(A == NULL)return;
    inorder(A->left);
    printf(" %d",A->key);
    inorder(A->right);
}

void preorder(struct Node *A){
    if(A == NULL)return;
    printf(" %d",A->key);
    preorder(A->left);
    preorder(A->right);
}

void insert(int key){
    struct Node *y = NULL;
    struct Node *x = root;
    struct Node *z = malloc(sizeof(struct Node));
    z->key = key;
    z->left = z->right = z->parent = NULL;

    while(x != NULL){
        y = x;
        if(z->key < x->key){
            x = x->left;
        }
        else{
            x = x->right;
        }
    }

    z->parent = y;

    if(y == NULL){
        root = z;
    }
    else if(z->key < y->key){
        y->left = z;
    }
    else{
        y->right = z;
    }
}
