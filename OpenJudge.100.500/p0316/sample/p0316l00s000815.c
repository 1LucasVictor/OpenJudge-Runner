#include <stdio.h>
#include <stdlib.h>
#define MAX 100000


struct node{
  int key;
  struct node *right;
  struct node *left;
  struct node *parent;
};
typedef struct node * Node;
#define NIL NULL

Node root;

void print(Node );
void preorder(Node );
void inorder(Node );
void insert(int);
int main(){
  int n, i, x;
  char com[20];
  scanf("%d", &n);

  for ( i = 0; i < n; i++ ){
    scanf("%s", com);
  
    if ( com[0] == 'f' ){
      scanf("%d", &x);
      //   Node t = treeSearch(root, x);
      //    if ( t != NIL ) printf("yes\n");
      //   else printf("no\n");
    } else if ( com[0] == 'i' ){
      scanf("%d", &x);
      insert(x);
    } else if ( com[0] == 'p' ){
      inorder(root);
      printf("\n");
      preorder(root);
      printf("\n");
    } else if ( com[0] == 'd' ){
      //     scanf("%d", &x);
      //     treeDelete(treeSearch(root, x));
    }
  }

  return 0;
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
    if(z->key < x->key){
      x = x->left;
    }
    else{
      x = x->right;
    }
  }
  z->parent = y;   
  if(y == NIL) {
    root = z; //Tが空
  }
  else if(z->key < y->key ){
    y->left = z;
  }
  else y->right = z;
}

void print(Node root){
  inorder(root);
  preorder(root);
}

void preorder(Node u){
  if(u==NIL) return;
  printf(" %d",u->key);
  preorder(u->left);
  preorder(u->right);
}

void inorder(Node u){
  if(u == NIL) return;
  inorder(u->left);
  printf(" %d",u->key);
  inorder(u->right);
}

