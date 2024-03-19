#include <stdio.h>
#include <stdlib.h>

struct node{
  struct node *right;
  struct node *left;
  struct node *parent;
  int key;
};
typedef struct node * Node;
#define NIL NULL

void insert(int);
void inorder(Node);
void preorder(Node);
Node  find(Node,int);
void delete(Node );
Node treeSuccessor(Node);
Node treeMinimum(Node);
Node root;
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
        x = x->left;
    }else{
      x = x->right;
    }
  }
  z->parent=y;
  if(y==NIL){
    root=z;
  }
  else {if(z->key < y->key){
      y->left = z;
    }else{
        y->right = z;
    }
  }
}

void inorder(Node t){
  if(t==NIL) return;
  inorder(t->left);
  printf(" %d",t->key);
  inorder(t->right);
}
void preorder(Node t){
  if(t==NIL)return;
  printf(" %d",t->key);
  preorder(t->left);
  preorder(t->right);
}
Node find(Node t,int k){
  while(t!=NIL && k!=t->key){
    if(k<t->key)
      t=t->left;
    else
      t=t->right;
  }
  return t;
}
void delete(Node a){
  Node y;
  Node x;
  if(a->left==NIL||a->right==NIL)
    y=a;
  else
    y=treeSuccessor(a);
  if(y->left!=NIL){
    x=y->left;
  }
  else{
    x=y->right;
  }
  if(x!=NIL){
    x->parent=y->parent;
  }
  if(y->parent==NIL){
    root=x;
  }
  else{
    if(y==y->parent->left){
      y->parent->left=x;
    }
    else{
      y->parent->right=x;
    }
  }
  if(y!=a){
    a->key=y->key;
  }
  free(y);
}
Node treeSuccessor(Node x){
  Node y;
  if(x->right!=NIL)
    return treeMinimum(x->right);
  y=x->parent;
  while(y!=NIL&&x==y->right){
    x=y;
    y=y->parent;
  }
  return y;
}
Node treeMinimum(Node x){
  while(x->left!=NIL){
    x=x->left;
  }
  return x;
}
    
int main(){
  int n, i, a;
  char com[20];
  Node u;
  scanf("%d", &n);

  for ( i = 0; i < n; i++ ){
    scanf("%s", com);
    if ( com[0] == 'i' ){
      scanf("%d", &a);
      insert(a);
    } else if ( com[0] == 'p' ){
      inorder(root);
      printf("\n");
      preorder(root);
      printf("\n");
    }
    else if ( com[0] == 'f' ){
      scanf("%d", &a);
      u=find(root,a);
      if(u!=NIL)printf("yes\n");
      else printf("no\n");
    }
    else if(com[0] == 'd'){
      scanf("%d",&a);
      delete(find(root,a));
    }
  }
  return 0;
}
