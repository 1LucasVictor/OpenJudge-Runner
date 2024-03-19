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

void inorder(Node);
void preorder(Node);
void insert(int);
void find(int,Node);

Node root;
int f;

int main(){
  int n, i, x;
  char com[20];
  
  scanf("%d", &n);

  for(i = 0; i < n; i++){
    scanf("%s", com);
    if ( com[0] == 'i' ){
      scanf("%d", &x);
      insert(x);
    }
    if(com[0] == 'f'){
      scanf("%d",&x);
      f = 0;
      find(x,root);
      if(f == 1) printf("yes\n");
      else printf("no\n");
    }
    else if(com[0] == 'p' ){
      inorder(root);
      printf("\n");
      preorder(root);
      printf("\n");
    } 
  }

  return 0;
}


void insert(int k){
  Node y = NIL;
  Node x = root;
  Node z;

  z = malloc(sizeof(struct node));
  z->key = k;
  z->left = NIL;
  z->right = NIL;

  while(x != NIL){
    y = x; // 親を設定
    if(z->key < x->key){
      x = x->left;
    }// 左の子へ移動
    else{
      x = x->right;
    }// 右の子へ移動
  }
  z->parent = y;

  if(y == NIL){ // T が空の場合
    root = z;
  }
  else if(z->key < y->key){
    y->left = z;
  }// z を y の左の子にする
  else{
    y->right = z;
  }// z を y の右の子にする
}

void inorder(Node u){
  if(u->left != NIL) inorder(u->left);
 
  printf(" %d",u->key);

  if(u->right != NIL) inorder(u->right);
}

void preorder(Node u){
  printf(" %d",u->key);

  if(u->left != NIL) preorder(u->left);
  if(u->right != NIL) preorder(u->right);
}

void find(int k, Node n){
  if(n->key == k) f++;

  else{
    if(n->left != NIL && f == 0) find(k, n->left);
    if(n->right != NIL && f == 0) find(k,n->right);
  }
}

