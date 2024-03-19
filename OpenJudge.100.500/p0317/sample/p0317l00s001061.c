#include <stdio.h>
#include <stdlib.h>

struct node{
  struct node *p;
  struct node *l;
  struct node *r;
  int key;
};

typedef struct node *Node;

Node Root = NULL;

void insert(int k){

  Node y = NULL;
  Node x = Root;
  Node new;

  new = malloc(sizeof(struct node));
  new->key = k;
  new->l = NULL;
  new->r = NULL;

  while(x != NULL){
    y = x;
    if(new->key < x->key) x = x->l;
    else x = x->r;
  }

  new->p = y;
  if(y == NULL) Root = new;
  else if(new->key < y->key) y->l = new;
  else y->r = new;
}

void inorder(Node v){
  if(v->l != NULL){
    inorder(v->l);
  }
  printf(" %d",v->key);
  if(v->r != NULL){
    inorder(v->r);
  }
}
void preorder(Node v){
  printf(" %d",v->key);
  if(v->l != NULL){
    preorder(v->l);
  }
  if(v->r != NULL){
    preorder(v->r);
  }
}

Node Find(Node v,int k){
  if(v == NULL || k == v->key) return v;
  else if(k < v->key) return Find(v->l,k);
  else return Find(v->r,k);
}

int main(void){
  int n,i,x;
  char in[10];
  scanf("%d",&n);

  for(i=0;i<n;i++){
    scanf("%s",in);
    if (in[0] == 'f'){
      scanf("%d",&x);
      Node t = Find(Root,x);
      if(t != NULL) printf("yes\n");
      else printf("no\n");
    }
    else if (in[0] == 'i'){
      scanf("%d",&x);
      insert(x);
    }else if(in[0] == 'p'){
      inorder(Root);
      printf("\n");
      preorder(Root);
      printf("\n");
    }

  }
  return 0;
}