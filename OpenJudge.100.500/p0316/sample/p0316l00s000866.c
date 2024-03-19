#include <stdio.h>
#include <stdlib.h>

struct node{
  struct node *right;
  struct node *left;
  struct node *parent;
  int key;
};

typedef struct node * Node;

#define NIL NULL

Node root;

//データ挿入関数
void insert(int k){
  Node y = NIL;
  Node x = root;
  Node z;

  z = malloc(sizeof(struct node));
  z->key = k;
  z->left = NIL;
  z->right = NIL;

  while(x != NIL){
    y = x;//親を設定
    if(z->key < x->key){
      x = x->left;//左の子へ移動
    }
    else{
      x = x->right;//右の子へ移動
    }
  }
  
  z->parent = y;

  if(y == NIL){//Tが空の場合
    root = z;
  }
  else if(z->key < y->key){
    y->left = z;//zをyの左の子にする
  }
  else{
    y->right = z;//zをyの右の子にする
  }
}

//データ出力関数（中間順巡回）
void inorder(Node u){
  if(u == NIL){
    return;
  }
  inorder(u->left);
  printf(" %d",u->key);
  inorder(u->right); 
}

//データ出力関数（先行順巡回）
void preorder(Node u){
  if(u == NIL){
    return;
  }
  printf(" %d",u->key);
  preorder(u->left);
  preorder(u->right);
}


int main(){
  int n, i, x;
  char com[20];
  scanf("%d", &n);

  for ( i = 0; i < n; i++ ){
    //この後の操作を入力
    scanf("%s", com);

    //データの挿入
    if ( com[0] == 'i' ){
      scanf("%d", &x);
      insert(x);
    }
    
    //データの出力（2パターン）
    else if ( com[0] == 'p' ){
      inorder(root);
      printf("\n");
      preorder(root);
      printf("\n");
    }
  }

  return 0;
}

