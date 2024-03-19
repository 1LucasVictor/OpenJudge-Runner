#include<stdio.h>
#include<stdlib.h>
#define NIL NULL

struct node{
  struct node *right;
  struct node *left;
  struct node *parent;
  int key;
};

typedef struct node * Node;
Node root;

void insert(int);
void inorder(Node);
void preorder(Node);
Node treeSearch(Node,int);

Node treeSearch(Node z, int k) { // 再帰を用いて key と node の数が一致するかすべての node surabataら終わり
  if( z == NIL || k == z->key ) {
    return z;
  }
  if( k < z->key ) {
    return treeSearch( z->left,k);
  }
  else{
    return treeSearch( z->right,k);
  }
}
 
void insert(int k){
  Node y = NIL;  //xの親
  Node x = root; //Tの根
  Node z;
 
  z = (Node)malloc(sizeof(struct node));
  z->key = k;
  z->left = NIL;
  z->right = NIL;
 
  while(x != NIL){
    y = x; // 親を設定
    if( z->key < x->key ) x = x->left;
    else x = x->right;
  }
  z->parent = y;
  if(y == NIL) root = z; 
  else if( z->key < y->key ) y->left = z;
  else y->right = z;

}
 
void inorder(Node z){ // 中間順巡回の出力
  if( z->left != NIL ) inorder( z->left );
  printf(" %d",z->key);
  if( z->right != NIL ) inorder( z->right );
}

void preorder(Node z){ // 先行順巡回の出力
  printf(" %d",z->key);
  if( z->left != NIL ) preorder(z->left);
  if( z->right != NIL ) preorder(z->right);
}
 
 
int main(){
  int n, i, x;
  char com[20];
  scanf("%d", &n);
 
  for ( i = 0; i < n; i++ ){
    scanf("%s", com);
    if ( com[0] == 'i' ){
      scanf("%d", &x);
      insert(x);
    } 
    else if ( com[0] == 'p' ){
      inorder(root);
      printf("\n");
      preorder(root);
      printf("\n");
    } 
    else if ( com[0] == 'f' ){
      scanf("%d", &x);
      Node t = treeSearch(root, x);
      if ( t != NIL ) printf("yes\n");
      else printf("no\n");
    }
  }
  return 0;
}