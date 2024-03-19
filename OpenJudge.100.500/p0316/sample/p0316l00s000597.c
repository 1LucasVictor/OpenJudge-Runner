// Binary Search Tree I
#include <stdio.h>
#include <stdlib.h>

struct node{
  struct node *right;
  struct node *left;
  struct node *parent;
  int key;
};
typedef struct node * Node;

Node root, nil;

//  二分探索木へkを挿入 //
void insert(int k){
  Node y = nil; // x の親
  Node x = root; // T の根
  Node z;
  
  //z->parent = y;
  z = (Node)malloc(sizeof(struct node));
  z->key = k;
  z->left = nil;
  z->right = nil;

  while(x != nil){
    y = x;   // 親を設定
    if(z->key < x->key)x = x->left; // 左の子へ移動
    else x = x->right;            // 右の子へ移動
  }
  z->parent = y;

  if(y == nil)root = z; // T が空の場合
  else if(z->key < y->key)y->left = z; // z を y の左の子にする
  else y->right = z; // z を y の右の子にする
}

// 再帰を使って中間順巡回(Inorder)で表示
void printInorder(Node u){
  if(u == nil)return;
  printInorder(u->left);
  printf(" %d", u->key);
  printInorder(u->right);
}

// 再帰を使って先行順巡回(Preorder)で表示
void printPreorder(Node u){
  if(u == nil)return;
  printf(" %d", u->key);
  printPreorder(u->left);
  printPreorder(u->right);
}

int main(){
  int n, i, x;
  char com[10];
  
  scanf("%d", &n);
  for ( i = 0; i < n; i++ ){
    scanf("%s", com);
    if ( com[0] == 'i' ){ // 挿入の時
      scanf("%d", &x);
      insert(x);
    } else if ( com[0] == 'p' ){ // 出力の時
      printInorder(root); // 先行順巡回で表示
      printf("\n");
      printPreorder(root); // 中間順巡回で表示
      printf("\n");
    }
  }
  return 0;
}
