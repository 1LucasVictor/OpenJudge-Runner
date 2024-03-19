#include<stdio.h>
#include<string.h>
#include<stdlib.h>
 
struct Node{
  int key;
 struct Node *r,*l,*p;
};
 
struct Node *root,*NIL;
 
void insert(int);
void inorder(struct Node *);
void preorder(struct Node *);
struct Node* find(struct Node *,int);
 
int main(){
  int n,i,x;
  char s[20];
 
  scanf("%d",&n);
 
  for(i=0;i<n;i++){
    scanf("%s",s);
    if(strcmp(s,"find")==0){
      scanf("%d",&x);
      struct Node *t = find(root,x);
      if(t != NIL)printf("yes\n");
      else printf("no\n");
    }
    else if(strcmp(s,"insert")==0){
      scanf("%d",&x);
      insert(x);
    }
    else if(strcmp(s,"print")==0){
      inorder(root);
      printf("\n");
      preorder(root);
      printf("\n");
    }
  }
 
  return 0;
}
 
void insert(int k){
  struct Node *y = NIL,*x = root,*z;
 
  z = malloc(sizeof(struct Node));
  z->key = k;
  z->l = NIL;
  z->r = NIL;
 
  while(x != NIL){
    y = x;
    if(z->key < x->key)x = x->l;
    else x = x->r;
  }
 
  z->p = y;
  if(y == NIL)root = z;
  else {
    if(z->key < y->key)y->l = z;
    else y->r = z;
  }
}
 
void inorder(struct Node *u){
 
  if(u == NIL)return;
  inorder(u->l);
  printf(" %d",u->key);
  inorder(u->r);
}
 
void preorder(struct Node *u){
 
  if(u == NIL)return;
  printf(" %d",u->key);
  preorder(u->l);
  preorder(u->r);
}
 
struct Node* find(struct Node *u,int k){
 
  while(u != NIL && k != u->key){
    if(k < u->key)u = u->l;
    else u = u->r;
  }
  return u;
}