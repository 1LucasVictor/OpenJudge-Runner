#include <stdio.h>
#include <string.h>
#include <stdlib.h>
 
struct Node{
  int key;
  struct Node *right, *left, *parent;
};
 
struct Node *root,*NIL;
 
void insert(int);
void inorder(struct Node *);
void preorder(struct Node *);
 
int main(){
  int comnum,i,z;
  char s[10];
  scanf("%d",&comnum);
 
  for(i=0; i<comnum; i++){
    scanf("%s",s);
    if(strcmp(s,"insert") == 0){
      scanf("%d",&z);
      insert(z);
    }
    else if(strcmp(s,"print") == 0){
      inorder(root);
      printf("\n");
      preorder(root);
      printf("\n");
    }
  }
  return 0;
}
 
void insert(int k){
  // x の親
  struct Node *y = NIL;
  //x = 'T の根'
  struct Node *x = root;
  struct Node *z;
 
  z = (struct Node *)malloc(sizeof(struct Node));
  z->key = k;
  z->left = NIL;
  z->right = NIL;
 
  while( x != NIL){
    y = x;// 親を設定
    if(z->key < x->key) 
      x = x->left;// 左の子へ移動
    
    else
      x = x->right;// 右の子へ移動
  } 
  
  z->parent = y;
  if(y == NIL)// T が空の場合
    root = z;
  else
    if(z->key < y->key )
      y->left = z;
    else 
      y->right = z;
  
}
 
void inorder(struct Node *u){
  if(u == NIL) return;
  inorder(u->left);
  printf(" %d", u->key);
  inorder(u->right);
}
 
void preorder(struct Node *u){
  if(u == NIL) return;
  printf(" %d", u->key);
  preorder(u->left);
  preorder(u->right);
}

