#include<stdio.h>
#include<stdlib.h>

struct node{
  struct node *migi;
  struct node *hidari;
  struct node *oya;
  int key;
};
typedef struct node * Node;

Node root,NIL;

Node treeSearch(Node u, int k){
  while( u != NIL && k != u->key ){
    if ( k < u->key )
      u = u->hidari;
    else u = u->migi;
  }
  return u;
}

void insert(int k){
  Node y = NIL;
  Node x = root;
  Node z;

  z = malloc(sizeof(struct node));
  z->key = k;
  z->hidari = NIL;
  z->migi = NIL;

  while( x != NIL ){
    y = x;
    if ( z->key < x->key )
      x = x->hidari;
    else
      x = x->migi;
  }

  z->oya = y;

  if ( y == NIL )
    root = z;
  else {
    if (z->key < y->key)
      y->hidari = z;
    else
      y->migi = z;
  }
}

void sounyuu(Node u){
  if ( u == NIL ) return;
  sounyuu(u->hidari);
  printf(" %d", u->key);
  sounyuu(u->migi);
}

void kensaku(Node u){
  if ( u == NIL ) return;
  printf(" %d", u->key);
  kensaku(u->hidari);
  kensaku(u->migi);
}

int main(){
  int n, i, x;
  char com[20];
  scanf("%d", &n);

  for ( i=0 ; i<n ; i++ ){
    scanf("%s", com);

    if ( com[0] == 'f' ){
      scanf("%d", &x);
      Node t = treeSearch(root, x);

      if ( t != NIL )
	printf("yes\n");
      else printf("no\n");
    }

    else if ( com[0] == 'i' ){
      scanf("%d", &x);
      insert(x);
    }

    else if ( com[0] == 'p' ){
      sounyuu(root);
      printf("\n");
      kensaku(root);
      printf("\n");
    }
  }
  return 0;
}

