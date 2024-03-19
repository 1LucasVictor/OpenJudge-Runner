#include <stdio.h>
#include <string.h>

struct node{
  struct node *right;
  struct node *left;
  struct node *parent;
  int key;
};

typedef struct node * Node;

Node root;

void insert(int key);
void inorder(Node );
void preorder(Node );
Node search(Node u,int k);
void delete(Node z);
void trans(Node,Node);
Node min(Node x);

int main()
{
  int n, i, x;
  char com[20];
  scanf("%d", &n);

  for ( i = 0; i < n; i++ ){
    scanf("%s", com);
    if(com[0] == 'i'){
      scanf("%d",&x);
      insert(x);
    }
    if(com[0] == 'p'){
      inorder(root);
      printf("\n");
      preorder(root);
      printf("\n");
    }
    if(com[0] == 'f'){
      scanf("%d",&x);
      Node t = search(root,x);
      if ( t != NULL ) printf("yes\n");
      else printf("no\n");
    }
    if ( com[0] == 'd' ){
      scanf("%d", &x);
      delete(search(root, x));
    }
  }

  return 0;
}

void insert(int key)
{
  Node x,y,z;
  y = NULL;
  x = root;

  z = malloc(sizeof(struct node));
  z->key = key;
  z->right = NULL;
  z->left = NULL;

  while(x != NULL){
    y = x;
    if(z->key < x->key) x = x->left;
    else x = x->right;
  }
  z->parent = y;
  if(y == NULL) root = z;
  else if(z->key < y->key) y->left = z;
  else y->right = z;
}

void inorder(Node u)
{

  if(u != NULL){
    inorder(u->left);
    printf(" %d",u->key);
    inorder(u->right);
  }
}

void preorder(Node u)
{
  if(u != NULL){
    printf(" %d",u->key);
    preorder(u->left);
    preorder(u->right);
  }
}

Node search(Node u,int k)
{
  if(u == NULL || k == u->key) return u;
  if(k < u->key) return search(u->left,k);
  else return search(u->right,k);
}

void delete(Node z)
{
  Node x;
  Node y;
  if(z->left == NULL) trans(z,z->right);
  else if(z->right == NULL) trans(z,z->left);
  else{
    y = min(z->right);
    if(y->parent != z){
      trans(y,y->right);
      y->right = z->right;
      y->right->parent = y;
    }
    trans(z,y);
    y->left = z->left;
    y->left->parent = y;
  }
}

void trans(Node u,Node v)
{
  if(u->parent == NULL) root = v;
  else if(u == u->parent->left) u->parent->left = v;
  else u->parent->right = v;
  if(v != NULL) v->parent = u->parent;
}

Node min(Node x)
{
  while(x->left != NULL){
    x = x->left;
  }
  return x;
}


