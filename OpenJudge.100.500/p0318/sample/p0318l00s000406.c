#include <stdio.h>
#include <stdlib.h>

typedef struct treeNode{
  int key;
  struct treeNode *p;
  struct treeNode *left;
  struct treeNode *right;
}Node;

void printPreorder(Node *);
void printInorder(Node *);
Node * insert(Node *, Node *);
int find(Node *, int);
Node * delete(Node *, int);
Node * findSuccessor(Node *);


int main(){
  Node *T = NULL;
  int m, i, j=0, l, root, k;
  Node *temp;
  char s[7];

  scanf("%d", &m);

  for(i=0; i<m; i++){
    scanf("%s", s);

    if(s[0] == 'i'){
      temp = malloc(sizeof(Node));
      scanf("%d", &(temp->key));
      temp->left = NULL;
      temp->right = NULL;
      T = insert(T, temp);
      //printf("T->key = %d\n", T->key);
    }else if(s[0] == 'p'){
      //printf("ok\n");
      printInorder(T);
      printf("\n");
      printPreorder(T);
      printf("\n");
    }else if(s[0] == 'f'){
      scanf("%d", &k);
      if(find(T, k)){
	printf("yes\n");
      }else{
	printf("no\n");
      }
    }else{
      scanf("%d", &k);
      delete(T, k);
    }
  }
  
  return 0;
}

void printPreorder(Node *N){
  printf(" %d", N->key);

  if(N->left != NULL){
    printPreorder(N->left);
  }

  if(N->right != NULL){
    printPreorder(N->right);
  }

}

void printInorder(Node *N){

  if(N->left != NULL){
    printInorder(N->left);
  }

  printf(" %d", N->key);

  if(N->right != NULL){
    printInorder(N->right);
  }

}

Node * insert(Node *T, Node *z){
  Node *x, *y;

  y = NULL; // xの親
  x = T;

  while(x != NULL){
    y = x;
    if(z->key < x->key){
      x = x->left;
    }else{
      x = x->right;
    }
  }

  z->p = y;
  
  if( y == NULL){
    T = z;
  }else if(z->key < y->key){
    y->left = z;
  }else{
    y->right = z;
  }

  return T;

}

int find(Node *T, int k){
  while(T != NULL && k != T->key){
    if(k < T->key){
      T = T->left;
    }else{
      T = T->right;
    }
  }
  if(T == NULL) return 0;
  if(T->key == k) return 1;
}

Node * delete(Node *T, int k){

  Node *z;

  while(T != NULL && k != T->key){
    if(k < T->key){
      T = T->left;
    }else{
      T = T->right;
    }
  }


  if(T->left == NULL && T->right == NULL){
    if(T->p->left == T){
      T->p->left = NULL;
    }else{
      T->p->right = NULL;
    }
  }else if(T->left != NULL && T->right == NULL){
    T->left->p = T->p;
    if(T->p->left == T){
      T->p->left = T->left;
    }else{
      T->p->right = T->left;
    }
  }else if(T->left == NULL && T->right != NULL){
    T->right->p = T->p;
    if(T->p->left == T){
      T->p->left = T->right;
    }else{
      T->p->right = T->right;
    }
  }else{
    z = findSuccessor(T);
    T->key = z->key;
    z->right->p = z->p;
    z->p->left = z->right;
  }

  return T;

}

Node * findSuccessor(Node *x){

  Node *y;

  if(x->right != NULL){
    while(x->left != NULL){
      x = x->left;
      //printf("ok\n", x->key);
    }
    return x;
  }

  y = x->p;

  while(y != NULL && x == y->right){
    x = y;
    y = y->p;
    printf("ok\n");
  }

  return y;
}