#include<stdio.h>
#include<stdlib.h>
#define N NULL

struct node{
    struct node *right;
    struct node *left;
    struct node *parent;
    int key;
};

typedef struct node *Node;


Node root;

void insert(int k){
    Node y = N;
    Node x = root;
    Node z;
    
    z = malloc(sizeof(struct node));
    z->key = k;
    z->left = N;
    z->right = N;
    
    while( x != N ){
        y = x;
        if( z->key < x->key )
            x = x->left;
        else
            x = x->right;
    }
    
    if( y == N )
        root = z;
    else if( z->key < y->key )
        y->left = z;
    else
        y->right = z;
    
}

void inorder(Node u){
    if( u != N ){
        inorder(u->left);
        printf(" %d",u->key);
        inorder(u->right);
    }
}
void preorder(Node u){
    printf(" %d",u->key);
    
    if( u->left != N ) preorder(u->left);
    
    if( u->right != N ) preorder(u->right);
    
    
}

Node treeSearch(Node u, int k){
    while( u != N )
    {
        if( u->key == k ) break;
        if( u->key < k )
            u = u->right;
        else
            u = u->left;
        
    }
    
    return u;
}


int main(){
    int n, i, x;
    char com[20];
    scanf("%d",&n);
    
    for ( i = 0; i < n; i++ ){
        scanf("%s",com);
        
        if ( com[0] == 'i' ){
            scanf("%d", &x);
            insert(x);
        }
        else if ( com[0] == 'p' ){
            inorder(root);
            printf("\n");
            preorder(root);
            printf("\n");
        }
        else if ( com[0] == 'f' ){
            scanf("%d", &x);
            Node t = treeSearch(root, x);
            if ( t != N ) printf("yes\n");
            else printf("no\n");
        }
    }
    
    return 0;
}

