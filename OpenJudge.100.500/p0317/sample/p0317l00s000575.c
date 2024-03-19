#include<stdio.h>
#include<stdlib.h>

struct node{
  struct node *r;
  struct node *l;
  struct node *p;
  int key;
};

typedef struct node *Node;
#define NIL NULL

Node root;

Node find(Node u,int k){
  while(u != NIL && k != u->key){
    if(k < u->key)u = u->l;
    else u = u->r;
  }
  return u;
}

void insert(int k){
  Node y = NIL;
  Node x = root;
  Node z;

  z = malloc(sizeof(struct node));
  z->key = k;
  z->r = NIL;
  z->l = NIL;

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
    root = z;
  }else{
    if(z ->key < y->key){
      y->l = z;
      
    }else{
      y->r = z;
    }
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
 if(u == NIL)return;
  printf(" %d",u->key);
  preorder(u->l);
  preorder(u->r);
}

int main(){
  int n, i, x;
  char com[20];
  scanf("%d", &n);

  for ( i = 0; i < n; i++ ){
    scanf("%s", com);

   if ( com[0] == 'f' ){
      scanf("%d", &x);
      Node t = find(root, x);
      if ( t != NIL ) printf("yes\n");
      else printf("no\n");
    } else if ( com[0] == 'i' ){
      scanf("%d", &x);
      insert(x);
    } else if ( com[0] == 'p' ){
      inorder(root);
      printf("\n");
      preorder(root);
      printf("\n");
      
    }
  }
  return 0;
}

