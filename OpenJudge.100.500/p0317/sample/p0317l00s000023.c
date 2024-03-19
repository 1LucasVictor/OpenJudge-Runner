#include<stdio.h>
#include<stdlib.h>
#define NIL NULL
typedef struct node* Node;
struct node{
  Node right;
  Node left;
  Node parent;
  int key;
};
Node root;

void insert(int k) {
  Node y = NIL;
  Node x = root;
  Node z;

  z = (Node)malloc(sizeof(struct node));
  z->key = k;
  z->left = NIL;
  z->right = NIL;
  
  while(x != NIL) {
    y = x;
    if(z->key < x->key)
      x = x->left;
    else 
      x= x->right;
  }
  z->parent = y;
  
  if(y == NIL) 
    root = z;
  else if(z->key < y->key)
    y->left = z;
  else 
    y->right = z;
}

Node treeSearch(Node x, int k) {
  while(x != NIL && k != x->key) {
    if(k < x->key) 
      x = x->left;
    else 
      x = x->right;
  }
  return x;
}

void inorder(Node u) {
  if(u==NIL) return;
  inorder(u->left);
  printf(" %d",u->key);
  inorder(u->right);
}

void preorder(Node u) {
  if(u==NIL) return;
  printf(" %d",u->key);
  preorder(u->left);
  preorder(u->right);
}

int main() 
{
  int n, i, x;
  char c[10];
  Node t;
  scanf("%d",&n);
  
  for (i=0; i<n; i++){
    scanf("%s",c);
    if (c[0] == 'f'){
      scanf("%d",&x);
      t = treeSearch(root,x);
      if (t != NIL) printf("yes\n");
      else printf("no\n");
    }
    else if(c[0] == 'i'){
      scanf("%d",&x);
      insert(x);
    } 
    else if(c[0] == 'p'){
      inorder(root);
      printf("\n");
      preorder(root);
      printf("\n");
    } 
  } 
  return 0;
}