#include <stdio.h>
#include<stdlib.h>

struct node{
    struct node *right;
    struct node *left;
    struct node *parent;
    int key;
};
typedef struct node * Node;
#define NIL NULL

Node root;

void insert(int k){
    Node y = NIL;
    Node x = root;
    Node z;
    
    z = malloc(sizeof(struct node));
    z->key = k;
    z->left = NIL;
    z->right = NIL;
    
    while(x!=NIL){
        y=x;
        if(z->key < x->key){
            x=x->left;
        }
        else x=x->right;
    }
    z->parent=y;
    if(y==NIL) root=z;
    else if(z->key<y->key) y->left=z;
    else y->right=z;
}



void inorder(Node u){
    if(u->left!=NIL){
        inorder(u->left);
    }
    printf(" %d",u->key);
    
    if(u->right!=NIL){
        inorder(u->right);
    }
}

void preorder(Node u){
    printf(" %d",u->key);
    
    if(u->left!=NIL){
        preorder(u->left);
    }
    if(u->right!=NIL){
        preorder(u->right);
    }
    
}

Node find(Node x, int k){
    
    if(x == NIL || k == x->key)
        return x;
    if(k < x->key)
        return find(x->left, k);
    else
        return find(x->right, k);
    
}


int main(){
    int n, i, x, k;
    char com[20];
    scanf("%d", &n);
    root=NIL;
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
        else if( com[0] == 'f'){
            scanf("%d",&x);
            Node t=find(root,x);
            if ( t != NIL ) printf("yes\n");
            else printf("no\n");
        }
    }
    
    return 0;
}