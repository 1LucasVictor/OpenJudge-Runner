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

