#include<stdio.h>
#include<stdlib.h>
struct node{
  int key;
  struct node *l, *r, *p;
};
typedef struct node *Node;
Node NIL, root;

void insert(int k){
  Node y=NIL;
  Node x=root;
  Node z;
  z=malloc(sizeof(struct node));
  z->key=k;
  z->l=NIL;
  z->r=NIL;
  while(x!=NIL){
    y=x;
    if(z->key < x->key)x=x->l;
    else x=x->r;
  }
  z->p=y;

  if(y==NIL) root =z;
  else if(z->key < y->key) y->l=z;
  else y->r=z;
}
void inorder(Node u){
  if(u->l!=NIL)inorder(u->l);
  printf(" %d",u->key);
  if(u->r!=NIL)inorder(u->r);
}

void preorder(Node u){
  if(u!=NIL)
    printf(" %d",u->key);
  if(u->l!=NIL)preorder(u->l);
  if(u->r!=NIL)preorder(u->r);
}

int main(){
  int m,i,x;
  char str[20];
  scanf("%d",&m);
  for(i=0;i<m;i++){
    scanf("%s",str);
    if(str[0]=='i'){
      scanf("%d",&x);
      insert(x);
    }
    else if(str[0]=='p'){
      inorder(root);
      printf("\n");
      preorder(root);
      printf("\n");
    }
  }
  return 0;
}