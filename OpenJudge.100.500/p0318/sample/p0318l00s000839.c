#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Node{
  int key;
  struct Node* parent; //親
  struct Node* left; //左の子
  struct Node* right; //右の子
};

typedef struct Node node;

node* insert(node* r, int k) {
  node* x = r;
  node* y = NULL;
  node* z = (node*)malloc( sizeof(node) );
  z->key = k;
  z->left = NULL;
  z->right = NULL;
  z->parent = NULL;

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
    r = z;
  }else if( z->key < y->key) {
    y->left = z;
  }else {
    y->right = z;
  }

  return r;

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


node* find(node* r, int k) {

  while(1) {
    
    if( r == NULL ) {
      return NULL;
    }

    if(r->key == k) {
      return r;
    }
    
    if( r->key > k ) {
      r = r->left;
    }else if ( r->key < k ) {
      r = r->right;
    }
    
  }
}


void isExist( node* r, int k) {
  /*
    キーkを持つノードが存在する場合yes、しない場合noと標準出力する。
  */

  if( find( r, k) == NULL ) {
    printf("no\n");
  }else {
    printf("yes\n");
  }
}


node* successor( node* n) { //次節点を探査する

  node* y;

  if( n->right != NULL ) {
    n = n->right;
    while( n->left != NULL ) {
      n = n->left;
    }
    return n;
  }

  y = n->parent;
  while( y != NULL && n == y->right ) {
    n = y;
    y = y->parent;
  }
  return y;
}


void delete( node* r, int k ) {
  node* delNode;
  node* tempNode;
  int tempKey;

  delNode = find( r, k);

  if( delNode->left == NULL && delNode->right == NULL ) { //子供が存在しない
    if( delNode->parent->left == delNode ) {
      delNode->parent->left = NULL;
    }else {
      delNode->parent->right = NULL;
    }
    free(delNode);
  }

  else if( delNode->left != NULL && delNode->right == NULL ) { //左の子だけが存在する
    if( delNode->parent->left == delNode ) { //delNodeは左の子
      delNode->parent->left = delNode->left;
      delNode->left->parent = delNode->parent;
    }else { //delNodeは右の子
      delNode->parent->right = delNode->left;
      delNode->left->parent = delNode->parent;
    }

    free(delNode);
  }

  else { //子供が二人存在する
    tempKey = successor( delNode )->key;
    delete( r, tempKey);
    delNode->key = tempKey;
  }

}


int main() {
  
  int m, k;
  node* r = NULL;
  char o[10];
  int i;

  //命令の数を取得
  scanf("%d", &m);
  
  for( i=0; i<m; i++) {
    
    //命令を取得
    scanf("%s", o);
    
    if( !strcmp( o, "insert") ) { //挿入
      scanf("%d", &k);
      r = insert( r, k);
    }
    
    if( !strcmp( o, "print") ) { //出力
      printInorder( r );
      printf("\n");
      
      printPreorder( r );
      printf("\n");
    }
    
    if( !strcmp( o, "find") ) { //探査
      scanf("%d", &k);
      isExist( r, k);
    }
    
    if( !strcmp( o, "delete") ) {
      scanf("%d", &k);
      delete( r, k);
    }
    
  }
 
  return 0;
 
}