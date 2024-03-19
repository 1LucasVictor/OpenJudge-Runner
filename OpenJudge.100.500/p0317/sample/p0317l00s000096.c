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

Node root = NIL;
Node treeMinimum(Node);
Node treeMaximum(Node);
Node treeSearch(Node , int);
Node treeSuccessor(Node);
void treeDelete(Node);
void insert(int);
void inorder(Node);
void preorder(Node);

int count1 = 1,count2 = 1,ak;

int main(){
  int n, i, x;
  char com[20];
  scanf("%d", &n);
ak = n;

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

Node treeMinimum(Node x){

  while(x->left != NIL) x = x->left;
  return x;
}

Node treeMaximum(Node x){

  while(x->left != NIL ) x = x->right;
  return x;
}

Node treeSearch(Node x , int k){

  while( x!= NIL && k != x->key){
    if(k < x->key) x = x->left;
    else x = x->right;
  }
  return x;
}

Node treeSuccessor(Node x){
  Node y;
  if(x->right != NIL) return treeMinimum(x->right);

  y = x->parent;
  while(y != NIL && x == y->right){
    x = y;
    y = y->parent;
  }
  return y;
}


void treeDelete(Node z){
  Node y;
  Node x;

  if(y->left == NIL || z->right == NIL) y = z;
  else y = treeSuccessor(z);

  if(y->left != NIL) x = y->left;
  else x = y->right;

  if(x != NIL) x->parent = y->parent;

  if(y->parent == NIL) root = x;
  else if(y == y->parent->left) y->parent->left = x;
  else y->parent->right = x;

  if(y != z) z->key =y->key;

}

void insert(int k){
  Node y  = NIL;
  Node x = root ; //current
  Node z; //temp

  z = malloc(sizeof(struct node));
  z->key = k;
  z->left = NIL;
  z->right = NIL;

if(root == NIL) root = z;
else {
  x = root;
  y = NIL;
}
  while(x != NIL){
    y = x;
    if(z->key < x->key){
      x = x->left;
      if(x == NIL){
       y->left = z;
       return;
     }
   }else{
x = x->right;

    if(x == NIL) {
      y->right = z;
return;
}
  }
}
}

void inorder(Node u){

  if(u != NIL){

    inorder(u->left);

    printf(" %d",u->key);

    inorder(u->right);
  }

}

void preorder(Node u){

  if(u != NIL){
        printf(" %d",u->key);
    preorder(u->left);
    preorder(u->right);
  }
}

