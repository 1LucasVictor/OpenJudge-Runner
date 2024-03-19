#include <stdio.h>
#include <stdlib.h>

struct Node {
    int key;
    struct Node *parent,*left,*right;
};

void insert(int);
void inorder(struct Node *);
void preorder(struct Node *u);

struct Node *root,*NIL;

int main(){
  int m,i,k;
  char com[20];

  scanf("%d",&m);

  for(i=0;i<m;i++){
  scanf("%s",com);
 
  if(com[0]=='i'){
    scanf("%d",&k);
    insert(k);
  }
  else if (com[0]=='p'){
  inorder(root);
  printf("\n");
  preorder(root);
  printf("\n");
    }
  }
  return 0;
}


void insert(int k){
  struct Node *y=NIL;
  struct Node *x=root;
  struct Node *z;

  z=(struct Node *)malloc(sizeof(struct Node));

  z->key = k;
  z->left = NIL;
  z->right = NIL;

  while(x!=NIL){
    y=x;

    if(z->key < x->key)   x=x->left;
    else  x=x->right;
  }
  z->parent=y;
    
  if(y==NIL)  root=z;
  else{
    if(z->key < y->key) y->left=z;
    else y->right=z;
  }
}

void inorder(struct Node *u){
if(u==NIL)  return;

inorder(u->left);
printf(" %d",u->key);
inorder(u->right);

}

void preorder(struct Node *u){
if(u==NIL)  return;

printf(" %d",u->key);
preorder(u->left);
preorder(u->right);
}



