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

Node treeMim(Node x){

  while(x->left!=NULL){
    x=x->left;
  }
  return x;
}


Node treeSearch(Node u, int k){
  while(u!=NIL&&k!=u->key){
    if(k<(u->key)){
      u=u->left;
    }else{
      u=u->right;
    }
  }
  return u;
}


Node TreeSuccessor(Node x){
  Node y,p;
  if(x->right!=NULL){
    return treeMim(x->right);
  }
  y=x->parent;
  while(y!=NULL&&x==y->right){
    x=y;
    y=y->parent;
  }
  return y;
}

void TreeDelete(Node z){

  Node x,y;

  if(z->left==NULL||z->right==NULL){
    y=z;
  }else{
    y=TreeSuccessor(z);
  }
  if(y->left!=NULL){
    x=y->left;
  }else{
    x=y->right;
  }
  if(x!=NULL){
    x->parent=y->parent;
  }
  if(y->parent==NULL){
    root=x;
  }else if(y==y->parent->left){
    y->parent->left=x;
  }else{
    y->parent->right=x;
  }

  if(y!=z){
    z->key=y->key;
  }
}

void insert(int k){
  Node y = NIL;
  Node x = root;
  Node z;

  z = malloc(sizeof(struct node));
  z->key = k;
  z->left = NIL;
  z->right = NIL;

  while(x!=NIL){
    y=x;
    if(z->key < x->key){
      x=x->left;
    }else{
      x=x->right;
    }
  }
  z->parent=y;

  if(y==NULL){
    root=z;
  }else if(z->key < y->key){
    y->left=z;
  }else{
    y->right=z;
  }

}

void inorder(Node u){
  if(u!=NIL){
    inorder(u->left);
    printf(" ");
    printf("%d",u->key);
    inorder(u->right);
  }
}
void preorder(Node u){
  printf(" ");
  printf("%d",u->key);
  if(u->left!=NIL){ 
    preorder(u->left);
  }
  if(u->right!=NIL){
    preorder(u->right);
  }
}


int main(){
  int n=0, i, x;
  char com[20];
  scanf("%d", &n);

  for ( i = 0; i < n; i++ ){
    scanf("%s", &com[0]);
    x=0;
    if ( com[0] == 'f' ){
      scanf("%d", &x);
      Node t = treeSearch(root, x);
      if ( t != NIL ) printf("yes\n");
      else printf("no\n");
    } else if ( com[0] == 'i' ){
      scanf("%d", &x);
      insert(x);
    } else if ( com[0] == 'p' ){
      inorder(root);
      printf("\n");
      preorder(root);
      printf("\n");
    } else if(com[0]=='d'){
      scanf("%d",&x);
      TreeDelete(treeSearch(root,x));  
      
    }
  }
  return 0;
}