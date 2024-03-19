#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct node{
  struct node *right;
  struct node *left;
  struct node *parent;
  int key;
};
typedef struct node Node;

void insert(int);
void inorder(Node*);
void preorder(Node*);
void delete(Node*);
Node * search(Node*,int);
Node * s(Node*);
Node * check(Node*,int);  
Node *NIL,*root;

int main(){
  int N,i,v,n;
  char o[7];
  Node *r;
  scanf("%d",&N);

  for(i=0;i<N;i++){
 
    scanf("%s",o);
    if(o[0]=='i'){
      scanf("%d",&v);
      insert(v);
    }
    else if(o[0]=='f'){
      scanf("%d",&n);
      r=check(root,n);
      if(r!=NIL) printf("yes\n");
      else printf("no\n");
    }
    else if(o[0]=='d'){
      scanf("%d",&n);
      delete(search(root,n));
    }


    else {
      inorder(root);
      printf("\n");
      preorder(root);
      printf("\n");
    }

  }
  return 0;
}

void insert(int k){

  Node *z;
  Node *x;
  Node *y;
  z=(Node *)malloc(sizeof(Node));

  z->key=k;
  z->left=NIL;
  z->right=NIL;
  y=NIL;
  x=root;
 
  while(x!=NIL){
    y=x;
    if( z->key < x->key )x=x->left;
    else x=x->right;
     
  }
  z->parent=y;


  if(y==NIL)root=z;
  else if(z->key < y->key) y->left=z;
  else y->right=z;

}






void inorder(Node *u){

  if(u==NIL)return;
  inorder(u->left);
  printf(" %d",u->key);
  inorder(u->right);
}

void preorder(Node *u){

  if(u==NIL) return;
  printf(" %d",u->key);
  preorder(u->left);
  preorder(u->right);
}

Node * check(Node *u,int n){
  while(1){
 if(u==NIL||n==u->key) break;
    if(n<u->key)u=u->left;
      else u=u->right;

	  	     
	     }
  return u;
}

void delete(Node *a){
  Node *b;
  Node *c;

  if(a->left==NIL||a->right==NIL) b=a;
  else b=s(a);

  if(b->left != NIL){
    c=b->left;
  }else{
    c=b->right;
  }
  if(c!=NIL){
    c->parent=b->parent;
  }

  
  if(b->parent==NIL){
    root=a;
  }else{
    if(b==b->parent->left){
      b->parent->left=c;
    }else{
      b->parent->right=c;
    }
  }
  if(b!=a){
    a->key=b->key;
  }

  free(b);
}

Node * s(Node *a){
  if(a->right!=NIL) {
    Node *z=a->right;
    while(z->left!=NIL) z=z->left;
    return z;
  }
  Node *b=a->parent;
  while(b!=NIL&&a==b->right){
    a=b;
    b=b->parent;
  }
  return b;
}
Node * search(Node *a,int k){
  while(a!=NIL&&k!=a->key){
    if(k<a->key)a=a->left;
    else a=a->right;
  }
  return a;
  
}