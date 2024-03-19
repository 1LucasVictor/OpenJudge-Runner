#include <stdio.h>
#include <stdlib.h>
#define NIL NULL
#define Yes 7
#define No -7

struct node{
  struct node *right;
  struct node *left;
  struct node *parent;
  int key;
};

typedef struct node * Node;

Node root;

void insert(int);
void inorder(Node);
void preorder(Node);
Node find(int);
void delete(Node);
Node Mini(Node);
Node getSuc(Node);

int main(){

  int i = 0;
  int n = 0, key = 0;
  char com[7];
  Node u;
  
  scanf("%d",&n);
  for(i = 0; i < n; i++){
    
    scanf("%s",com);
    
    if(com[0] == 'i'){
      scanf("%d",&key);
      insert(key);
    }
    else if(com[0] == 'p'){
      inorder(root);
      printf("\n");
      preorder(root);
      printf("\n");
    }
    else if(com[0] == 'f'){
      scanf("%d",&key);
      if(find(key) != NIL)printf("yes\n");
      else printf("no\n");
    }
    else if(com[0] == 'd'){
      scanf("%d",&key);
      delete(find(key));
    }
    
  }
  
  return 0;
}

void insert(int key){

  Node y = NIL; /* x's parent  */
  Node x = root;
  Node z;

  z = malloc(sizeof(struct node));
  z->key = key;
  z->left = NIL;
  z->right = NIL;

  while(x != NIL){
    
    y = x;    /* settei parent */
    
    if(z->key < x->key)x = x->left;   /* move to left child */
    else x = x->right;  /* move to right child */
    
  }

  z->parent = y;

  if(y == NIL)root = z;/* if T is empty  */
  else if(z->key < y->key)y->left = z; /* y'left is z */
  else y->right = z; /* y'right is z */

}

void inorder(Node u){
  
  if(u == NIL)return;
  
  inorder(u->left);
  printf(" %d",u->key);
  inorder(u->right);
  
}

void preorder(Node u){
  
  if(u == NIL)return;
  
  printf(" %d",u->key);
  preorder(u->left);
  preorder(u->right);
  
}

Node find(int key){
  Node x = root;

  while(x != NIL){
    if(key == x->key)return x;
    if(x->key < key)x = x->right;
    else x = x->left;
  }
  return NIL;
}

void delete(Node z){

  Node x, y;
  
  //削除する対象を節点yとする
  if(z->left == NIL || z->right == NIL)y = z;//z ko nasi or ko 1
  else y = getSuc(z);//z no ko 2 -> z next

  //kimeru y no ko
  if(y->left != NIL)x = y->left;
  else x = y->right;

  if(x != NIL)x->parent = y->parent;

  if(y->parent == NIL)root = x;
  else if(y == y->parent->left)y->parent->left = x;
  else y->parent->right = x;

  if(y != z)z->key = y->key;
  
}

Node getSuc(Node x){

  Node y;
  
  if(x->right != NIL)return Mini(x->right);

  y = x->parent;
  
  while(y != NIL && x == y->right){

    x = y;
    y = y->parent;
    
  }

  return y;
  
}

Node Mini(Node x){

  while(x->left != NIL){
    x = x->left;
  }

  return x;
  
}

