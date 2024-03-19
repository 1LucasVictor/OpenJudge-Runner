#include<stdio.h>
#include<stdlib.h>
struct node{
  struct node *r,*l,*p;
  int key;
};
typedef struct node * Node;
#define NIL NULL
Node root;
Node treeMinimum(Node a){
  while(a->l != NIL)a = a->l;
  return a;
}
Node treeMaximum(Node a){
  while(a->r != NIL)a = a->r;
  return a;
}
Node treeSearch(Node a,int b){
  while(a != NIL && b != a->key){
    if(b < a->key)a = a->l;
    else a = a->r;
  }
  return a;
}
Node treeSuccessor(Node a){
  if(a->r != NIL)return treeMinimum(a->r);
  Node b = a->p;
  while(b != NIL && a == b->r){
    a = b;
    b = b->p;
  }
  return b;
}
void treeDelete(Node a){
  Node b,c;
  if(a->l == NIL || a->r == NIL)b = a;
  else b = treeSuccessor(a);
  if(b->l != NIL)c = b->l;
  else c = b->r;
  if(c != NIL)c->p = b->p;
  if(b->p == NIL){
    root = c;
  }
  else {
    if(b == b->p->l)b->p->l = c;
    else b->p->r = c;
  }
  if(b != a){
    a->key = b->key;
  }
  free(b);
}
void insert(int a){
  Node b=NIL,c=root,d;
  d = malloc(sizeof(struct node));
  d->key = a;
  d->l = NIL;
  d->r = NIL;
  while(c != NIL){
    b = c;
    if(d->key < c->key){
      c = c->l;
    }
    else {
      c = c->r;
    }
  }
  d->p = b;
  if(b == NIL){
    root = d;
  }
  else {
    if(d->key < b->key){
      b->l = d;
    }
    else {
      b->r = d;
    }
  }
}
void inorder(Node a){
  if(a == NIL)return;
  inorder(a->l);
  printf(" %d",a->key);
  inorder(a->r);
}
void preorder(Node a){
  if(a == NIL)return;
  printf(" %d",a->key);
  preorder(a->l);
  preorder(a->r);
}
int main(){
  int n,i,x;
  char com[20];
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%s",com);
    if(strcmp(com,"find") == 0){
      scanf("%d",&x);
      Node t =treeSearch(root,x);
      if(strcmp(com,"findMin") == 0){
	Node minn = treeMinimum(t);
	printf("%d\n",minn->key);
      }
      else if(strcmp(com,"findMax") == 0){
	Node maxn = treeMaximum(t);
	printf("%d\n",maxn->key);
      }
      else {
	if(t != NIL)printf("yes\n");
	else printf("no\n");
      }
    }
    else if(com[0] == 'i'){
      scanf("%d",&x);
      insert(x);
    }
    else if(strcmp(com,"print") == 0){
      inorder(root);
      printf("\n");
      preorder(root);
      printf("\n");
    }
    else if(strcmp(com,"delete") == 0){
      scanf("%d",&x);
      treeDelete(treeSearch(root,x));
    }
  }

  return 0;
}

