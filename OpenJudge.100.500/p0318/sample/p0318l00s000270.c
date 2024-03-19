#include <stdio.h>
#include <string.h>
#include <stdlib.h>
  
#define NIL NULL
  
struct node {
  int key;  
  struct node *right;
  struct node *left;
  struct node *parent;
};
 
struct node *root;
struct node *find(int);
 
void inOrder(struct node *);
void preOrder(struct node *);
void insert(int);
void delete(struct node *);
 
struct node *min(struct node *);
struct node *successor(struct node *);
  
  
int main()
{
  int i, x, n, key;
  char s[10];
  
  scanf("%d", &n);
  for(i=0; i<n; i++) {
    scanf("%s", s);
    if(strcmp("insert", s) == 0) {
      scanf("%d", &x);
      insert(x);
    }
    else if(strcmp("print", s) == 0) {
      inOrder(root);
      printf("\n");
      preOrder(root);
      printf("\n");
    }
    else if(strcmp("find", s) == 0) {
      scanf("%d", &key);
      if(find(key) != NIL){
    printf("yes\n");
      }
      else{
    printf("no\n");
      }
    }
    else if(strcmp("delete", s) == 0) {
      scanf("%d", &key);
      delete(find(key));
    }
  }
  return 0;
}
  
void inOrder(struct node *T)
{
  if(T != NIL) {
    if(T->left != NIL)
      inOrder(T->left);
    printf(" %d", T->key);
    if(T->right != NIL)
      inOrder(T->right);
  }
}
  
void preOrder(struct node *T)
{
  printf(" %d", T->key);
  if(T != NIL) {
    if(T->left != NIL)
      preOrder(T->left);
    if(T->right != NIL)
      preOrder(T->right);
  }
}
  
void insert(int key)
{
  struct node *y = NIL;
  struct node *x = root;
  struct node *z;
  
  z = (struct node *)malloc(sizeof(struct node));
  z->key = key;
  z->left = NIL;
  z->right = NIL;
  
  while(x != NIL) {
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
  
struct node *find(int key)
{
  struct node *x = root;
  while((x != NIL) && (key != x->key)) {
    if(key < x->key){
      x = x->left;
    }
    else{
      x = x->right;
    }
  }
  return x;
}
  
struct node *min(struct node *x)
{
  while(!(x->left == NIL)){
    x = x->left;
  }
  return x;
}
  
struct node *successor(struct node *x)
{
  if(!(x->right == NIL)){
    return min(x->right);
  }
 
  struct node *y = x->parent;
 
  while((y != NIL) && (x == y->right)) {
    x = y;
    y = y->parent;
  }
  return y;
}
  
void delete(struct node *z)
{
  struct node *y;
  struct node *x;
  
  if((z->left == NIL) || (z->right == NIL)){
    y = z;
  }
  else{
    y = successor(z);
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
  else {
    if(y == y->parent->left){
      y->parent->left = x;
    }
    else{
      y->parent->right = x;
    }
  }
    
  if(y != z){
    z->key = y->key;
  }
  free(y);
}