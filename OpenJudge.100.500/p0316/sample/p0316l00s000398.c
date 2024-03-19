#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node{
  int key;
  struct node* parent; //親
  struct node* left; //左の子
  struct node* right; //右の子
} node;


void insert(node** r, int k) {
  node* x = *r;
  node* y = NULL;
  node* z;

  z = (node*)malloc( sizeof(node) );
  z->key = k;

  while( x != NULL) {
    y = x;

    if( z->key < x->key ) {
      x = x->left;
    }else {
      x = x->right;
    }

  }
  z->parent = y;

  if( y == NULL) {
    *r = z;
  }else if( z->key < y->key) {
    y->left = z;
  }else {
    y->right = z;
  }

}


void printInorder(node* r) { //左->自身->右
  
  if(r->left != NULL) {
    printInorder( r->left );
  }

  printf(" %d", r->key);

  if(r->right != NULL) {
    printInorder( r->right );
  }

}


void printPreorder(node* r) {

  printf(" %d", r->key);

  if(r->left != NULL) {
    printPreorder( r->left );
  }

  if(r->right != NULL) {
    printPreorder( r->right );
  }

}


main() {

  int m, k;
  node* r;
  char o[10];
  int i;

  r = NULL;

  //命令の数を取得
  scanf("%d", &m);

  for( i=0; i<m; i++) {

    //命令を取得
    scanf("%s", o);

    if(!strcmp( o, "insert")) { //挿入
      scanf("%d", &k);
      insert( &r, k);
    }

    if(!strcmp( o, "print")) { //出力
      printInorder( r );
      printf("\n");

      printPreorder( r );
      printf("\n");
    }


  }

  return 0;

}