#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node{
  struct node *right;
  struct node *left;
  struct node *parent;
  int key;
};
typedef struct node * Node;

Node root,NIL;
int maxh = 0;

Node treeSearch(Node u,int k){
  while(u != NIL && k != u->key){
    if(k < u->key){
      u = u->left;
    }
    else{
      u = u->right;
    }
  }
  return u;
}

void insert(int k){
  int H;
  Node x = root;
  Node y = NIL;
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
  if(y == NIL){
    root = z;
  }
  else if(z->key < y->key){
    y->left = z;
  }
  else{
    y->right = z;
  }
}

void inorder(Node u){
  if(u == NIL) return;
  inorder(u->left);
  printf(" %d",u->key);
  inorder(u->right);
}

void preorder(Node u){
  if(u == NIL) return;
  printf(" %d",u->key);
  preorder(u->left);
  preorder(u->right);
}

int main(){
  int n,i,x;
  char com[20];
  Node t;

  scanf("%d",&n);

  for(i = 0;i < n;i++){
    scanf("%s",com);
    if(strcmp(com,"find") == 0){
      scanf("%d",&x);
      t = treeSearch(root,x);
      if(t != NIL){
	printf("yes\n");
      }
      else{
	printf("no\n");
      }
    }
    else if(strcmp(com,"insert") == 0){
      scanf("%d",&x);
      insert(x);
    }
    else if(strcmp(com,"print") == 0){
      inorder(root);
      printf("\n");
      preorder(root);
      printf("\n");
    }
  }

  return 0;
}

  

