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

Node treeMinimum(Node x){
  while(1){
    if(x -> left == NIL) break;
    x = x->left;
  }
  return x;

}

Node treeMaximum(Node x){
  while(1){
    if(x -> right == NIL) break;
    x = x-> right;
  }
  return x;


}

Node treeSearch(Node u, int k){
  Node a,b;

  if(u == NIL) return u;
  if(k == u -> key) return u;

  a = treeSearch(u->left,k);
  b = treeSearch(u->right,k);
  if(k < u->key) return a;
  else return b;
}

Node treeSuccessor(Node x){
  Node y;
  if(x->right != NIL) return treeMinimum(x->right);
  y = x->parent;
  while(1){
    if(y == NIL && x != y->right) break;
    x = y;
    y = y->parent;
  }

  return y;
}

void treeDelete(Node z){
  Node y; // node to be deleted
  Node x; // child of y

  if(z->left == NIL) y = z;
  if(x->right == NIL) y = z;
  else y = treeSuccessor(z);

  if(x != NIL){
    x->parent = y->parent;
  }

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

  while(1){
    if(x == NIL) break;
    y = x;

    if(z->key < x->key) x = x->left;
    else x = x->right;
  }

  z->parent = y;
  if(y == NIL) root = z;
  else if(z->key < y->key) y->left = z;
  else (y->right = z);
}




void inorder(Node u){
  if(u == NIL) return;
  inorder(u -> left);
  printf(" %d", u -> key);
  inorder(u -> right);

}
void preorder(Node u){
  if(u == NIL) return;
  printf(" %d", u -> key);
  preorder(u -> left);
  preorder(u -> right);

}

Node find(Node u,int k){
  while(u != NIL && k != u-> key){
    if(k < u->key) u = u->left;
    else u = u->right;
  }
  return u;
}

int main(){
  int n, i, x;
  char com[20];
  scanf("%d", &n);

  for ( i = 0; i < n; i++ ){
    scanf("%s", com);
    if ( com[0] == 'f' ){
      scanf("%d", &x);
      Node t = find(root, x);
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
    } else break;
    
  }

  return 0;
}

