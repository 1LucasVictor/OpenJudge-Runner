#include <stdio.h>
#include <stdlib.h>
#define NIL NULL

struct node{
  struct node *p;
  struct node *r;
  struct node *l;
  int key;
};

typedef struct node * binary;

binary root;

binary su(binary);

void insert(int k){
  binary y=NIL;
  binary x=root;
  binary z;

  z=malloc(sizeof(struct node));
  z->key=k;
  z->l=NIL;
  z->r=NIL;

  while(x!=NIL){
    y=x;
    if(z->key<x->key)
      x=x->l;
    else
      x=x->r;
  }

  z->p=y;

  if(y==NIL)
    root=z;
  else if(z->key<y->key)
    y->l=z;
  else
    y->r=z;
}


void inorder(binary p){

  if(p->l!=NIL)
    inorder(p->l);

  printf(" %d",p->key);

  if(p->r!=NIL)
    inorder(p->r);

}
void preorder(binary p){

  printf(" %d",p->key);

  if(p->l!=NIL)
    preorder(p->l);

  if(p->r!=NIL)
    preorder(p->r);

}

binary find(binary t,int k){
  while(t!=NIL&&k!=t->key){
    if(k<t->key)
      t=t->l;
    else
      t=t->r;
  }
  return t;
}


void delete(binary u){
  binary y;
  binary x;
  if(u->l==NIL||u->r==NIL)
    y=u;
  else
    y=su(u);
  if(y->l!=NIL)
    x=y->l;
  else
    x=y->r;
  if(x!=NIL)
    x->p=y->p;
  if(y->p==NIL)
    root=x;
  else if(y==y->p->l)
    y->p->l=x;
  else
    y->p->r=x;
  if(y!=u)
    u->key=y->key;
}

binary su(binary x){
  binary y;
  binary a;
  if(x->r!=NIL){
    while(x->l!=NIL)
      a=x->l;
    return a;
  }
  y=x->p;
  while(y!=NIL&&x==y->r){
    x=y;
    y=y->p;
  }
    return y;
}


int main(){
  int n,i,k;
  char a[10];

  scanf("%d",&n);

  for(i=0;i<n;i++){
    scanf("%s",a);

    if(a[0]=='i'){
      scanf("%d",&k);
      insert(k);
    }
    else if(a[0]=='p'){
      inorder(root);
      printf("\n");
      preorder(root);
      printf("\n");
    }

    else if(a[0]=='f'){
      scanf("%d",&k);
      if(find(root,k)!=NIL)
        printf("yes\n");
      else
        printf("no\n");
    }
    else{
      scanf("%d",&k);
      delete(find(root,k));
    }
  }
  return 0;
}