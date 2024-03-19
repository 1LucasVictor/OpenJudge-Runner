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

Node find(Node, int);
void insert(int);
void inorder(Node);
void preorder(Node);
void Delete(Node);
Node Minimum(Node);
Node Successor(Node);

Node root;

int main()
{
  int n, i, x;
  char com[20];
  Node t;

  scanf("%d", &n);

  for(i = 0; i < n; i++){
    scanf("%s", com);

    if( com[0] == 'f' ){
      scanf("%d", &x);
      t = find(root, x);

      if ( t != NIL ) printf("yes\n");
      else printf("no\n");
    }
    
    else if( com[0] == 'i' ){
      scanf("%d", &x);
      insert(x);
    }
    
    else if( com[0] == 'p' ){
      inorder(root);
      printf("\n");
      preorder(root);
      printf("\n");
    }
    
    else if ( com[0] == 'd' ){
      scanf("%d", &x);
      Delete(find(root, x));
    }
  }
  
  return 0;
}

Node Minimum(Node x)
{

  while(x->left != NIL) x = x->left;
  return x;

}

/* ????´¢ */
Node find(Node root, int x)
{

  if(root == NIL || x == root->key) return root;
  if(x < root->key) return find(root->left, x);
  else return find(root->right, x);

}

Node Successor(Node x)
{

  Node y;

  if(x->right != NIL) return Minimum(x->right);

  y = x->parent;
  while(y != NIL && x == y->right){
    x = y;
    y = y->parent;
  }

  return y;

}

/* ?????? */
void Delete(Node z)
{
  Node y; // node to be deleted
  Node x; // child of y

  if(z->left == NIL || z-> right == NIL) y = z;
  else y = Successor(z);

  if(y->left != NIL) x = y->left;
  else x = y->right;

  if(x != NIL) x->parent = y->parent;

  if(y->parent == NIL) root = x;
  else if(y == y->parent->left) y->parent->left = x;
  else y->parent->right = x;

  if(y != z) z->key = y->key;

}

/* ?????\ */
void insert(int k)
{

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

/* ??????????????? */
void inorder(Node root)
{

  if(root != NIL){
    inorder(root->left);
    printf(" %d", root->key);
    inorder(root->right);
  }

}

/* ??????????????? */
void preorder(Node root)
{

  if(root != NIL){
    printf(" %d", root->key);
    preorder(root->left);
    preorder(root->right);
  }

}