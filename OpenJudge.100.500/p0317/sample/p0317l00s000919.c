#include <stdio.h>
#include <stdlib.h>
#include<string.h>
struct Node{
  struct Node *right;
  struct Node *left;
  struct Node *p;
  int key;
};
struct Node *root,*NIL;
//#define NIL NULL

struct Node* find(struct Node *u,int k){
while(u != NIL && k != u->key){
  if(k < u->key) u=u->left;
  else u=u->right;
}
return u;
}
void insert(int k){
  struct Node *y = NIL;
  struct Node *x = root;
  struct Node *z = malloc(sizeof(struct Node)); 
  z->key = k;                                                                   
  z->left = NIL;                                                                
  z->right = NIL;
  while (x!= NIL){
    y=x;
    if(z->key<x->key)x=x->left;
    else x=x->right;
  }
    z->p=y;
    if(y==NIL)root=z;
else if(z->key < y->key){
    y->left=z;
  }else{
    y->right=z;
    }                                      
  }
void inorder(struct Node *u){
  if(u!=NIL){
  inorder(u->left);
  printf(" %d",u->key);
  inorder(u->right);
  }
}
void preorder(struct Node *u){
if(u!=NIL){
	printf(" %d", u->key);
	preorder(u->left);
	preorder(u->right);
  }
}

int main(){
  int n, i, x, z;
  char com[20];
  scanf("%d", &n);
 for ( i = 0; i < n; i++ ){
    scanf("%s", com);
    if(com[0]== 'f'){
      scanf("%d", &x);
      struct Node *t =find(root,x);
      if(t == NIL)printf("no\n");
      else printf("yes\n");
    }
    else if ( com[0] == 'i' ){
      scanf("%d", &z);
      insert(z);
    } else {
      inorder(root);
      printf("\n");
      preorder(root);
      printf("\n");
    }
  }
  return 0;
}


