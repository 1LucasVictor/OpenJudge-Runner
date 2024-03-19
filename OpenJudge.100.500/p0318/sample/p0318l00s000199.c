#include <stdio.h>
#include <stdlib.h>

struct node{
  int key;
  struct node *right;
  struct node *left;
  struct node *parent;
};

typedef struct node * Node;
#define NIL NULL

Node root;


Node treeSearch(Node ,int);
void print(Node );
void preorder(Node );
void inorder(Node );
void insert(int);
void treeDelete(Node);
Node treeSuccessor(Node);
Node treeMinimum(Node);
int main(){
  int n;
  int  i, x;
  char com[20];
  scanf("%d", &n);

  for ( i = 0; i < n; i++ ){
    scanf("%s", com);
  
    if ( com[0] == 'f' ){
      scanf("%d", &x);
      
       Node t = treeSearch(root, x);      
       if ( t != NIL ) printf("yes\n");
       else printf("no\n");
    } else if ( com[0] == 'i' ){
      scanf("%d", &x);
      insert(x);
    } else if ( com[0] == 'p' ){
      inorder(root);
      printf("\n");
      preorder(root);
      printf("\n");
    } else if ( com[0] == 'd' ){
      scanf("%d", &x);
      treeDelete(treeSearch(root, x));
    }
  }

  return 0;
}


void insert(int k){
  Node y = NIL;
  Node x = root;
  Node z;

  z = malloc(sizeof(struct node));
  z->key = k;
  z->left = NIL;
  z->right = NIL;

  while(x != NIL){
    y = x;
    if(z->key < x->key){
      x = x->left;
    }
    else{
      x = x->right;
    }
  }
  z->parent = y;   
  if(y == NIL) {
    root = z; //Tが空
  }
  else if(z->key < y->key ){
    y->left = z;
  }
  else y->right = z;
}

void print(Node root){
  inorder(root);
  preorder(root);
}

void preorder(Node u){
  if(u==NIL) return;
  printf(" %d",u->key);
  preorder(u->left);
  preorder(u->right);
}

void inorder(Node u){
  if(u == NIL) return;
  inorder(u->left);
  printf(" %d",u->key);
  inorder(u->right);
}

Node treeSearch(Node u,int k){
  int i;
  while(u != NIL){
    if(u->key == k) return u;
    if(k< u->key ) u = u->left;
    else u = u->right; 
  }
  return NIL;
}

void treeDelete(Node u){
  Node y; // node to be deleted
  Node x; // child of y
  if(u->left == NIL || u->right == NIL){
    y = u;
  }
  else
    y == treeSuccessor(u);

  if(y->left != NIL){
    x = y->left;
  }
  else{
    x = y->right;
  }

  if(x!=NIL){
    x->parent =  y->parent;
  }
  if(y->parent == NIL){
    root = x;
  }
  else if(y == y->parent->left){
    u->parent->left = x;
  }
  else{
    y->parent->right = x;
  }

  if(y != u){
    u->key = y->key; 
  }
}

Node treeSuccessor(Node x){
  Node y;
  if(x->right != NIL){
    return treeMinimum(x->right);
  }

  y = x->parent;
  while(y != NIL && x == y->right){
    x = y;
    y = y->parent;
  }
  return y;
}


Node treeMinimum(Node x){
  while(x->left != NIL){
    x = x->left;
  }
  return x;
}

