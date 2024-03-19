#include <stdio.h>
#include <stdlib.h>
#define NIL NULL

struct node{
  int key;
  struct node *r;
  struct node *l;
  struct node *p;
};
typedef struct node *Node;

Node root;

Node treeMinimum(Node x){
  while(x->l != NIL)x=x->l;
  return x;
}

Node find(Node u, int k){
  while(u!=NIL && k!=u->key){
    if(k < u->key)u=u->l;
    else u=u->r;
  }
  return u;
}

Node treeSuccessor(Node x){
  Node y;
  if(x->r!=NIL)return treeMinimum(x->r);
  y=x->p;
  while(y!=NIL && x == y->r){
    x=y;
    y=y->p;
  }
  return y;
}

void treeDelete(Node z){
  Node x;
  Node y;
  
  if(z->l==NIL || z->r==NIL)y=z;
  else y=treeSuccessor(z);
  
  if(y->l!=NIL)x=y->l;
  else x=y->r;

  if(x!=NIL)x->p=y->p;
  
  if(y->p==NIL)root=x;
  else if(y==y->p->r)y->p->r=x;
  else y->p->l=x;

if(y!=z)z->key=y->key;
 
free(y);
}

void insert(int k){
  Node y=NIL;
  Node x=root;
  Node z;
 
  z = malloc(sizeof(struct node));
  z->key=k;
  z->r=NIL;
  z->l=NIL;
  while(x!=NIL){
    y=x;
    if(z->key < x->key) x=x->l;
    else x=x->r;
  }
  z->p=y;
  if(y==NIL)root=z;
  else if(z->key < y->key) y->l=z;
  else y->r=z;
}

void inorder(Node u){
  if(u!=NIL){
    if(u->l!=NIL)inorder(u->l);
    printf(" %d",u->key);
    if(u->r!=NIL)inorder(u->r);
  }
}

void preorder(Node u){
  if(u!=NIL){
    printf(" %d",u->key);
    if(u->l != NIL)preorder(u->l);
    if(u->r != NIL) preorder(u->r);
  }
}

int main(){
  int n, i, x;
  char com[8];
  
  scanf("%d", &n);
  for(i=0; i<n; i++){
    scanf("%s", com);
    if(com[0]=='f'){
      scanf("%d",&x);
      Node t=find(root, x);
      if(t!=NIL)printf("yes\n");
      else printf("no\n");
    }
    else if(com[0]=='i'){
      scanf("%d",&x);
      insert(x);
    }
    else if(com[0]=='p'){
      inorder(root);
      printf("\n");
      preorder(root);
      printf("\n");
    }
    else if(com[0]=='d'){
      scanf("%d", &x);
      treeDelete(find(root,x));
    }
  }
  return 0;
}