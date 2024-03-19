#include <stdio.h>
#include <stdlib.h>
typedef struct node{
  int key;
  struct node *p;       //親
  struct node *left;    //左の子
  struct node *right;   //右の子
} tree;
void insert(tree *);
void Inorder(tree *);
void Preorder(tree *);
int find(tree *,int);
tree *t = NULL;

int main(){
  int n,i,k;
  char function[10];
  tree *new;
  
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%s",function);
    if(function[0] == 'p'){
      Inorder(t);
      printf("\n");
      Preorder(t);
      printf("\n");
    }
    else if(function[0] == 'i'){
      scanf("%d",&k);
      new=malloc(sizeof(struct node));
      new->key=k;
      insert(new);
    }
    else if(function[0] == 'f'){
       scanf("%d",&k);
       if(find(t,k)) printf("yes\n");
       else printf("no\n");
    }
  }
  return 0;
}

void Preorder(tree *x){
  if(x == NULL) return;
  else  printf(" %d",x->key);
  if(x->left != NULL) Preorder(x->left);
  if(x->right != NULL) Preorder(x->right);
}
void Inorder(tree *x){
  if(x == NULL) return;
  if(x->left != NULL) Inorder(x->left);
  if(x != NULL) printf(" %d",x->key);
  if(x->right != NULL) Inorder(x->right);
}

void insert(tree *new){
  tree *x;
  tree *y;
  
  y=NULL;
  x=t;
  
  while(x != NULL){
    y=x;
    if(x->key > new->key) x=x->left;
    else x=x->right;
  }
  new->p = y;
  
  if(y == NULL){
    t=new;
    new->left = NULL;
    new->right = NULL;
  }
  else if(y->key > new->key){
    y->left = new;
    new->left = NULL;
    new->right = NULL;
  }
  else{
    y->right = new;
    new->left = NULL;
    new->right = NULL;
  }
}

int find(tree *t,int key){
  if(t == NULL) return 0;
  if(t->key == key) return 1;
  if(t->key > key) return find(t->left,key);
  else return find(t->left,key);
}