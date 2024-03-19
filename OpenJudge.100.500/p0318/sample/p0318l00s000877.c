#include<stdio.h>
#include<stdlib.h>
#define NIL NULL

struct node{
  int key;
  struct node *r;
  struct node *l;
  struct node *p;
};

typedef struct node * Node;

Node root;

void insert(int v){
  Node y=NIL;
  Node x=root;
  Node z;

  z=malloc(sizeof(struct node));
  z->key=v;
  z->l=NIL;
  z->r=NIL;

  while(x!=NIL){
    y=x;

    if(z->key < x->key) x=x->l;
    else x=x->r;
  }

    z->p=y;

    if(y==NIL) root=z;
    else if(z->key < y->key) y->l=z;
    else y->r=z;
}

void inorder(Node u){
  if(u!=NIL){
    inorder(u->l);
    printf(" %d",u->key);
    inorder(u->r);
  }
}

void preorder(Node u){
  if(u!=NIL){
    printf(" %d",u->key);
    preorder(u->l);
    preorder(u->r);
  }
}

Node find(Node a,int k){
  if (a==NIL || k==a->key) return a;
  if(k < a->key) return find(a->l,k);
  else return find(a->r,k);
}

Node Min(Node a){
  while(a->l!=NIL){
    a=a->l;
  }
  return a;
}

Node suc(Node a){
  if(a->r!=NIL) return Min(a->r);
  Node y=a->p;
  while(y!=NIL && a==y->r){
    a=y;
    y=y->p;
  }
  return y;
}

void delete(Node a){
  Node y;
  Node x;

  if(a->l==NIL || a->r==NIL) y=a;
  else y=suc(a);

  if(y->l!=NIL) x=y->l;
  else x=y->r;

  if (x!=NIL) x->p=y->p;

  if(y->p==NIL) root=x;
  else if(y==y->p->l) y->p->l=x;
  else y->p->r=x;

  if(y!=a) a->key=y->key;
}


int main(){
  int n,i,x;
  char com[20];

  scanf("%d",&n);

  for(i=0;i<n;i++){
    scanf("%s",com);

  if(com[0]=='i'){
    scanf("%d",&x);
    insert(x);
  }
  else if(com[0]=='p'){
    inorder(root);
    printf("\n");
    preorder(root);
    printf("\n");
  }
  else if(com[0]=='f'){
    scanf("%d",&x);
    Node s=find(root,x);
    if(s!=NIL) printf("yes\n");
    else printf("no\n");
  }
  else if(com[0]=='d'){
    scanf("%d",&x);
    delete(find(root,x));
  }
  }
  return 0;
}