#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node {int key;  struct node *right,*left,*pr;} node;
node *root,*NIL;

node * find(node *u,int k){
  while(u != NIL && k != u->key)//uがNILまたはkeyが見つかったら抜ける。//
  { if(k < u->key) u = u->left;
    else u = u->right;
  }
  return u;
}

void insert(int k){
  node *y = NIL,*x = root,*z;
  z = (node *)malloc(sizeof(node));
  z->key = k; z->left = z->right = NIL;
  while(x != NIL){
    y = x;
    if(z->key < x->key) x = x->left;
    else x = x->right;
  }
  z->pr = y;
  if(y == NIL) root = z;
  else{
    if(z->key < y->key) y->left = z;
    else y->right = z;
  }
}
//中間順巡回//
void inP(node *u){
  if(u == NIL) return;
  inP(u->left);
  printf(" %d",u->key);
  inP(u->right);
}
//先行準巡回//
void preP(node *u){
  if(u == NIL) return;
  printf(" %d",u->key);
  preP(u->left);
  preP(u->right);
}

int main(){
  int n,i,key;
  node *t;
  char cmd[10];

  scanf("%d",&n);

  for(i=0;i<n;i++){
    scanf("%s",cmd);

    if(cmd[0] == 'f'){
      scanf("%d",&key);
      t = find(root,key);
      if(t != NIL) printf("yes\n");
      else printf("no\n");
    }else if(cmd[0] == 'i'){
      scanf("%d",&key);
      insert(key);
    }else if(cmd[0] == 'p'){
      inP(root);
      printf("\n");
      preP(root);
      printf("\n");
    }
  }
  return 0;
}

