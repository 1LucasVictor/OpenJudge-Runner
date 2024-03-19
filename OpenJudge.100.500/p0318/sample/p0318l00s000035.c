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

/* ノードxをルートノードとする二分探索木中でkeyの値が最小のものを探す関数
   戻り値  keyの値が最小のノードのアドレス */
Node treeMinimum(Node x)
{
  while( x->left != NIL )
    x = x->left;

  return x;
}


/* 二分探索木中でxの次に大きいノードを求める関数
   戻り値  求めたノードのアドレス  */
Node treeSuccessor(Node x)
{  
  /* ケース１ */
  if( x->right != NIL )
    return treeMinimum(x->right);

  /* ケース２ */
  while( x != NIL && x->parent->right == x )
      x = x->parent;
  return x;
}


/* 二分探索木Tからノードzを削除する関数 */
void treeDelete(Node z)
{
  Node y; // node to be deleted
  Node x; // child of y

  if( z->left == NIL || z->right == NIL )
    y = z;
  else
    y = treeSuccessor(z);

  if( y->left != NIL )
    x = y->left;
  else
    x = y->right;

  if( x != NIL )
    x->parent = y->parent;
  
  if( y->parent == NIL )
    root = x;
  else if( y->parent->left == y )
    y->parent->left = x;
  else
    y->parent->right = x;
  
  if( z != y )
    z->key = y->key;
}


/* 二分探索木T中にkeyがkという値のノードが含まれるかどうか調べる関数
   戻り値  存在 そのノードのアドレス  存在しない NIL  */
Node find(Node x, int k)
{
  
  while( x != NIL )
    {
      /* keyの値がkのノードが存在した場合 */
      if( x->key == k )
	return x;

      if( k < x->key )
	x = x->left;      /* 左の子に移動 */
      else
	x = x->right;     /* 右の子に移動 */
      
    }

  return NIL;   /* 存在しなかった場合 */
}

int main()
{
  int n, i, x;
  char com[20];
  scanf("%d", &n);

  for ( i = 0; i < n; i++ ){
    scanf("%s", com);

    if( com[0] == 'f' )
      {
	scanf("%d", &x);

	if( find(root,x) != NIL )
	  printf("yes\n");
	else
	  printf("no\n");
      }
    else if ( com[0] == 'i' )
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
    else if ( com[0] == 'd' )
      {
	scanf("%d", &x);
	treeDelete( find(root,x) );
      }
    
  }

  return 0;
}

