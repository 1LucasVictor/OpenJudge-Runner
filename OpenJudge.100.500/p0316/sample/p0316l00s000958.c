#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct node{
  struct node *R;
  struct node *L;
  struct node *P;
  int key;
};
typedef struct node Node;
Node *NIL;

Node *root;

void insert(int k){
  Node *y = NIL;
  Node *x = root;
  Node *z;

  z=(Node *)malloc(sizeof(Node));
  z->key=k;
  z->L=NIL;
  z->R=NIL;

  while(x!=NIL){
    y=x;
    if(z->key < x->key){
      x=x->L;
    }
    else{
      x=x->R;
    }
  }
  z->P=y;

  if(y==NIL){
    root=z;
  }
  else if(z->key < y->key){
      y->L=z;
    }
  else{
      y->R=z;
    }
}

void inorder(Node *u);
void preorder(Node *u);

int main(){
  int n, i, x;
  char com[20];
  scanf("%d", &n);

  for ( i = 0; i < n; i++ ){
    scanf("%s", com);
    if ( com[0] == 'i' ){
      scanf("%d", &x);
      insert(x);
    }
    else if ( com[0] == 'p' ){
      inorder(root);
      printf("\n");
      preorder(root);
      printf("\n");
    }
  }

  return 0;
}
void inorder(Node *u){
  if (u==NIL)return ;
  inorder(u->L);
  printf(" %d",u->key);
  inorder(u->R);
}
void preorder(Node *u){
  if(u==NIL)return;
  printf(" %d",u->key);
  preorder(u->L);
  preorder(u->R);
}
