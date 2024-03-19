#include<stdio.h>
#include<stdlib.h>

struct node{
  int key;
  struct node *p;
  struct node *l;
  struct node *r;
};

typedef struct node *Node;

Node r,NIL;


void insert(int k){
  Node y = NIL;
  Node x = r;

  Node z = (Node)malloc(sizeof(struct node));
  z->key = k;
  z->l = NIL;
  z->r = NIL;

  while(x != NIL){
    y = x;
    if(z->key < x->key){
      x = x->l;
    }else{
      x = x->r;
    }
  }
  z->p = y;
  if(y == NIL){
    r = z;
  }else if(z->key < y->key){
    y->l = z;
  }else{
    y->r = z;
  }
}

void inorder(Node u){
  if(u == NIL){
    return;
  }
  inorder(u->l);
  printf(" %d",u->key);
  inorder(u->r);
}

void preorder(Node u){
  if(u == NIL){
    return;
  }
  printf(" %d",u->key);
  preorder(u->l);
  preorder(u->r);
}

void print(){
  inorder(r);
  printf("\n");
  preorder(r);
  printf("\n");
}

int main(){
  int n,i,j,z;
  char s[10];

  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%s%d",s,&z);
    if(s[0] == 'i'){
      insert(z);
    }else{
      print();
    }
  }

  return 0;
}
