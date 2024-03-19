#include<stdio.h>
#include<stdlib.h>
#define NIL NULL

struct node{
  struct node *right;
  struct node *left;
  struct node *parent;
  int key;
};
typedef struct node * Node;

Node root;

Node treeMinimum(Node u){
  while(u->left != NIL) {
      u = u->left;
    }
    return u;

}

/*Node treeMaximum(Node u){


}*/

Node treeSearch(Node u, int k){
  if(u==NIL || k==u->key) return u;
  if (k<u->key) return treeSearch(u->left,k);
  else return treeSearch(u->right,k);

}

Node treeSuccessor(Node u){
  Node y = NIL;
    if( u->right != NIL ) return treeMinimum(u->right);
    y = u->parent;
    while(y != NIL && u == y->right) {
      u = y;
      y = y->parent;
    }
    return y;

}

void treeDelete(Node u){
  Node y; // node to be deleted
  Node x; // child of y

  if( u->left == NIL || u->right == NIL ) y = u;
    else y = treeSuccessor(u);
    
    if( y->left != NIL ) x = y->left;
    else x = y->right;
    
    if( x != NIL ) x->parent = y->parent;
    
    if( y->parent == NIL) root = x;
    else if( y == y->parent->left ) y->parent->left = x;
    else y->parent->right = x;
    
    if( y != u ) {
      u->key = y->key;
    }


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
    y=x;
    if(z->key < x->key) x=x->left;
    else x=x->right;
  }
  z->parent=y;

  if(y==NIL) root=z;
  else if(z->key < y->key) y->left=z;
  else y->right=z;

}

void inorder(Node u){
  if(u==NIL) return ;
  inorder(u->left);
  printf(" %d",u->key);
  inorder(u->right);
}
void preorder(Node u){
  if(u==NIL) return ;
  printf(" %d",u->key);
  preorder(u->left);
  preorder(u->right);
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