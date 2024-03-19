#include<stdio.h>
#include<stdlib.h>

#define NIL NULL

struct node {
  struct node *p;
  struct node *l;
  struct node *r;
  int key;
};

typedef struct node * Node;
Node root;

void insert(int);
void inorder(Node);
void preorder(Node);

int main(){
  int m,k,i;
  char str[10];

  scanf("%d",&m);

  for(i = 0; i < m; i++){
    scanf("%s",str);

    if(str[0] == 'i') {
      scanf("%d",&k);
      insert(k);
    }
    else if(str[0] == 'p') {
      inorder(root);
      printf("\n");
      preorder(root);
      printf("\n");
    }
  }
  return 0;
}

void insert(int z){
   Node x,y,a;

  y = NIL;
  x = root;
  a = (Node)malloc(sizeof(struct node));

  a->key = z;
  a->l = NIL;
  a->r = NIL;

  while(x != NIL){
    y = x;
    if(a->key < x->key) x = x->l;
    else x = x->r;
  }
  a->p = y;

  if( y == NIL) root = a;
  else if(a->key < y->key) y->l = a;
  else y->r = a;
  
}

void inorder(Node root){
  if(root == NIL) return;
  inorder(root->l);
  printf(" %d",root->key);
  inorder(root->r);
}

void preorder(Node root){
  if(root == NIL){
    return;}
  printf(" %d",root->key);
  preorder(root->l);
  preorder(root->r);
}