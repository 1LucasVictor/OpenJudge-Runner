#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct node{
  int key;
  struct node *p,*left,*right;
}node;
typedef struct node* Node;
void insert(int);
Node find(int);
void delNode(Node);
void inorder(Node);
void preorder(Node);
Node minimum(Node);
Node successor(Node);
Node root,NIL;

int main(){
  int i,m,k;
  char string[8];
  scanf("%d",&m);
  for(i = 0; i < m; i++){
    scanf("%s",string);
   if(strcmp(string,"insert") == 0){
      scanf("%d",&k);
      insert(k);
    }
    else if(strcmp(string,"find") == 0){
      scanf("%d",&k);
      if(NIL == find(k))printf("no\n");
      else printf("yes\n");
    }
    else if(strcmp(string,"print") == 0){
      inorder(root);
      printf("\n");
      preorder(root);
      printf("\n");
    }
    else if(strcmp(string,"delete") == 0){
      scanf("%d",&k);
      delNode(find(k));
    }
  }
  return 0;
}

void insert(int k){
  Node y = NIL;
  Node x = root;
  Node z;

  z = (Node)malloc(sizeof(node));
  z->left = NIL;
  z->right = NIL;
  z->key = k;

  while(x != NIL){
    y = x;
    if(z->key < x->key) x = x->left;
    else x = x->right;
  }
  z->p = y;
  if(y == NIL) root = z;
  else if(z->key < y->key) y->left = z;
  else y->right = z;
}

Node find(int k){
  Node x = root;
  while(x != NIL && x->key != k){
    if(k < x->key) x = x->left;
    else x = x->right;
  }
  return x;
}

void delNode(Node z){
  Node del,x;
  if(z->left == NIL || z->right == NIL) del = z;
  else del = successor(z);

  if(del->left != NIL) x = del->left;
  else x = del->right;

  if(x != NIL) x->p = del->p;

  if(del->p == NIL) root = x;
  else if(del == del->p->left) del->p->left = x;
  else if(del == del->p->right) del->p->right = x;

  if(del != z) z->key = del->key;
}

void inorder(Node r){
  if(r == NIL) return;
  inorder(r->left);
  printf(" %d",r->key);
  inorder(r->right);
}

void preorder(Node r){
  if(r == NIL) return;
  printf(" %d",r->key);
  preorder(r->left);
  preorder(r->right);
}

Node successor(Node x){
  Node y;
  if(x->right != NIL) return minimum(x->right);

  y = x->p;
  while(y != NIL && x == y->right){
    x = y;
    y = y->p;
  }
  return y;
}

Node minimum(Node x){
  while(x->left != NIL) x = x->left;
  return x;
}