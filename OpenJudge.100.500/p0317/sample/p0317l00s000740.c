#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node{
  struct node *left;
  struct node *right;
  struct node *parent;
  int key;
};
struct node *T;
void Insert(int);
void Inorder(struct node*);
void Preorder(struct node*);
int Find(int);
void Free(struct node*);
int main(){
  int n, i, key;
  char func[6];
  T = (struct node *)malloc(sizeof(struct node) * 1);
  T->parent = T->left = T->right = NULL;
  T->key = -1;
  scanf("%d",&n);
  for(i=0; i<n; i++){
    scanf("%s",&func);
    if(strcmp(func,"insert") == 0){
      scanf("%d",&key);
      Insert(key);
    }
    else if(strcmp(func,"print") == 0){
      Inorder(T);
      printf("\n");
      Preorder(T);
      printf("\n");
    }
    else if(strcmp(func,"find") == 0){
      scanf("%d",&key);
      Find(key) ? printf("yes\n") : printf("no\n");
    }
  }
  Free(T);
  return 0;
}

void Inorder(struct node* X){
  if(X != NULL){
    Inorder(X->left);
    printf(" %d",X->key);
    Inorder(X->right);
  }
}

void Preorder(struct node* X){
  if(X != NULL){
    printf(" %d",X->key);
    Preorder(X->left);
    Preorder(X->right);
  }
}

void Free(struct node* X){
  if(X != NULL){
    Free(X->left);
    Free(X->right);
    free(X);
  }
}

void Insert(int key){
  struct node *x, *y, *S;
  if(T->key == -1){
    T->key = key;
    return;
  }
  S = (struct node *)malloc(sizeof(struct node) * 1);
  S->key = key;
  S->parent = S->left = S->right = NULL;
  x = T;
  while(x != NULL){
    y = x;
    if(key < x->key)
      x = x->left;
    else
      x = x->right;
  }
  S->parent = y;
  if(S->key < y->key)
    y->left = S;
  else
    y->right = S;
}

int Find(int key){
  struct node *X;
  for(X=T; X != NULL;){
    if(X->key > key)
      X = X->left;
    else if(X->key < key)
      X = X->right;
    else return 1;
  }
  return 0;
}