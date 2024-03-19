/*1 insert(T, z)
2     y = NIL // x の親
3     x = 'T の根'
4     while x ≠ NIL
5         y = x // 親を設定
6         if z.key < x.key
7             x = x.left // 左の子へ移動
8         else
9             x = x.right // 右の子へ移動
10    z.p = y
11
12    if y == NIL // T が空の場合
13        'T の根' = z
14    else if z.key < y.key
15        y.left = z // z を y の左の子にする
16    else
17        y.right = z // z を y の右の子にする*/

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

Node treeMinimum(Node x){
  while(x->left != NIL){
    x = x->left;
  }
  return x;
}

Node treeMaximum(Node x){
  while(x->right != NIL){
    x = x->right;
  }
  return x;
}

Node treeSearch(Node u, int k){
  while(u != NIL && k != u->key){
    if(k < u->key) u = u->left;
    else u = u->right;
  }
  return u;
}

Node treeSuccessor(Node x){
  if(x->right != NIL) return treeMinimum(x->right);
  Node y;
  y = x->parent;
  while(y !=NIL && x == y->right){
    x = y;
    y = y->parent;
  }
  return y;
}

void treeDelete(Node z){
  Node y; // node to be deleted
  Node x; // child of y

  if(z->left == NIL || z->right == NIL) y = z;
  else y = treeSuccessor(z);

  if(y->left != NIL) x = y->left;
  else x = y->right;

  if(x != NIL) x->parent = y->parent;

  if(y->parent == NIL) root = x;
  else if(y == y->parent->left) y->parent->left = x;
  else y->parent->right = x;

  if(y != z) z->key = y->key;
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
    y = x;
    if(z->key < x->key) x = x->left;
    else x = x->right;
  }
  z->parent = y;

  if(y == NIL) root = z;
  else if(z->key < y->key) y->left = z;
  else y->right = z;
}

void inorder(Node u){
  if(u != NIL){
    inorder(u->left);
    printf(" %d", u->key);
    inorder(u->right);
  }
  else return;
}

void preorder(Node u){
  if(u != NIL){
    printf(" %d", u->key);
    preorder(u->left);
    preorder(u->right);
  }
  else return;
}


int main(){
  int n, i, x;
  char com[20];
  scanf("%d", &n);

  for ( i = 0; i < n; i++ ){
    scanf("%s", com);
    if ( com[0] == 'f' ){
      scanf("%d", &x);
      Node t = treeSearch(root, x);
      if ( t != NIL ) printf("yes\n");
      else printf("no\n");
    } else if ( com[0] == 'i' ){
      scanf("%d", &x);
      insert(x);
    } else if ( com[0] == 'p' ){
      inorder(root);
      printf("\n");
      preorder(root);
      printf("\n");
    } else if ( com[0] == 'd' ){
      scanf("%d", &x);
      treeDelete(treeSearch(root, x));
    }
  }

  return 0;
}

