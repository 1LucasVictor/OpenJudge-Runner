#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Node{
  int key;
 struct Node *r,*l,*p;
};

struct Node *root,*NIL;

void insert(int);
void inorder(struct Node *);
void preorder(struct Node *);

int main(){
  int n,i,x;
  char com[100];

  scanf("%d",&n);

  for(i=0;i<n;i++){
    scanf("%s",com);
    if(com[0] =='i'){
      scanf("%d",&x);
      insert(x);
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

void insert(int k){
  struct Node *y=NIL;
  struct Node *x=root;
  struct Node *z; 

  z=malloc(sizeof(struct Node));
  z->key=k;
  z->l=NIL;
  z->r=NIL;

  while(x!=NIL){
    y=x;
    if( z->key < x->key){
      x=x->l;
    }
    else{
 x=x->r;
    }
  }

  z->p=y;
  if(y==NIL){
    root=z;
  }
  else{
    if( z->key<y->key){
      y->l=z;
    }
    else{
      y->r=z;
    }
  }
}

void inorder(struct Node *u){
  if(u==NIL) return;
  inorder(u->l);
  printf(" %d",u->key);
  inorder(u->r);
}

void preorder(struct Node *u){
 if(u==NIL) return;
 printf(" %d",u->key);
 preorder(u->l);
 preorder(u->r);
}

