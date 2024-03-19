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

void ino(Node u){
 
  if(u->left != NULL){
 
    ino(u->left);
  }
 
  printf(" %d",u->key);
 
  if(u->right != NULL){
     
    ino(u->right);
  }
 
}
void pre(Node u){
 
  printf(" %d",u->key);
   
  if(u->left != NULL){
    pre(u->left);
  }
   
  if(u->right != NULL){
    pre(u->right);
  }
   
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
            ino(root);
            printf("\n");
            pre(root);
            printf("\n");
        } 
    }
    return 0;
}




