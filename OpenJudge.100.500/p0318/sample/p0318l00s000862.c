#include <stdio.h>
#include <stdlib.h>

typedef struct node{
  struct node *left;
  struct node *right;
  struct node *parent;
  int key;
}Node;
typedef Node *NodePointer;

NodePointer createNode(void);
void inorder(NodePointer);
void preorder(NodePointer);
void insert(int);
NodePointer find(int, NodePointer);
void delete(NodePointer);
NodePointer minimum(NodePointer);
NodePointer successor(NodePointer);
NodePointer root = NULL;

int main(){

  int i, n, x;
  char str[10];

  scanf("%d", &n);
  for(i = 0; i < n; i++){
    scanf("%s", str);
    if(str[0] == 'i'){
      scanf("%d", &x);
      insert(x);
    }else if(str[0] == 'p'){
      inorder(root);
      printf("\n");
      preorder(root);
      printf("\n");
    }else if(str[0] == 'f'){
      scanf("%d", &x);
      if(find( x, root) == NULL){
	printf("no\n");
      }else{
	printf("yes\n");
      }
    }else if(str[0] == 'd'){
      scanf("%d", &x);
      delete(find(x, root));
    }else{
      continue;
    }
  }
  return 0;
}

NodePointer createNode(void){

  NodePointer tree = malloc(sizeof(Node));
  tree->left = NULL;
  tree->right = NULL;
  tree->parent = NULL;
  tree->key = 0;

  return tree;
}

void insert(int key){

  NodePointer z = createNode();
  NodePointer x = root;
  NodePointer y = NULL;
  z->key = key;
  while(x != NULL){
    y = x;

    if(z->key < x->key){
      x = x->left;
    }else{
      x = x->right;
    }
  }

  z->parent = y;

  if(y == NULL){
    root = z;
  }else if(z->key < y->key){
    y->left = z;
  }else{
    y->right = z;
  }
}

void inorder(NodePointer T){

  if(T != NULL){
    inorder(T->left);
    printf(" %d",T->key);
    inorder(T->right);
  }
}

void preorder(NodePointer T){

  if(T != NULL){
  printf(" %d", T->key);
    preorder(T->left);
    preorder(T->right);
  }
}

NodePointer find(int k, NodePointer T){

  while(T != NULL && T->key != k){
    if(T->key > k){
      T = T->left;
    }else{
      T = T->right;
    }
  }
  return T;
}

void  delete(NodePointer T){

  NodePointer x;
  NodePointer y;

  if(T->left == NULL || T->right == NULL){ // 子がいる時
    x = T;
  }else{ // 子がいない時
    x = successor(T);
  }
  if(x->left != NULL){
    y = x->left;
  }else{
    y = x->right;
  }

  if(y != NULL){ // 子の子があるとき
    y->parent = x->parent;
  }

  if(x->parent == NULL){
    root = y;
  }else if(x == x->parent->left){
    x->parent->left = y;
  }else{
    x->parent->right = y;
  }
  if(x != T){
    T->key = x->key;
  }
}

NodePointer minimum(NodePointer T){
  while(T->left != NULL){
    T = T->left;
  }
  return T;
}

NodePointer successor(NodePointer T){
  NodePointer x;
  if(T->right != NULL){
    return minimum(T->right);
  }
  x = T->parent;

  while(x != NULL && T == x->right){
    T = x;
    x = x->parent;
  }
  return x;
}