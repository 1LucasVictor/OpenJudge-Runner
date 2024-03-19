#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Node1{
  int key1;
  struct Node1 *left,*right,*parent;
};

struct Node1 *root,*NIL;
struct Node1 *treeMinimum(struct Node1 *);
struct Node1 *treeSuccessor(struct Node1 *);
void treeDelete(struct Node1 *z);
struct Node1 *find(struct Node1 *,int);
void insert (int);
void ins_order(struct Node1 *);
void pri_order(struct Node1 *);
int main(){
  int n,i,x,y;
  char order[7];
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%s",order);
    if(strcmp(order,"find")==0){
      scanf("%d",&x);
      struct Node1 *t=find(root,x);
      if(t!=NIL){
	printf("yes\n");
      } else printf("no\n");
    }else if(strcmp(order,"insert")==0){
      scanf("%d",&x);
      insert(x);
    }else if(strcmp(order,"print")==0){
      ins_order(root);
      printf("\n");
      pri_order(root);
      printf("\n");
    }else if(strcmp(order,"delete")==0){
      scanf("%d",&x);
      treeDelete(find(root,x));
    }
  }

  return 0;
}

void insert(int a){
  struct  Node1 *x=root;
  struct Node1 *y=NIL;
  struct  Node1 *z;

  z=(struct Node1 *)malloc(sizeof(struct Node1));
  z->key1=a;
  z->left=NIL;
  z->right=NIL;
  while(x!=NIL){
    y=x;
    if(z->key1 < x->key1){
      x= x->left;
    }else{
      x= x->right;
    }
  }
  z->parent=y;
  if(y==NIL){
    root=z;
  }else{
    if(z->key1<y->key1){
      y->left=z;
    }else{
      y->right=z;
    }
  }
}
void ins_order(struct Node1 *u){
  if(u==NIL)return ;
  ins_order(u->left);
  printf(" %d",u->key1);
  ins_order(u->right);
}
void pri_order(struct Node1 *u){
  if(u==NIL)return ;
  printf(" %d",u->key1);
  pri_order(u->left);
  pri_order(u->right);
}
struct Node1 *find(struct Node1 *u,int k){
  while(u!=NIL && k!=u->key1){
    if(k<u->key1) u=u->left;
    else u=u->right;
  }
  return u;
}
struct Node1 *treeMinimum(struct Node1 *x){
  while(x->left!=NIL)x=x->left;
  return x;
}
struct Node1 *treeSuccessor(struct Node1 *x){
  if(x->right!=NIL)return treeMinimum(x->right);
  struct Node1 *y=x->parent;
  while(y!=NIL && x==y->right){
    x=y;
    y=y->parent;
  }
  return y;
}
void treeDelete(struct Node1 *z){
  struct Node1 *y;
  struct Node1 *x;
  if(z->left==NIL||z->right==NIL)y=z;
  else y=treeSuccessor(z);
  if(y->left!=NIL){
    x=y->left;
  }else{
    x=y->right;
  }
  if(x!=NIL){
    x->parent=y->parent;
  }
  if(y->parent==NIL){
    root=x;
  }else{
    if(y==y->parent->left){
      y->parent->left=x;
    }else{
      y->parent->right=x;
    }
  }
  if(y!=z){
    z->key1=y->key1;
  }
  free(y);
}