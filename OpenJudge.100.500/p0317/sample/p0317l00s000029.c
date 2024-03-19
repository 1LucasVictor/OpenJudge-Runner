#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Node{
  struct Node *right;
  struct Node *left;
  struct Node *parent;
  int key;
};
typedef struct Node *n;
n root,NIL;

void insert(int);
void inorder(n);
void preorder(n);
n find(n,int);

int main(){
  int num, i, x;
  char a[20];

  scanf("%d", &num);

  for ( i = 0; i < num; i++ ){
    scanf("%s", a);

    if ( a[0] == 'f' ){
      scanf("%d", &x);
      n t = find(root,x);
      if ( t != NIL ) printf("yes\n");
      else printf("no\n");
    }
    else if ( a[0] == 'i'){
      scanf("%d", &x);
      insert(x);
    }
    else if ( a[0] == 'p'){
      inorder(root);
      printf("\n");
      preorder(root);
      printf("\n");
    }
  }
  
  return 0;
}

n find(n u,int k){
  while(u!=NIL && k!=u->key){
    if(k < u->key) u = u->left;
    else u = u->right;
  }
  return u;
}

void insert(int k){
  n y = NIL;
  n x = root;
  n z;

  z = malloc(sizeof(struct Node));
  z->key = k;
  z->left = NIL;
  z->right = NIL;

  while(x != NIL){
    y = x;
    if(z->key < x->key) x = x->left;
    else x = x->right;
  }

  z->parent = y;
  if(y == NIL) root = z;
  else{
    if(z->key < y->key) y->left = z;
    else y->right = z;
  }
}

void inorder(n u){
  if(u==NIL) return;
  inorder(u->left);
  printf(" %d",u->key);
  inorder(u->right);
}

void preorder(n u){
  if(u==NIL) return;
  printf(" %d",u->key);
  preorder(u->left);
  preorder(u->right);
}


