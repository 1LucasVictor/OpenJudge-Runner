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
  if(x->left==NIL) return x;
  else treeMinimum(x->left);
  //return 0;

}

Node treeMaximum(Node x){
  if(x->right==NIL) return x;
  else treeMaximum(x->right);
  //return 0;

}

Node treeSearch(Node u, int k){
  if(u==NIL || k==u->key) return u;
  else if(k < u->key) return treeSearch(u->left,k);
  else return treeSearch(u->right,k);
  //return 0;

}

Node treeSuccessor(Node x){
  Node y;
  if(x->right != NIL) return treeMinimum(x->right);

  y = x->parent;
  while(y != NIL && x->key == y->right->key){
    x = y;
    y = y->parent;
  }
  return y;
  //return 0;
}

void treeDelete(Node z){
  Node y; // node to be deleted
  Node x; // child of y
  if(z->left == NIL || z->right == NIL)
    y = z;
  else
    y = treeSuccessor(z);
  if(y->left != NIL)
    x = y->left;
  else
    x = y->right;
  if(x != NIL)
    x->parent = y->parent;
  if(y->parent == NIL)
    root = x;
  else if(y == y->parent->left)
    y->parent->left = x;
  else
    y->parent->right = x;
  if(y != z)
    z->key = y->key;
  return ;

}

void insert(int k){
  Node y=NIL;
  Node x=root;
  Node z;

  z= malloc(sizeof(struct node));
  z->key=k;
  z->left=NIL;
  z->right=NIL;

  while(x!=NIL){
    y=x;
    if(z->key < x->key){
      x=x->left;
    }
    else{
      x=x->right;
    }
  }
  z->parent=y;
  if(y==NIL){
    root=z;
  }
  else if(z->key < y->key){
    y->left=z;
  }
  else{
    y->right=z;
  }
}






void inorder(Node u){
  if(u->key==NIL) return;

  if(u->left!=NIL){ 
    inorder(u->left);
  }
  printf(" %d",u->key);
  if(u->right!=NIL){ 
    inorder(u->right);
  }
}
void preorder(Node u){
  if(u->key==NIL) return;
  printf(" %d",u->key);
  
  if(u->left != NIL){ 
    preorder(u->left);
    }
  
    if(u->right != NIL){ 
    preorder(u->right);
    }
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

