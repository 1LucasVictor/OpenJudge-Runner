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
Node find(Node root,int key){
  if(root==NIL||root->key==key)
    return root;
  if(root->key > key)
    return find(root->left,key);
  else
    return find(root->right,key);
} 
Node treeMinimum(Node x){
  while(x->left!=NIL) x=x->left;
  return x;
}
Node treeSuccessor(Node x){
  if(x->right!=NIL) return treeMinimum(x->right);
  Node y = x->parent;
  while(y!=NIL&&x==y->right){
    x=y;
    y=y->parent;
  }
  return 0;
}
Node treeDelete(Node z){
  Node y;
  Node x;
 
  if(z->left==NIL || z->right==NIL) y=z;
  else y = treeSuccessor(z);
   
  if(y->left!=NIL){
    x=y->left;
  }else{
    x=y->right;
  }
  if(x!=NIL){
    x->parent=y->parent;
  }
  if(y->parent==NIL){
    root=x;
  }else{
    if(y==y->parent->left){
      y->parent->left=x;
    }else{
      y->parent->right=x;
    }
  }
  if(y!=z) z->key=y->key;
  free(y);
  return 0;
}
   
 
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
  char s[10];
  scanf("%d", &n);
  for ( i = 0; i < n; i++ ){
    scanf("%s", s);
    if ( s[0] == 'f' ){
      scanf("%d", &x);
     Node t = find(root, x);
      if ( t != NIL ) printf("yes\n");
      else printf("no\n");
    }
    if ( s[0] == 'i' ){
      scanf("%d", &x);
      insert(x);
    } else if ( s[0] == 'p' ){
      inorder(root);
      printf("\n");
      preorder(root);
      printf("\n");
    } else if(s[0] == 'd'){
      scanf("%d",&x);
      treeDelete(find(root,x));
    }
  }
  return 0;
}