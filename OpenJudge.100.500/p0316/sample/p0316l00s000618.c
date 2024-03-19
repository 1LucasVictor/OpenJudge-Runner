#include <stdio.h>
#include <stdlib.h>
#define NIL NULL

struct node{
  struct node *right;
  struct node *left;
  struct node *parent;
  int key;
};
typedef struct node * Node;

Node root;
/*
Node treeMinimum(Node x){


}

Node treeMaximum(Node x){


}

Node treeSearch(Node x, int k){
  while(x != NIL && k != x.key){
    if(k < x.key) x = x.left;
    else x = x.left;
  }
  return x; 
}

Node treeSuccessor(Node x){
  if(x.right != NIL) return treeMinimum(x.right); // case 1
  y = x.p
  while(y != NIL && x == y.right){
    x = y
    y = y.p
  }
  return y // case 2
}

void treeDelete(Node z){

  Node y; // node to be deleted
  Node x; // child of y

  if(z.left == NIL || z.right == NIL) y = z;
  else y = Tree-Successor(z);

  if(y.left != NIL) x = y.left;
  else x = y.right;
  if(x != NIL) x.p = y.p;
  if(y.p == NIL) T.root = x;
  else if{
    y == y.p.left;
    y.p.left = x;
  }
  else y.p.right = x;
  if(y != z) z.key = y.key;
}*/

void insert(int k){
  Node y = NIL;
  Node x = root;
  Node z;

  z = malloc(sizeof(struct node));
  z->key = k;
  z->left = NIL;
  z->right = NIL;

  while(x != NIL){
    y = x; // ???????¨????
    if(z->key < x->key) x = x->left; // ?????????????§????
    else x = x->right; 
    }// ?????????????§????
    z->parent = y;
    if(y == NIL) root = z;// T ???????????´???
    else if(z->key < y->key) y->left = z; // z ??? y ?????????????????????
    else y->right = z; // z ??? y ?????????????????????
}


void inParse(Node x){
  if(x->left != NIL) inParse(x->left);
  printf(" %d",x->key);
  if(x->right != NIL) inParse(x->right);
}
void preParse(Node x){
  printf(" %d",x->key);
  if(x->left != NIL) preParse(x->left);
  if(x->right != NIL) preParse(x->right);
}


int main(){
  int n, i, x;
  char com[20];
  scanf("%d", &n);

  for ( i = 0; i < n; i++ ){
    scanf("%s", com);
    /*if ( com[0] == 'f' ){
      scanf("%d", &x);
      Node t = treeSearch(root, x);
      if ( t != NIL ) printf("yes\n");
      else printf("no\n");
    }*/
     if ( com[0] == 'i' ){
      scanf("%d", &x);
      insert(x);
    } else if ( com[0] == 'p' ){
      inParse(root);
      printf("\n");
      preParse(root);
      printf("\n");
    } 
    /*else if ( com[0] == 'd' ){
      scanf("%d", &x);
      treeDelete(treeSearch(root, x));
    }*/
  }

  return 0;
}