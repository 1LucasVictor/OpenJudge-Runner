#include <stdio.h>
#include <stdlib.h>

typedef struct node{
  int key;
  struct node *parent,*left,*right;
}Node;

Node *root,*NIL;

void Insert(int);
void Inorder(Node *);
void Preorder(Node *);
Node * Search(Node *,int);

int main(){
  int m,i,k;
  char com[20];
  Node *r;

  scanf("%d",&m);

  for(i=0; i<m; i++){
    scanf("%s",com);
    if(com[0] == 'i'){
      scanf("%d",&k);
      Insert(k);
    }
    else if(com[0] == 'p'){
      Inorder(root);
      printf("\n");
      Preorder(root);
      printf("\n");
    }
    else if(com[0] == 'f'){
      scanf("%d",&k);
      r=Search(root,k);
      if(r != NIL)
	printf("yes\n");
      else
	printf("no\n");
    }
  }

    return 0;
}
  
void Insert(int k){
  Node *y = NIL;            
  Node *x = root;
  Node *z;

  z = (Node *)malloc(sizeof(Node));
  z->key = k;
  z->left = NIL;
  z->right = NIL;

  while(x != NIL){
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

void Inorder(Node *r){
  if(r != NIL){
    Inorder(r->left);
    printf(" %d",r->key);
    Inorder(r->right);
  }
}

void Preorder(Node *r){
  if(r != NIL){
    printf(" %d",r->key);
    Preorder(r->left);
    Preorder(r->right);
  }
}
  
Node * Search(Node *r, int k){
  while(r != NIL && k != r->key)
    if(k < r->key)
      r = r->left;
    else
      r = r->right;

  return r;
}