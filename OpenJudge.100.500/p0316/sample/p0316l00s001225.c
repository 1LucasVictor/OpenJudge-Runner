#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct node{
  struct node *r;
  struct node *l;
  struct node *p;
  int key;
};
typedef struct node * Node;
#define NIL NULL
Node root;
Node min(Node x);
Node max(Node x);
Node search(Node u, int k);
Node successor(Node x);
void delete(Node z){};
void insert(int k);
void inorder(Node u);
void preorder(Node u);
int main(){
  int n,i,x;
  Node t;
  char com[20];;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%s",com);
    if (com[0]=='f'){
      scanf("%d",&x);
       t= search(root,x);
      if(t!=NIL) printf("yes\n");
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
      scanf("%d",&x);
      delete(search(root,x));
    }
  }
  return 0;
}
Node min(Node x){
  while(x->l!=NIL){
    x= x->l;}
  return x;
}
Node max(Node x){
  while(x->r!=NIL){
    x=x->r;
  }
  return x;
}
Node search(Node u,int k){
  while(u!=NIL &&u->key!=k){
    if (k>u->key){
      u=u->r;
    }
    else u=u->l;
  }
  return u;
}
Node successor(Node x){
  Node y;
  if(x->r!=NIL) return min(x->r);
  y=x->p;
  while(y!=NIL && x==y->r){
    x=y;
    y=y->p;
  }
  return x;
}
void insert (int k){
  Node y= NIL;
  Node x=root;
  Node z;
  
  z=malloc(sizeof(struct node));
  z->key=k;
  z->l=NIL;
  z->r=NIL;
  
  while(x!=NIL){
    y=x;
    if(z->key<x->key){
      x=x->l;
    }  else x=x->r;
  }
  z->p=y;
  if(y==NIL) root=z;
  else if(z->key<y->key){
    y->l=z;
  }
  else y->r=z;
}

void inorder(Node u){
  if(u==NIL )return ;
  inorder(u->l);
  printf(" %d",u->key);
  inorder(u->r);
}

void preorder(Node u){
  if(u==NIL)return ;
  printf(" %d",u->key);
  preorder(u->l);
  preorder(u->r);
}

