#include<stdio.h>
#include<stdlib.h>
#define NIL NULL 

struct node {

  int key;
  struct node *left;
  struct node *right;
  struct node *parent;
};

typedef struct node* Node;
Node root;

Node treeSearch(Node x,int k) {
  if(x == NIL || k == x-> key) 
    return x;
  if(k < x->key)
    return treeSearch(x->left,k);
  else return treeSearch(x->right,k );
}

Node treeMinimum(Node u) {
  
  while(u->left != NIL)
    u = u->left;
  return u;
} 


Node treeSuccessor(Node u) {
  
  Node y;
  if(u->right != NIL) 
    return treeMinimum(u->right);
  
  y = u->parent;  
  while(y != NIL && u == y->right) {
    u = y;
    y = y->parent;
  }
  return y;
} 

void treeDelete(Node u) {
  
  Node y;
  Node x;
  
  if(u->left == NIL || u->right == NIL) 
    y = u;
  else y = treeSuccessor(u);

  if(y->left != NIL) 
    x = y->left;
  else x = y->right;

  if(x != NIL)
    x->parent = y->parent;
  
  if(y->parent == NIL)
    root = x;
  
  else {
    if(y == y->parent->left)
      y->parent->left = x;
    
    else y->parent->right = x;
    
    if(y != u) {
      u->key = y->key;
    }
    y = u; 
  }
}
void insert(int k) {
  
  Node y = NIL;
  Node x = root;
  Node z;  
  
  z = malloc(sizeof(struct node));
  z->key = k;
  z->left = NIL;
  z->right = NIL;
   
 while(x != NIL) {
    y = x;
  if(z->key < x->key)
    x = x->left;
  
  else x = x->right;
 }
  z->parent = y;
  
  if(y == NIL)
    root = z;
  
  else if(z->key < y->key)
    y->left = z;
  
  else 
    y->right = z;
  
}

void inorder(Node u) {
  
  if(u->left != NIL)
    inorder(u->left);
  printf(" %d",u->key);
  if(u->right != NIL)  
    inorder(u->right); 
}

void preorder(Node u) {
  printf(" %d",u->key);
  if(u->left != NIL)
    preorder(u->left);
  if(u->right != NIL)
    preorder(u->right); 
}

int main(void) {
  
  int i,n,x;
  char c[6];
  
  scanf("%d",&n);
  
  for(i=0;i<n;i++) {
    scanf("%s",c);
    if(c[0] == 'f') {
      scanf("%d",&x);
      if(treeSearch(root,x) != NIL)
	printf("yes\n");
      else printf("no\n");
    }
    else if(c[0] == 'i') {
      scanf("%d",&x);
      insert(x);
    }
    else if(c[0] == 'p') {
      if(root != NIL)   
	inorder(root);
      printf("\n");
      if(root != NIL)
	preorder(root);
      printf("\n");
    }  
    else if(c[0] == 'd') {
      scanf("%d",&x);
      treeDelete(treeSearch(root,x));
    }  
  }
  return 0;
}