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
 
Node find(Node a,int b){
  if (a==NIL || b==a->key) return a;
  if(b < a->key) return find(a->l,b);
  else return find(a->r,b);
}
 
int main(){
  int a,b,i;
  char com[20];
 
  scanf("%d",&a);
 
  for(i=0;i<a;i++){
    scanf("%s",com);
 
  if(com[0]=='i'){
    scanf("%d",&b);
    insert(b);
  }
  else if(com[0]=='p'){
    inorder(root);
    printf("\n");
    preorder(root);
    printf("\n");
  }
  else if(com[0]=='f'){
    scanf("%d",&b);
    Node s=find(root,b);
    if(s!=NIL) printf("yes\n");
    else printf("no\n");
  }
  }
  return 0;
}

