#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct node{
  int key;
  struct node *parent;
  struct node *left;
  struct node *right;
}node;
typedef node * NodePointer;
NodePointer root, nil;
NodePointer make(int key, NodePointer p){
  NodePointer n;
  n = malloc(sizeof(struct node));
  n->key = key;
  n->parent = p;
  n->left = p;
  n->right = p;
  return n;
}

void insert(int key){
  NodePointer n, x, z;
  z = make(key, nil);
  //n = malloc(sizeof(struct node));
  //x = malloc(sizeof(struct node));
  n = root;
  x = nil;
  while(n != nil){
    x = n;
    if(n->key < key) n = n->right;
    else n = n->left;
  }
  z->parent = x;
  if(x == nil) root = z;
  if(x->key < z->key) x->right = z;
  if(x->key > z->key) x->left = z;
}
void inorder(NodePointer T){
  if(T->left->key != 0) inorder(T->left);
  printf(" %d",T->key);
  if(T->right->key != 0) inorder(T->right);
}
void preorder(NodePointer T){
  printf(" %d",T->key);
  if(T->left != nil) preorder(T->left);
  if(T->right != nil) preorder(T->right);
}
void fre(NodePointer T){
  free(T);
  if(T->left != nil) fre(T->left);
  if(T->right != nil) fre(T->right);
}
int main(){
  int i ,n, key;
  char s[20];
  nil = make(0, nil);
  root = make(0, nil);
  root = nil;
  scanf("%d",&n);
  for(i = 0; i < n; i++){
    scanf("%s", s);
    if(s[0] == 'i'){
      scanf("%d",&key);
      insert(key);
    }
    else if(s[0] == 'p'){
      inorder(root);
      printf("\n");
      preorder(root);
      printf("\n");  
    }
  }
  fre(root);
  free(nil);
  return 0;
}