#include<stdio.h>
#include<string.h>
#include<stdlib.h>
 
struct Node{
  int keydata;
  struct Node *left,*right,*parent;
};
 
struct Node *root,*NIL;
void insert(int);
 
void preorder(struct Node *);
 
void inorder(struct Node *);

struct Node * find(struct Node * ,int);
int main(){
 
  int n,i,x;
  char P[7];
  struct Node *t;
  
 
  scanf("%d",&n);
 
  for(i=0;i<n;i++)
    {
      scanf("%s",P);
      if(strcmp("insert",P)==0){
    scanf("%d",&x);
    insert(x);
      }
      else if(strcmp("find",P)==0){
	scanf("%d",&x);
	t=find(root,x);
	if(t==NIL)printf("no\n");
	else printf("yes\n");
      }
      else
    {
      inorder(root);
      printf("\n");
      preorder(root);
      printf("\n");
    }
    }
 
 
  return 0;
}
 
void insert(int a)
{
  struct Node *y=NIL,*x=root;
 
  struct Node *z;
 
  z=(struct Node *)malloc(sizeof(struct Node));
 
  z->keydata=a;
 
  z->left=NIL;
 
  z->right=NIL;
 
  while(x!=NIL)
    {
      y=x;
 
      if(z->keydata < x->keydata) x=x->left;
      else x=x->right;
    }
 
  z->parent=y;
 
  if(y==NIL) root = z;
 
  else{ if(z->keydata < y->keydata) y->left = z;
 
  else y->right = z;
}
}
void preorder(struct Node *u){
  if (u == NIL)
    return ;
  printf(" %d",u->keydata);
  preorder(u->left);
  preorder(u->right);
}
 
void inorder(struct Node *u){
  if (u == NIL)
    return ;
  inorder(u->left);
  printf(" %d",u->keydata);
  inorder(u->right);
}

struct Node * find(struct Node *r, int k){
  while(r!=NIL && k!=r->keydata){
    if(k<r->keydata) r= r->left;
    else r=r->right;
  }
  return r;
}