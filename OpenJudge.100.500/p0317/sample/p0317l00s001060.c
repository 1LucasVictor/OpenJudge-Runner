#include<stdio.h>
#include<stdlib.h>

struct node{
  struct node *right;
  struct node *left;
  struct node *parent;
  int key;
  
};
typedef struct node * Node;
Node root, NIL;
int maxh;
Node treeSearch(Node s, int w){
  while( s!= NIL && w!= s->key ){
    if ( w <s->key )s =s->left;
    else s = s->right;
  }
  return s;
}
void insert(int q){
  int H;
  Node y = NIL;
  Node x = root;
  Node z;
  z = malloc(sizeof(struct node));
  z->key = q;
  z->left = NIL;
  z->right = NIL;

  while( x != NIL ){
    y = x;
    if ( z->key < x->key ){
      x = x->left;
    } else {
      x = x->right;
    }
  }
  z->parent = y;
  if ( y == NIL ){
    root = z;
  } else {
    if (z->key < y->key) {
      y->left = z;
    } else {
      y->right = z;
    }
  }
}
void inorder(Node o){
  if ( o == NIL ) return;
  inorder(o->left);
  printf(" %d", o->key);
  inorder(o->right);
}void preorder(Node t){
  if ( t == NIL ) return;
  printf(" %d", t->key);
  preorder(t->left);
  preorder(t->right);
}
int main(){
  int f, i, l;
  char C[20];
  scanf("%d", &f);
  maxh = 0;
  for (i=0;i<f;i++){
    scanf("%s", C);
    if ( C[0] == 'f' ){
      scanf("%d", &l);
      Node t = treeSearch(root, l);
      if (t!=NIL) printf("yes\n");
      else printf("no\n");
    } else if (C[0] == 'i' ){
      scanf("%d", &l);
      insert(l);
    } else if ( C[0] == 'p' ){
      inorder(root);
      printf("\n");
      preorder(root);
      printf("\n");
    }
  }
  return 0;
}


