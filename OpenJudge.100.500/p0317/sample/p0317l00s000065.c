#include<stdio.h>
#include<stdlib.h>
#define NIL NULL
struct node{
  struct node *right;
  struct node *left;
  struct node *parent;
  int key;
};
typedef struct node * Node;

Node root;


//出力======================
void inorder(Node u){
  if(u==NIL)return;
  inorder(u->left);
  printf(" %d",u->key);
  inorder(u->right);
}
void preorder(Node u){
  if(u==NIL)return;
  printf(" %d",u->key);
  preorder(u->left);
  preorder(u->right);
}
//==============================
void insert(int k){
  Node y = NIL;
  Node x = root;
  Node z;

  z = malloc(sizeof(struct node));
  z->key = k;
  z->left = NIL;
  z->right = NIL;

  while (x != NIL)
    {
      y = x; 
      if (z->key < x->key)x = x->left; 
      else x = x->right; 
    }
  z->parent = y;

  if (y == NIL)root=z;
  else if (z->key < y->key)y->left = z; // z を y の左の子にする
  else y->right = z; // z を y の右の子にする
}

Node findkey(int key){
  Node X=root;
  
  while(1)
    {
      if(X==NIL)return NIL;
      if(X->key==key)return X;
      if(X->key < key)X=X->right;
      else X=X->left;
    }
}

Node Successor(Node A){//結果的に Aの右の子　の木の最小　つまり左を探してるだけ
  Node X;
  Node B;
  // if(A->right!=NIL)
  // {
  A=A->right;
  while(A->left!=NIL)A=A->left;
  return A;
  //}
  /*else
    {
    A=A->parent;
    while(1)
    {
    if(A==A->parent->left)return A->parent;
    A=A->parent;
    }
    }*/
}

void delete(Node X){
  Node B;
  Node child;

  if(X->right==NIL && X->left==NIL){///////>< ><//
    if(X->parent->right==X)X->parent->right=NIL;
    else X->parent->left=NIL;
    free(X);
  }
  else if(X->right!=NIL && X->left!=NIL){//o o//ココがおかしい
    B= Successor(X);//右の最も左 0><
    X->key=B->key;
    delete(B);
  }
  else{//o ><
    if(X->right==NIL)child=X->left;
    else child=X->right;
    if(X->parent==NIL){
      child->parent=NIL;
      return ;
    }
    if(X->parent->key < X->key)X->parent->right=child;
    else X->parent->left=child;
    child->parent=X->parent;
    free(X);
  }
}


int main(){
  int n, i, x;
  char com[20];
  int count=0;

  scanf("%d", &n);
  for ( i = 0; i < n; i++ ){
    scanf("%s", com);
    if ( com[0] == 'i' ){
      scanf("%d", &x);
      insert(x);
    }
    else if (com[0] == 'f'){//FIND
      scanf("%d", &x);
      if(count)printf("\n");
      if(findkey(x)!=NIL)printf("yes\n");
      else printf("no\n");
    }
    else if(com[0] == 'd'){
      scanf("%d", &x);
      delete(findkey(x));

    }
    else if(com[0] == 'p'){//PRINT
      inorder(root);
      printf("\n");
      preorder(root);
      printf("\n");
    }
  }
  return 0;
}


