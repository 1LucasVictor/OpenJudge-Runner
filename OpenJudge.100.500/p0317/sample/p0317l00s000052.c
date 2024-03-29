#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0

struct node{
  struct node *right;
  struct node *left;
  struct node *parent;
  int key;
};
typedef struct node * Node;
#define NIL NULL

Node root;
void insert(int k){
  Node y = NIL;
  Node x = root;
  Node z;

  z = malloc(sizeof(struct node));
  z->key = k;
  z->left = NIL;
  z->right = NIL;

  while(x!=NIL){
    y = x;
    if(z->key < x->key) x = x->left;
    else x = x->right;
  }
  z->parent = y;
  if(y==NIL) root = z;
  else if(z->key < y->key) y->left = z;
  else y->right = z;
}

void inorder(Node u){
  if(u !=NIL){
    inorder(u->left);
    printf(" %d",u->key);
    inorder(u->right);
  }
}

void preorder(Node u){
  if(u!=NIL){
    printf(" %d",u->key);
    preorder(u->left);
    preorder(u->right);
  }
}

int find(int k, Node u) {
    int res;
    if(u!=NIL) {
        if (u->key == k) return 1;
        if (u->key < k) res = find(k, u->right);
        else res =  find(k, u->left);
    }else {
        return 0;
    }
    return res;
}


int main(){
  int n, i, x, res;
  char com[20];

  scanf("%d", &n);

  for ( i = 0; i < n; i++ ){
    scanf("%s", com);
    if ( com[0] == 'i' ){
      scanf("%d", &x);
      insert(x);
    } else if ( com[0] == 'p' ){
      inorder(root);
      printf("\n");
      preorder(root);
      printf("\n");
    } else if (com[0] == 'f') {
      scanf("%d", &x);
      res =find(x, root);
      if(res == 1){
          printf("yes\n");
      }else {
          printf("no\n");
      }
    }
  }

  return 0;
}