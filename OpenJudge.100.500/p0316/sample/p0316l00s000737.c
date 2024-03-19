#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node {int key;  struct node *right,*left,*pr;} node;
node *root,*NIL;

node * treemin(node *x){
  while(x->left == NIL) x = x->left;
  return x;
}

node * find(node *u,int k){
  while(u != NIL && k != u->key)//uがNILまたはkeyが見つかったら抜ける。//
  { if(k < u->key) u = u->left;
    else u = u->right;
  }
  return u;
}

node * treesuccessor(node *x){
  node *y = x->pr;
  if(x->right != NIL) return treemin(x->right);
  while(y != NIL && x == y->right){
    x = y;
    y = y->pr;
  }
  return y;
}

void treedelete(node *z){
  node *y; node *x;

  if(z->left == NIL || z->right == NIL) y = z;
  else y = treesuccessor(z);
  if(y->left != NIL) x = y->left;
  else x = y->right;

  if(x != NIL) x->pr = y->pr;
  if(y->pr == NIL) root = x;
  else{
    if(y == y->pr->left) y->pr->left = x;
    else y->pr->right = x;
  }

  if(y != z) z->key = y->key;
  free(y);
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
    }else if(cmd[0] == 'd'){
      scanf("%d",&key);
      treedelete(find(root,key));
    }
  }
  return 0;
}

