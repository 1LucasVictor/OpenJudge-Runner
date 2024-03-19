#include<stdio.h>
#include<stdlib.h>

#define NIL NULL
#define N 500000

struct node{
  struct node *parent;
  struct node *right;
  struct node *left;
  int key;
};

typedef struct node * Node;

Node root;

void insert(int);
void inorder(Node);
void preorder(Node);
Node find(Node,int);
Node getMinimum(Node);
Node getSuccessor(Node);
void deleteNode(Node);

int main(void){
  int n,x;
  int i;
  char com[20];
  Node t;

  scanf("%d",&n);

  for(i = 0; i < n; i++){
    scanf(" %s",com);
    if(com[0] == 'i'){
      scanf(" %d",&x);
      insert(x);
    }
    else if(com[0] == 'f'){
      scanf(" %d",&x);
      t = find(root,x);
      if(t != NIL)printf("yes\n");
      else printf("no\n");
    }
    else if(com[0] == 'd'){
      scanf(" %d",&x);
      deleteNode(find(root,x));
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

void insert(int k){
  Node y = NIL;
  Node x = root;
  Node z;

  z = (Node)malloc(sizeof(struct node));
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
  if(y == NIL){
    root = z;
  }
  else{
    if(z->key < y->key){
      y->left = z;
    }
    else{
      y->right = z;
    }
  }
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

Node find(Node u, int k){
  while(u != NIL && u->key != k){
    if(k < u->key){
      u = u->left;
    }
    else{
      u = u->right;
    }
  }
  return u;
}

Node getMinimum(Node u){
  while(u->left != NIL) u = u->left;
  return u;
}

Node getSuccessor(Node u){
  Node y;
  
  if(u->right != NIL) return getMinimum(u->right);

  y = u->parent;
  while(y != NIL && u == y->right){
    u = y;
    y = y->parent;
  }
  return y;
}

void deleteNode(Node u){
  Node x,y;
  
  if(u->left == NIL || u->right == NIL){
    y = u;
  }
  else{
    y = getSuccessor(u);
  }

  if(y->left != NIL){
    x = y->left;
  }
  else{
    x = y->right;
  }

  if(x != NIL){
    x->parent = y->parent;
  }

  if(y->parent == NIL){
    root = x;
  }
  else if(y == y->parent->left){
    y->parent->left = x;
  }
  else{
    y->parent->right = x;
  }

  if(y != u){
    u->key = y->key;
  }
}

