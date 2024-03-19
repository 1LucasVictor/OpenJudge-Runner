#include <stdio.h>
#include <stdlib.h>

struct node{
  struct node *right; 
  struct node *left;
  struct node *parent;
  int key;
};

typedef struct node *Node;
Node root;

void insert(int);
void preprint();
void inprint();

int main(){
  int i, m, k;
  char c[7];

  scanf("%d",&m);
  for(i = 0; i < m; i++){
    scanf("%s",c);
    if(c[0] == 'i'){
      scanf("%d",&k);
      insert(k);
    }
    else if(c[0] == 'p'){
      inprint(root);
      printf("\n");
      preprint(root);
      printf("\n");
    }
  }

  return 0;
}

void insert(int k){
  Node x = root, y = NULL, z;
  z = malloc(sizeof(struct node));
  z->key = k;
  z->left = NULL;
  z->right = NULL;
  while(x != NULL){
    y = x;
    if(z->key < x->key) x = x->left;
    else x = x->right;
  }
  z->parent = y;
  if(y == NULL) root = z;
  else if(z->key < y->key) y->left = z;
  else y->right = z;
}

void preprint(Node p){
  if(p != NULL){
    printf(" %d",p->key);
    if(p->left != NULL) preprint(p->left);
    if(p->right != NULL) preprint(p->right);
  }
}

void inprint(Node i){
  if(i != NULL){
    if(i->left != NULL) inprint(i->left);
    printf(" %d",i->key);
    if(i->right != NULL) inprint(i->right);
  }
}