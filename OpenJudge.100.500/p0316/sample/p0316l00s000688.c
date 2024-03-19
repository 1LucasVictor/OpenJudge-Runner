/* Binary tree 1 */
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


/* 二分探索木Tに対してkeyがkのノードを挿入する関数 */
void insert(int k)
{
  Node y = NIL;
  Node x = root;
  Node z;

  /* 挿入するノードzを作成 */
  z = malloc(sizeof(struct node));
  z->key = k;
  z->left = NIL;
  z->right = NIL;

  /* zを挿入する場所を求める */
  while( x != NIL )
    {
      y = x;     /* 親を設定 */

      if( z->key < x->key )
	x = x->left;       /* 左の子に移動 */
      else
	x = x->right;      /* 右の子に移動 */
    }

  z->parent = y;           /* zの親を設定 */

  if( y == NIL )
    root = z;              /* Tが空の場合 */
  else if( z->key < y->key )
    y->left = z;           /* 左の子として挿入する場合 */
  else
    y->right = z;          /* 右の子として挿入する場合 */
}


/* 二分探索木Tを中間順巡回によって出力する関数 */
void inorder(Node u)
{
  if( u == NIL )
    return;

  inorder(u->left);       /* 左の子に進む */
  printf(" %d", u->key);
  inorder(u->right);      /* 右の子に進む */
}


/* 二分探索木Tを先行順巡回によって出力する関数 */
void preorder(Node u)
{
  if( u == NIL )
    return;
  
  printf(" %d", u->key);
  preorder(u->left);       /* 左の子に進む */
  preorder(u->right);      /* 右の子に進む */
}


int main()
{
  int n, i, x;
  char com[20];
  scanf("%d", &n);

  for ( i = 0; i < n; i++ ){
    scanf("%s", com);
    
   
    if ( com[0] == 'i' )
      {
	scanf("%d", &x);
	insert(x);
      }
    else if ( com[0] == 'p' )
      {
	inorder(root);
	printf("\n");
	preorder(root);
	printf("\n");
      }
  }

  return 0;
}

