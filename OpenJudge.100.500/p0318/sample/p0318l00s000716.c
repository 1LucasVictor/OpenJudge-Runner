#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX 1000000


struct node{
  int key;
  struct node *right;
  struct node *left;
  struct node *parent;
};
  typedef struct node Node;
Node *root,*NIL;

void insert(int k){
  Node *y = NIL;
  Node *x = root;
  Node *z;

  z=(Node *)malloc(sizeof(Node));
  z->key =k;
  z->left = NIL;
  z->right = NIL;

  while(x != NIL){
    //leafのところまで探索
    y = x;
    if(z->key < x->key){
      x = x->left;
    }
    else{
      x = x->right;
    }
  }
  z->parent = y;
  //右に入るか左に入るかを考える
  if( y == NIL)root = z;
  else{
    if(z->key < y->key ){
      y->left=z;
    }
    else{
      y->right = z;
    }
  }       
}
void inorder(Node *u){ 
  if(u == NIL)return;
  inorder(u->left);
  printf(" %d",u->key);
  inorder(u->right);
}
void print(Node *u){
  if(u == NIL)return;
  printf(" %d",u->key);
  print(u->left);
  print(u->right);
}

Node *find(Node *x,int k){
  while(x != NIL && k != x->key){
    if(k < x->key)x = x->left;
    else x = x->right;
  }
  return x;
}

Node *treeMinimum(Node *x){
  while(x->left !=NIL)x = x->left;
  return x;
}


Node * treeSuccessor(Node *x){
  if(x->right != NIL)return treeMinimum(x->right);
  Node *y = x->parent;
  while(y != NIL && x == y->right){
    x = y;
    y = y->parent;
  }
  return y;
}


void delete(Node *z){
  int i,j;
  Node *y,*x;
  
  if(z->left == NIL || z->right == NIL) y = z;
  else y = treeSuccessor(z);
  //yの子 xを決める
  if(y->left != NIL){
    x = y->left;
  }
  else{
    x = y->right;
  }

  if(x !=NIL){
    x->parent = y->parent;
  }

  if(y->parent == NIL){
    root = x;
  }
  else{
    if(y == y->parent->left){
      y->parent->left = x;
    }
    else{
      y->parent->right = x;
    }
  }

  if(y != z){
    z->key = y->key;
  }

  free(y);
  
}

int main(){
  int i,j,n,k;
  char s[10];
  Node *t;
  
  scanf("%d",&n);
  for(i=0; i<n; i++){
    scanf("%s",s);
    if(s[0]=='i'){
      scanf("%d",&k);
      insert(k);
    }
    else if(s[0]=='p'){
      //print
      inorder(root);
      printf("\n");
      print(root);
      printf("\n");
    }
    else if(s[0]=='f'){
      //find
      scanf("%d",&k);
      t = find(root,k);
      if(t != NIL)printf("yes\n");
      else printf("no\n");
    }
    else if(s[0]=='d'){
      //delete
      scanf("%d",&k);
      delete(find(root,k));
    }
  }
  return 0;
}


