#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Node {
  int key;
  struct Node *rig, *lef, *parent;
};

struct Node *root,*NIL;

void insert(int);
void inorder(struct Node *);
void preorder(struct Node *);

int main(){
  int n,i,x;
  char c[10];
  char in[10]="insert";
  char pri[10]="print";

  scanf("%d",&n);

  for(i=0;i<n;i++){
    scanf("%s",c);

    if(strcmp(c,in) == 0) {
      scanf("%d",&x);
      insert(x);
    } else if(strcmp(c,pri) == 0) {
      inorder(root);
      printf("\n");
      preorder(root);
      printf("\n");
    }
  }

  return 0;
}

void insert(int a){
  struct Node *y = NIL;
  struct Node *x = root;
  struct Node *z;

  z = (struct Node *)malloc(sizeof(struct Node));
  z->key = a;
  z->lef = NIL;
  z->rig = NIL;

  while(x != NIL){
    y = x;
    if(z->key < x->key){
      x = x->lef;
    }else {
      x = x->rig;
    }
  }

  z->parent = y;
  if(y == NIL){
    root = z;
  }else {
    if(z->key < y->key){
      y->lef = z;
    }else{
      y->rig = z;
    }
  }
}

void inorder(struct Node *u){
  if(u == NIL) return;
  inorder(u->lef);
  printf(" %d",u->key);
  inorder(u->rig);
}

void preorder(struct Node *u){
  if(u == NIL) return;
  printf(" %d",u->key);
  preorder(u->lef);
  preorder(u->rig);
}

