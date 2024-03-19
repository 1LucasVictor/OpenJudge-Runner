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

int find(Node r,int b){
  if(r == NIL){
    return 0;
  }

  if(r->key == b){
    return 1;
  }else if(r->key < b){
    return find(r->right,b);
  }else{
    return find(r->left,b);
  }
}

void insert(int a){
  Node y = NIL;
  Node x = root;
  Node z;

  z = malloc(sizeof(struct node));
  z->key = a;
  z->left = NIL;
  z->right = NIL;

  while(x!=NIL){
    y=x;
    if(z->key < x->key){
      x = x->left;
    } else {
      x = x->right;
    }
  }
  z->parent = y;
  if(y==NIL){
    root=z;
  }else if(z->key < y->key){
    y->left = z;
  }else{
    y->right = z;
  }
}

void inorder(Node u){
  if(u==NIL){
    return;
  }
  inorder(u->left);
  printf(" %d",u->key);
  inorder(u->right);
}

void preorder(Node u){
  if(u==NIL){
    return;
  }
  printf(" %d",u->key);
  preorder(u->left);
  preorder(u->right);
}

int main(){
  int h, i, a, b;
  char com[20];

  scanf("%d", &h);
  for ( i = 0; i < h; i++ ){
    scanf("%s", com);
    if ( com[0] == 'i' ){
      scanf("%d",&a);
      insert(a);
    }else if(com[0]=='f'){
      scanf("%d" ,&b);
      if(find(root,b)==1){
	printf("yes\n");
      }else{
	printf("no\n");
      }
    }else{
      inorder(root);
      printf("\n");
      preorder(root);
      printf("\n");
    }
  }
  
  return 0;
}

