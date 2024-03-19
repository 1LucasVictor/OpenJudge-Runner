#include<stdio.h>
#include<stdlib.h>


struct node{
  struct node *right;
  struct node *left;
  struct node *parent;
  int key;
};
typedef struct node *Node;
#define NIL NULL


Node root;

Node treeMini(Node x);
Node treeMax(Node x);
Node treeSearch(Node u, int v);
Node treeSuccessor(Node u);
void treeDelete(Node z);
void insert(int k);
void inorder(Node u);
void preorder(Node u);

int main(){
  int n, i, x;
  char com[20];
  scanf("%d", &n);

  for ( i = 0; i < n; i++ ){
    scanf("%s", com);
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
    } else if ( com[0] == 'd' ){
      scanf("%d", &x);
      treeDelete(treeSearch(root, x));
    }
  }

  return 0;
}



Node treeMini(Node x){

  while(x->left!=NIL){
    x=x->left;
  }

  return x;
}

Node treeMax(Node x){

  while(x->right!=NIL){
    x=x->right;
  }

  return x;
  
}

Node treeSearch(Node u, int k){
  u=root;

  while(u!=NIL && u->key!=k){
    if(k < u->key) u=u->left;
    else u=u->right;
  }

  return u;
  
}

Node treeSuccessor(Node x){
  Node data;

  if(x->right!=NIL) return treeMini(x->right);

  data=x->parent;

  while(data!=NIL && x==data->right){
    x=data;
    data=data->parent;
  }

  return data;
}

void treeDelete(Node z){
  Node data;
  Node res;

  if(z->left==NIL || z->right==NIL) data=z;
  else data=treeSuccessor(z);

  if(data->left!=NIL) res=data->left;
  else res=data->right;

  if(res!=NIL) res->parent=data->parent;

  if(data->parent==NIL) root=res;
  else if(data==data->parent->left) data->parent->left=res;
  else data->parent->right=res;

  if(data!=z) z->key=data->key;
  
}

void insert(int k){
  Node y = NIL;
  Node x = root;
  Node z;

  z=malloc(sizeof(struct node));
  z->key=k;
  z->left=NIL;
  z->right=NIL;

  while(x!=NIL){
    y=x;
    
    if(z->key < x->key) x=x->left;
    else x=x->right;
  }

  z->parent=y;

  if(y==NIL) root=z;
  else if (z->key < y->key) y->left=z;
  else y->right=z;

}

void inorder(Node u){
  
  if(u==NIL) return;

  if(u->left!=NIL) inorder(u->left);
  
  printf(" %d",u->key);
  
  if(u->right!=NIL) inorder(u->right);
  
}

void preorder(Node u){

  if(u==NIL) return;
  
  printf(" %d",u->key);
  
  if(u->left!=NIL) preorder(u->left);
  

  if(u->right!=NIL) preorder(u->right);
  
  
}

