#include<stdio.h>
#include<stdlib.h>
#define NIL NULL
struct node{
  struct node *right;
  struct node *left;
  struct node *parent;
  int key;
};
typedef struct node * Node;
 
Node root;
void insert(int key){
   Node y = NIL;
   Node x = root;
   Node z;
    
   z =malloc(sizeof(struct node));
   z->key = key;
   z->left = NIL;
   z->right = NIL;
   while(x!=NIL){
     y=x;
     if(z->key < x->key)x=x->left;
     else x=x->right;
   }
   z->parent=y;
   if(y==NIL)root=z;
   else if(z->key <y->key)
   y->left=z;
   else
     y->right=z;
}
 
void inorder(Node root){
  if(root->left!=NIL)
    inorder(root->left);
  printf(" %d",root->key);
  if(root->right!=NIL)
    inorder(root->right);
}
 
void preorder(Node root){
  if(root!=NIL)
    printf(" %d",root->key);
  if(root->left!=NIL)
    preorder(root->left);
  if(root->right!=NIL)
    preorder(root->right);
}
 
int main(){
  int n, i, x;
  char com[10];
  scanf("%d", &n);
  for ( i = 0; i < n; i++ ){
    scanf("%s", com);
    if ( com[0] == 'i' ){
      scanf("%d", &x);
      insert(x);
    } else if ( com[0] == 'p' ){
      inorder(root);
      printf("\n");
      preorder(root);
      printf("\n");
    }
  }
  return 0;
}