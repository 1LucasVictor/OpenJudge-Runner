#include<stdio.h>
#include<stdlib.h>
#define N 50000
struct jeep{
  int key;
  struct jeep *right;
  struct jeep *left;
  struct jeep *parent;
};
typedef struct jeep * com;
void insert(int);
void pre(com);
void in(com);
int search(com, int);
com root;
int main(){
  com z;
  int key,total,i,x,divala;
  char A[N];
  scanf("%d",&total);
  for(i = 0 ; i < total ; i++){
    scanf("%s",A);
      if ( A[0] == 'i' ){
        scanf("%d",&key);
        insert(key);
      }
      else if ( A[0] == 'p' ){
        in(root);
        printf("\n");
        pre(root);
        printf("\n");
      }
      else if ( A[0] == 'f' ){
        scanf("%d",&key);
        divala = search(root,key);

        if(divala == 1) printf("yes\n");
        else if(divala == 0) printf("no\n");
      }
  }
  return 0;
}
void insert(int k){
  com x= root;
  com y = NULL;
  com z;
  z = malloc(sizeof(struct jeep));
  z->key = k;
  z->left = NULL;
  z->right = NULL;
  while(x!=NULL){
    y = x;
    if(z->key < x->key){
      x = x->left;    }
    else{
      x = x->right;
    }
  }
  z->parent= y;
  if(y==NULL){
    root = z;
  }
  else if(z->key<y->key){
    y->left =z;
  }
  else{
    y->right =z;
  }
}
void in(com A){
  if(A != NULL){
    in(A->left);
    printf(" %d",A->key);
    in(A->right);
  }
}
   void pre(com A){
  if(A!=NULL){
    printf(" %d",A->key);
    pre(A->left);
    pre(A->right);
  }
}
int search(com A, int key){
   if(A == NULL) return 0;
  else if(A->key == key) return 1;

  if(key < A->key)  return search(A->left,key);
  else  return search(A->right,key);

}
