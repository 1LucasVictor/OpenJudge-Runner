#include<stdlib.h>
struct node{
  struct node *right;
  struct node *left;
  struct node *parent;
  int key;
};
typedef struct node * Node;
Node root, NIL;
Node treeSearch(Node a, int b);
void insert(int);
void inorder(Node);
void preorder(Node);
int main(){
  int n, i, m;
  char c[20];
  scanf("%d", &n);
  for ( i = 0; i < n; i++ ){
    scanf("%s", c);
    if ( c[0] == 'f' ){
      scanf("%d", &m);
      Node t = treeSearch(root, m);
      if ( t != NIL ) printf("yes\n");
      else printf("no\n");
    } else if ( c[0] == 'i' ){
      scanf("%d", &m);
      insert(m);
    } else if ( c[0] == 'p' ){
      inorder(root);
      printf("\n");
      preorder(root);
      printf("\n");
    }
  }
  return 0;
}
Node treeSearch(Node a, int b){
  while( a != NIL && b != a->key ){
    if ( b < a->key ) a = a->left;
    else a = a->right;
  }
  return a;
}
void insert(int k){
  int H;
  Node y = NIL;
  Node x = root;
  Node z;

  z = malloc(sizeof(struct node));
  z->key = k;
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
void inorder(Node a){
  if ( a == NIL ) return;
  inorder(a->left);
  printf(" %d", a->key);
  inorder(a->right);
}
void preorder(Node a){
  if ( a == NIL ) return;
  printf(" %d", a->key);
  preorder(a->left);
  preorder(a->right);
}

