#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct node{
  struct node *left;
  struct node *right;
  struct node *parent;
  int key;
}node;
node *T;
void Insert(int);
void Inorder(node*);
void Preorder(node*);
int Find(int);
void Delete(int);
node* Successor(node*);
node* Minimum(node*);
node* Maximum(node*);
void Free(node*);
int main(){
  int n, i, key;
  char func[6];
  T = (node *)malloc(sizeof(node) * 1);
  T->parent = T->left = T->right = NULL;
  T->key = -1;
  scanf("%d",&n);
  for(i=0; i<n; i++){
    scanf("%s",func);
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
    else if(strcmp(func,"delete") == 0){
      scanf("%d",&key);
      Delete(key);
    }
  }
  Free(T);
  return 0;
}

void Inorder(node* x){
  if(x != NULL){
    Inorder(x->left);
    printf(" %d",x->key);
    Inorder(x->right);
  }
}

void Preorder(node* x){
  if(x != NULL){
    printf(" %d",x->key);
    Preorder(x->left);
    Preorder(x->right);
  }
}

void Free(node* x){
  if(x != NULL){
    Free(x->left);
    Free(x->right);
    free(x);
  }
}

void Insert(int key){
  node *x, *y, *R;
  if(T->key == -1){
    T->key = key;
    return;
  }
  R = (node *)malloc(sizeof(node) * 1);
  R->key = key;
  R->parent = R->left = R->right = NULL;
  x = T;
  while(x != NULL){
    y = x;
    if(key < x->key)
      x = x->left;
    else
      x = x->right;
  }
  R->parent = y;
  if(R->key < y->key)
    y->left = R;
  else
    y->right = R;
}

int Find(int key){
  node *x;
  for(x=T; x != NULL;){
    if(x->key > key)
      x = x->left;
    else if(x->key < key)
      x = x->right;
    else return 1;
  }
  return 0;
}

void Delete(int key){
  node *x, *y, *z;
  for(x=T; x != NULL;){
    if(x->key > key)
      x = x->left;
    else if(x->key < key)
      x = x->right;
    else break;
  }
  z = x;
  if(z->left == NULL || z->right == NULL)
    y = z;
  else
    y = Successor(z);
  if(y->left != NULL)
    x = y->left;
  else
    x = y->right;
  if(x != NULL)
    x->parent = y->parent;
  if(y->parent == NULL)
    T = x;
  else if(y == y->parent->left)
    y->parent->left = x;
  else
    y->parent->right = x;
  if(y != z)
    z->key = y->key;
}

node* Successor(node* x){
  node *y;
  if(x->right != NULL)
    return Minimum(x->right);
  y = x->parent;
  while(y != NULL && x == y->right){
    x = y;
    y = y->parent;
  }
  return y;
}

node* Minimum(node* x){
  while(x->left != NULL)
    x = x->left;
  return x;
}

node* Maximum(node* x){
  while(x->right != NULL)
    x = x->right;
  return x;
}