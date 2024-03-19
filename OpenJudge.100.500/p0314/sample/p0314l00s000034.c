#include <stdio.h>
#include <stdlib.h>

typedef struct {
  int parent;
  int left;
  int right;
} node;


void initNode( node* a, int length) {
  int i;

  for( i=0; i<length; i++) {
    a[i].parent = -1;
  }

}


void scanNode( node* a, int length) {
  int i, id;

  for( i=0; i<length; i++) {
    scanf("%d", &id);

    scanf("%d%d", &a[id].left, &a[id].right);
    if( a[id].left != -1) {
      a[ a[id].left ].parent = id; //左の子の親はid
    }
    if( a[id].right != -1) {
      a[ a[id].right ].parent = id; //右の子の親はid
    }
  }

}


int searchRoot( node *a, int length) {
  int i;

  for( i=0; i<length; i++) {
    if( a[i].parent == -1 ) {
      return i;
    }
  }

  return -1;
}


void preorder( node* a,  int root) {
  printf(" %d", root);
  
  if( a[root].left != -1) {
    preorder( a, a[root].left);
  }
  if( a[root].right != -1) {
    preorder( a, a[root].right);
  }
  
}


void inorder( node* a, int root) {
  if( a[root].left != -1) {
    inorder( a, a[root].left);
  }
  printf(" %d", root);
  
  if( a[root].right != -1) {
    inorder( a, a[root].right);
  }
}

void postorder( node* a, int root) {
  if( a[root].left != -1) {
    postorder( a, a[root].left);
  }
  if( a[root].right != -1) {
    postorder( a, a[root].right);
  }
  printf(" %d", root);

}


int main() {

  int n, r;
  node* a;

  int i;

  scanf("%d", &n);

  a = (node* )malloc( sizeof( node ) * n);

  initNode( a, n);

  scanNode( a, n);

  r = searchRoot( a, n);

  printf("Preorder\n");
  preorder( a, r);
  printf("\n");

  printf("Inorder\n");
  inorder( a, r);
  printf("\n");

  printf("Postorder\n");
  postorder( a, r);
  printf("\n");

  return 0;

}