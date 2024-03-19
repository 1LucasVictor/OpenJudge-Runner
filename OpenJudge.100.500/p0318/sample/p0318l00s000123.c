#include<stdio.h>
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

void insert(int);
void print(void);
Node treeMaximum(Node);
Node treeMinimum(Node);
Node treeSearch(Node, int);
Node treeSuccessor(Node);
void delete(Node);
void inorder(Node);
void preorder(Node);
Node find(Node, int);

int main()
{
  int m,i,x;
  char com[10];
  Node t;

  scanf("%d",&m);
  
  for(i = 0; i < m; i++){
    scanf("%s",com);
    if(com[0] == 'p'){
      inorder(root);
      printf("\n");
      preorder(root);
      printf("\n");
    }
    else if(com[0] == 'd'){
      scanf("%d",&x);
      delete(treeSearch(root, x));
    }
    else if(com[0] == 'i'){
      scanf("%d",&x);
      insert(x);
    }
    else if(com[0] == 'f'){
      scanf("%d",&x);
      t = treeSearch(root, x);
      if(t != NIL)printf("yes\n");
      else printf("no\n");
    }
  }

  return 0;
}

void insert(int k)
{
  Node y;
  Node x;
  Node z;
  
  y = NIL; //xの親
  x = root;

  z = malloc(sizeof(struct node));
  z->key = k;
  z->left = NIL;
  z->right = NIL;

  while(x != NIL){
    y = x;
    if(z->key < x->key)
      x = x->left;
    else
      x = x->right;
  }
  z->parent = y;

  if(y == NIL)
    root = z;
  else if(z->key < y->key)
    y->left = z;
  else
    y->right = z;
}

Node treeMaximum(Node x)
{
  while(x->left != NIL){
    x = x->right;
  }
  return x;
}

Node treeMinimum(Node x)
{
  while(x->left != NIL){
    x = x->left;
  }
  return x;
}

Node treeSearch(Node x, int k)
{
  while(x != NIL && k != x->key){
    if(k < x->key)x = x->left;
    else x = x->right;
  }
  
    return x;
}

Node treeSuccessor(Node x)
{
  Node y;
  
  if(x->right != NIL)return treeMinimum(x->right);

  y = x->parent;
  while(y != NIL && x == y->right){
    x = y;
    y = y->parent;
  }

  return y;
}

void delete(Node z)
{
  Node y; //消去候補
  Node x; //yの子

  if(z->left == NIL || z->right == NIL)
    y = z;
  else
    y = treeSuccessor(z);

  if(y->left != NIL)
    x = y->left;
  else
    x = y->right;

  if(x != NIL)x->parent = y->parent;
  
  if(y->parent == NIL)root = x;
  else if(y == y->parent->left)y->parent->left = x;
  else y->parent->right = x;

  if(y != z)z->key = y->key;
}

void inorder(Node x)
{
  if(x != NIL){
    inorder(x->left);
    printf(" %d",x->key);
    inorder(x->right);
  }
}

void preorder(Node x)
{
  if(x == NIL)return;
  printf(" %d",x->key);
  preorder(x->left);
  preorder(x->right);
}

Node find(Node x, int k)
{
  while(x != NIL && k != x->key){
    if(k < x->key)x = x->left;
    else x = x->right;
  }

    return x;
}

