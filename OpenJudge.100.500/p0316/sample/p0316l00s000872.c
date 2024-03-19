#include<stdio.h>
#include<stdlib.h>

struct node{
  struct node *right;
  struct node *left;
  struct node *parent;
  int key;
};
typedef struct node * Node;
#define NIL NULL

Node root;

void insert(int k){
  Node y = NIL;
  Node x = root;
  Node z;

  z = malloc(sizeof(struct node));
  z->key = k;
  z->left = NIL;
  z->right = NIL;

  while (x != NIL){
    y = x; // 親を設定
    if (z->key < x->key) x = x->left; // 左の子へ移動
    else x = x->right; // 右の子へ移動
  }
  z->parent=y;

  if (y == NIL) // T が空の場合
    root= z;
  else if (z->key < y->key)
    y->left = z; // z を y の左の子にする
  else 
    y->right = z; // z を y の右の子にする
}

void inorder(Node u){
  if (u != NIL){
    inorder(u->left);
    printf(" %d",u->key);
    inorder(u->right);
  }
}
void preorder(Node u){
  if (u != NIL) {
    printf(" %d" ,u->key);
    preorder(u->left);
    preorder(u->right);
  }
}


int main(){
  int  n,i, x;
  char com[20];
  Node t;
  scanf("%d", &n);

  for ( i = 0; i < n; i++ ){
    scanf("%s", com);
    if ( com[0] == 'i' ){
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