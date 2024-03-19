#include<stdio.h>
#include<stdlib.h>
  
struct node{
  struct node *right;
  struct node *left;
  struct node *p;
  int key;
};
typedef struct node * Node;
#define NIL NULL
  
Node root;
  
Node treeMinimum(Node x){
  Node y;
  y=x;
  while(y->left!=NIL) y=y->left;
  
  return y;
  
}
  
Node treeMaximum(Node x){
 Node y;
  y=x;
  while(y->left!=NIL) y=y->right;
  
  return y;
  
}
  
Node treeSearch(Node u, int k){
  Node x;
  x=u;
  
  while(x!=NIL && k!=x->key){
    if(k < x->key)x=x->left;
    else x=x->right;
  }
  
  return x;
  
}
  
Node treeSuccessor(Node x){
  Node y;
  
  if(x->right!=NIL)return treeMinimum(x->right);
  
  y=x->p;
  while(y!=NIL && x==y->right){
    x=y;
    y=y->p;
  }
  return y;
  
}
  
void treeDelete(Node z){
  Node y;
  Node x;
  
  if(z->left==NIL || z->right==NIL)y=z;
  else y=treeSuccessor(z);
  
  if(y->left!=NIL)x=y->left;
  else x=y->right;
  
  if(x!=NIL)x->p=y->p;
  if(y->p==root)root=x;
  else if(y == y->p->left)y->p->left=x;
  else y->p->right=x;
  
  if(y!=z) z->key=y->key;
  free(y);
  
}
  
void insert(int k){
  Node y = NIL;
  Node x = root;
  Node z;
  
  z = malloc(sizeof(struct node));
  z->key = k;
  z->left = NIL;
  z->right = NIL;
  
  while(x!=NIL){
    y=x;
    if(k < x->key)x=x->left;
    else x=x->right;
  }
  z->p=y;
  
  if(y==NIL)root=z;
  else if(z->key < y->key)y->left=z;
  else y->right=z;
  
}
  
void inorder(Node u){
  if (u==NIL)return;
  
  inorder(u->left);
  printf(" %d",u->key);
  inorder(u->right);
  
}
void preorder(Node u){
if (u==NIL)return;
  
 printf(" %d",u->key);
 preorder(u->left);
 preorder(u->right);
  
}
  
  
int main(){
  int num, i, z;
  char com[20];
  Node t;
  scanf("%d", &num);
  
  for ( i = 0; i < num; i++ ){
    scanf("%s", com);
    if ( com[0] == 'f' ){
      scanf("%d", &z);
       t = treeSearch(root, z);
      if ( t != NIL ) printf("yes\n");
      else printf("no\n");
    } else if ( com[0] == 'i' ){
      scanf("%d", &z);
      insert(z);
    } else if ( com[0] == 'p' ){
      inorder(root);
      printf("\n");
      preorder(root);
      printf("\n");
    } else if ( com[0] == 'd' ){
      scanf("%d", &z);
      treeDelete(treeSearch(root, z));
    }
  }
  
  return 0;
}
