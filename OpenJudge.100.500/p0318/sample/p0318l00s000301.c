#include<stdio.h>

#define NIL NULL

struct node
{
  struct node *right;
  struct node *left;
  struct node *parent;
  int key;
};

typedef struct node * Node;

Node root;

Node treeMinimum(Node x)
{
  while(x->left != NIL)
    {
      x = x->left;
    }
  
  return x;
}

Node treeMaximum(Node x)
{
  while(x->right != NIL)
    {
      x = x->right;
    }
  
  return x;
}

Node treeSearch(Node u, int k)
{
  if(u == NIL || k == u->key) return u;
  if(k < u->key) return treeSearch(u->left,k);
  else return treeSearch(u->right,k);

}

Node treeSuccessor(Node x)
{
  Node y;
  
  if(x->right != NIL)
    {
      return treeMinimum(x->right);
    }
  y = x->parent;

  while(y != NIL && x == y->right)
    {
      x = y;
      y = y->parent;
    }
  
  return y;
}

void treeDelete(Node z){
  Node y; // node to be deleted
  Node x; // child of y

  if(z->left == NIL || z->right == NIL) y = z; //z にどちらかの子がいないなら(case 1,2)
  else y = treeSuccessor(z); //それ以外(case 3)なら次節点を探す

  if(y->left != NIL) x = y->left;  //y に左の子がいるなら x に代入
  else x = y->right; //それ以外なら x に y の右の子を代入

  if(x != NIL) x->parent = y->parent; //y が葉なら(case 1)

  if(y->parent == NIL) root = x; //y がrootなら
  else if(y == y->parent->left) y->parent->left = x; //y が左の子なら(case 2)
  else y->parent->right = x; //(case 2)

  if(y != z) z->key = y->key; //(case 3)
  
  return;
}

void insert(int k){
  Node y = NIL;
  Node x = root;
  Node z;

  z = malloc(sizeof(struct node));
  z->key = k;
  z->left = NIL;
  z->right = NIL;

  while(x != NIL)
    {
      y = x;

      if(z->key < x->key)
	{
	  x = x->left;
	}
      else
	{
	  x = x->right;
	}
    }
  z->parent = y;

  if(y == NIL)
    {
      root = z;
    }
  else if(z->key < y->key)
    {
      y->left = z;
    }
  else
    {
      y->right = z;
    }

  return;
}

void inorder(Node u)
{
  if(u == NIL) return;

  inorder(u->left);
  printf(" %d",u->key);
  inorder(u->right);

  return;
}
void preorder(Node u)
{
  if(u == NIL) return;

  printf(" %d",u->key);
  preorder(u->left);
  preorder(u->right);

  return;
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

