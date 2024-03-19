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

Node root;
Node head, tail;
void inorder(Node node){
  if(node != tail){
    inorder(node->left);
    printf(" %d", node->key);
    inorder(node->right);
  }
}
void preorder(Node node){
  if(node != tail){
    printf(" %d", node->key);
    preorder(node->left);
    preorder(node->right);
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

  while (x != NIL){
    y = x;
    if (z->key < x->key)x = x->left;
    else x = x->right ;
    z->parent = y;
  }
  if (y == NIL)root = z;
  else if (z->key < y->key) y->left = z;
  else y->right = z;
}
Node find ( Node A, int x){
  while(A!=NIL && x!=A->key){
    if(x < A->key)
      A=A->left;
    else A=A->right;
  }
  return A;
}

int main(){
  int n, i, x;
  char com[20];
  Node a;
  scanf("%d", &n);

  for ( i = 0; i < n; i++ ){
    scanf("%s", com);
    if ( com[0] == 'i' ){
      scanf("%d", &x);
      insert(x);
    }
    else if ( com[0] == 'p' ){
      inorder(root);
      printf("\n");
      preorder(root);
      printf("\n");
    }
    else if ( com[0] == 'f' ){
      scanf("%d",&x);
      a=find(root,x);
      if(a==NIL)printf("no\n");
      else printf("yes\n");
    }

  }

  return 0;
}
