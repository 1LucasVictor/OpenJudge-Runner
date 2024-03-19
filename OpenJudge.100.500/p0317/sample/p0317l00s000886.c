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
Node find(Node,int);
void preprint();
void inprint();

int main(){
  int i, m, k, flag[10];
  char c[7];
  Node f;

  scanf("%d",&m);
  for(i = 0; i < m; i++){
    scanf("%s",c);
    if(c[0] == 'i'){
      scanf("%d",&k);
      insert(k);
    }
    else if(c[0] == 'f'){
      scanf("%d",&k);
      f = find(root,k);
      if(f != NULL) printf("yes\n");
      else printf("no\n");
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

Node find(Node r, int k){
  while(r != NULL && k != r->key){
    if(k < r->key) r = r->left;
    else r = r->right;
  }
  return r;
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