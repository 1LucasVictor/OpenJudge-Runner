#include <stdio.h>
#include <stdlib.h>
#define NIL NULL
   
struct node{
  struct node *l;
  struct node *r;
  struct node *p;
  int key;
};
 
typedef struct node * Node;
 
Node root;
 
void insert(int);
Node Search(Node ,int );
void Preorder(Node );
void Inorder(Node );
 
main()
{
  int n, i, a;
  char str[20];
  Node s;
  scanf("%d",&n);
   
  for(i=0; i<n; i++){
    scanf("%s",str);
    if(str[0]=='i'){
      scanf("%d", &a);
      insert(a);
    }
    else if(str[0]=='f'){
      scanf("%d", &a);
      s = Search(root,a);
      if(s!= NIL ) {printf("yes\n");}
      else {printf("no\n");}
    }
    else if (str[0]=='p'){
      Inorder(root);
      printf("\n"); 
      Preorder(root);
      printf("\n");
    }
  }
  return 0;
}
 
 
void insert(int k)
{
  Node b=NIL;
  Node a=root;
  Node c;
   
  c = malloc(sizeof(struct node));
  c->key=k;
  c->l=NIL;
  c->r=NIL;
   
  while(a!=NIL){
    b=a;    
    if(c->key<a->key) a=a->l;
    else a=a->r;
  }
  c->p=b;
   
  if(b==NIL) root=c;
  else if(c->key<b->key) b->l=c;
  else b->r=c;
}
 
 
Node Search(Node t,int k)
{
  if(t==NIL || k==t->key) return t;
  if(k<t->key) return Search(t->l,k);
  else return Search(t->r,k);
}
 
 
void Preorder(Node t)
{
  printf(" %d",t->key);
  if(t!=NIL){
    if(t->l!=NIL) Preorder(t->l);
    if(t->r!=NIL) Preorder(t->r);
  }
}
   
 
void Inorder(Node t)
{  
  if(t!=NIL){
    if(t->l != NIL){
      Inorder(t->l);
    }
    printf(" %d", t->key);   
    if(t->r!=NIL){
      Inorder(t->r);
    }
  }
}