#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node{
  struct node *mi;
  struct node *hi;
  struct node *oya;
  int key;
};
typedef struct node * Node;
int max;

Node root,NIL;
Node treeSearch(Node u, int k){
  while( u != NIL && k != u ->key){
    if(k < u->key)u = u->hi;
    else u = u->mi;
  }
  return u;
}
void insert(int k){
  Node y = NIL;
  Node x = root;
  Node z;
  int H;
  z = malloc(sizeof(struct node));
  z->key = k;
  z->hi = NIL;
  z->mi = NIL;

  while(x != NIL){
    y = x;
    if(z->key < x->key){
      x = x->hi;
    }
    else{
      x = x->mi;
    }
  }
  z->oya = y;

  if( y == NIL){
    root = z;
  }
  else{
    if(z->key < y->key){
      y->hi = z;
    }
    else{
      y->mi = z;
    }
  }
}
void inorder( Node u){
  if( u == NIL) return;
  inorder(u->hi);
  printf(" %d",u->key);
  inorder(u->mi);
}
void preorder( Node u){
  if(u == NIL)return;
  printf(" %d",u->key);
  preorder(u->hi);
  preorder(u->mi);
 }


int main(){
  int n, i, a;
  char A[20];
  scanf("%d", &n);
  max = 0;
   for ( i = 0; i < n; i++ ){
    scanf("%s",A);
    if ( A[0] == 'f' ){
      scanf("%d", &a);
      Node t = treeSearch(root,a);
      if ( t != NIL ) printf("yes\n");
      else printf("no\n");
    } else if ( A[0] == 'i' ){
      scanf("%d", &a);
      insert(a);
    } else if (A[0] == 'p' ){
      inorder(root);
      printf("\n");
      preorder(root);
      printf("\n");
    }
   }

  return 0;
}

