#include<stdio.h>
#include<stdlib.h>
#define NIL NULL
struct node{
  struct node *p;
  struct node *r;
  struct node *l;
  int key;
};
typedef struct node * Node;
Node root;
void insert(int v){
  Node y=NIL;
  Node x=root;
  Node c;
  c=malloc(sizeof(struct node));
  c->key=v;
  c->l=NIL;
  c->r=NIL;
  while(x!=NIL){
    y=x;
    if(c->key < x->key) x=x->l;
    else x=x->r;
  }
    c->p=y;
    if(y==NIL) root=c;
    else if(c->key < y->key) y->l=c;
    else y->r=c;
}
 
void inorder(Node w){
  if(w!=NIL){
    inorder(w->l);
    printf(" %d",w->key);
    inorder(w->r);
  }
}
void preorder(Node w){
  if(w!=NIL){
    printf(" %d",w->key);
    preorder(w->l);
    preorder(w->r);
  }
}
 
int main(){
  int i,k,a;
  char com[20];
 
  scanf("%d",&k);
 
  for(i=0;i<k;i++){
    scanf("%s",com);
 
  if(com[0]=='i'){
    scanf("%d",&a);
    insert(a);
  }
  else if(com[0]=='p'){
    inorder(root);
    printf("\n");
    preorder(root);
    printf("\n");
  }
  }
  return 0;
}