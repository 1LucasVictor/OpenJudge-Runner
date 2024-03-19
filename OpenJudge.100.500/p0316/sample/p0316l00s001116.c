#include <stdio.h>
#include <stdlib.h>

struct node{
  struct node *right;
  struct node *left;
  struct node *parent;
  int key;
};

typedef struct node *Node;
#define N NULL

Node ro;

Node treeMi(Node a){
  while(a->left!=N)
    a=a->left;
  return a;
}

Node treeMa(Node a){
  while(a->right!=N){
    a=a->right;
  }
  return a;
}

Node treeS(Node w, int r){
  while(w!=N&&r!=w->key){
    if(r<w->key)w=w->left;
    else w=w->right;
  }
  return w;
}

Node treeM(Node a){
  Node b;
  if(a->right!=N)
    return treeMi(a->right);
  b=a->parent;
  while(b!=N&&a==b->right){
    a=b;
    b=b->parent;
  }
  return b;
}

void treeN(Node c){
  Node a;
  Node b;
  if(c->left==N||c->right==N)
    b=c;
  else
    b=treeM(c);

  if(b->left!=N){
    a=b->left;
  }
  else{
    a=b->right;
  }
  if(a!=N){
    a->parent=b->parent;
  }
  if(b->parent==N){
    ro=a;
  }
  else{
    if(b==b->parent->left){
      b->parent->left=a;
    }
    else{
      b->parent->right=a;
    }
  }
  if(b!=c){
    c->key=b->key;
  }
  free(b);
}

void insert(int k){
  Node a = ro;
  Node b;
  Node c;

  c = malloc(sizeof(struct node));
  c->key = k;
  c->left = N;
  c->right = N;

  while(a!=N){
    b=a;
    if(c->key < a->key){
      a=a->left;
    }
    else{
      a=a->right;
    }
  }
  c->parent=b;
  if(b==N){
    ro=c;
  }
  else{
    if(c->key < b->key){
      b->left=c;
    }
    else{
      b->right=c;
    }
  }
}

void inorder(Node n){
  if(n==N)
    return;
  inorder(n->left);
  printf(" %d",n->key);
  inorder(n->right);
}

void outorder(Node n){
  if(n==N)
    return;
  printf(" %d",n->key);
  outorder(n->left);
  outorder(n->right);
}

int main(){
  int i,n,a;
  char c[20];
  scanf("%d",&n);

  for(i=0;i<n;i++){
    scanf("%s",c);
    if(c[0]=='f'){
      scanf("%d",&a);
      Node r = treeS(ro,a);
      if(r!=N)
	printf("yes\n");
      else printf("no\n");
    }
    else if(c[0] ==  'i'){
      scanf("%d",&a);
      insert(a);
    }
    else if(c[0] ==  'p'){
      inorder(ro);
      printf("\n");
      outorder(ro);
      printf("\n");
    }
    else if(c[0]=='d'){
      scanf("%d",&a);
      treeN(treeS(ro,a));
    }
  }
  return 0;
}

