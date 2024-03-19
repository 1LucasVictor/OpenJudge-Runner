#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define NIL NULL

struct node{
  struct node *right;
  struct node *left;
  struct node *parent;
  int key;
};
typedef struct node * Node;

Node root;
void insert(int);
void inorder(Node );
void preorder(Node );

int main(){
  int n, i, x;
  char s[10];
  scanf("%d",&n);

  for (i = 0;i < n;i++){
    scanf("%s",s);
    if (s[0] == 'i'){
      scanf("%d",&x);
      insert(x);
    } else if (s[0] == 'p' ){
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
  z = malloc(sizeof(struct node));
  z->key = k;
  z->left = NIL;
  z->right = NIL;
  
  while(x != NIL){
    y=x;
    if(z->key < x->key){
      x = x->left;
    }
    else x = x->right; 
  }
  z->parent = y;
  if(y == NIL)root = z;
  else if(z->key < y->key)y->left = z;
  else y->right = z;
}

void inorder(Node r){
  if(r == NIL){
    return;
      }
  inorder(r->left);
  printf(" %d",r->key);
  inorder(r->right);
}
void preorder(Node r){
  if(r == NIL){
    return;
      }
  printf(" %d",r->key);
  preorder(r->left);
  preorder(r->right);
}