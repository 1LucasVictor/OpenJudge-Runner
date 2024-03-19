#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define NO NULL
struct node{
  int key;
  struct node *p,*l,*r;
};
typedef struct node *Node;
Node root;

void insert(int k){
  Node y=NO;
  Node x=root;
  Node z;
  z=malloc(sizeof(struct node));
  z->key=k;
  z->l=NO;
  z->r=NO;
  while(x!=NO){
    y=x;
    if(z->key < x->key)x=x->l;
    else x=x->r;
  }
  z->p=y;
  if(y==NO)root=z;
  else if(z->key<y->key)y->l=z;
  else y->r=z;
}
Node find(Node k,int x){
  while(k!=NO && x != k->key){
    if(x < k->key)k=k->l;
    else k=k->r;
  }
  return k;
}
void inorder(Node u){
  if(u==NO)return;
  inorder(u->l);
  printf(" %d",u->key);
  inorder(u->r);
}
void preorder(Node u){
  if(u==NO)return;
  printf(" %d",u->key);
  preorder(u->l);
  preorder(u->r);
}
int main(){
  int n,i,j,h;
  char c[20];
  Node s;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%s",c);
    if(c[0]=='i'){
      scanf("%d",&j);
      insert(j);
    }
    else if(c[0]=='f'){
      scanf("%d",&j);
      s=find(root,j);
      if(s==NO)printf("no\n");
      else printf("yes\n");
    }
    else{
      inorder(root);
      printf("\n");
      preorder(root);
      printf("\n");
    }
  }
  return 0;
}

