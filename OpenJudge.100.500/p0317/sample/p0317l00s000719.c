#include<stdio.h>
#include<stdlib.h>
struct node{
  int key;
  struct node *right,*left,*parent;
};
struct node *root,*NIL;
struct node * find(struct node *u,int k){
  while(u!=NIL &&k!=u->key){
    if(k<u->key)u=u->left;
    else u=u->right;
  }
  return u;
}
void insert(int k){
  struct node *y =NIL;
  struct node *x =root;
  struct node *z;

  z = (struct node*)malloc(sizeof(struct node));
  z->key =k;
  z->left =NIL;
  z->right =NIL;
  while(x!=NIL){
    y=x;
    if(z->key < x->key){
      x=x->left;
    }else{
      x=x->right;
    }
  }
  z->parent=y;
  if(y==NIL)root=z;
  else if(z->key < y->key)y->left=z;
  else y->right=z;
}
void inorder(struct node *u){
  if(u==NIL)return;
  inorder(u->left);
  printf(" %d",u->key);
  inorder(u->right);
}
void preorder(struct node *u){
  if(u==NIL)return;
  printf(" %d",u->key);
  preorder(u->left);
  preorder(u->right);
}
int main(){
  int n,i,x;
  char com[20];
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%s",com);
    if(com[0]=='f'){
      scanf("%d",&x);
      struct node *t = find(root,x);
      if(t!=NIL)printf("yes\n");
      else printf("no\n");
    }else if(com[0]=='i'){
      scanf("%d",&x);
      insert(x);
    }else if(com[0]=='p'){
      inorder(root);
      printf("\n");
      preorder(root);
      printf("\n");
    }
  }
}

