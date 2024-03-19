#include<stdio.h>
#include<stdlib.h>

struct node{
  struct node *right;
  struct node *left;
  struct node *parent;
  int key;
};
typedef struct node * Node;

#define NIL NULL

Node root;

Node treeMax(Node a){
  while(a->right!=NIL)a=a->right;
  return a;

}

Node treeMini(Node a){
  while(a->left!=NIL){
      a=a->left;
  }
  return a;

}



Node treeSearch(Node a, int b){
  while(a!=NIL&&b!=a->key){
    if(b<a->key)a=a->left;
    else a=a->right;
  }
  return a;
}

Node treeSuccess(Node a){
  Node b;
  if(a->right!=NIL)return treeMini(a->right);

  b=a->parent;
  while(b!=NIL && a==b->right){
    a=b;
    a=b->parent;
  }
  return a;
}

void treeDel(Node a){
  Node b;
  Node c; 
  if(a->left==NIL||a->right==NIL)b=a;
  else b=treeSuccess(a);

  if(b->left!=NIL)c=b->left;
  else c=b->right;

  if(c!=NIL)c->parent=b->parent;

  if(b->parent!=NIL)root=c;
  else if(b==b->parent->left)b->parent->left=c;
  else b->parent->right=c;

  if(b!=a)a->key=b->key;
  
}

void insert(int a){
  Node y = NIL;
  Node x = root;
  Node z;

  z = malloc(sizeof(struct node));
  z->key = a;
  z->left = NIL;
  z->right = NIL;

  while(x!=NIL){
    y=x;
    if(z->key<x->key)
      x=x->left;
    else x=x->right;
  }
  z->parent=y;

  if(y==NIL)
    root=z;
  else if(z->key<y->key)
    y->left=z;
  else
    y->right=z;
    
}

void inorder(Node a){
  if(a==NIL)return;
  inorder(a->left);
  printf(" %d",a->key);
  inorder(a->right);
}
void preorder(Node a){
  if(a==NIL)return;
  printf(" %d",a->key);
  preorder(a->left);
  preorder(a->right);
}


int main(){
  int n, i, a;
  char com[20];
  scanf("%d", &n);

  for ( i = 0; i < n; i++ ){
    scanf("%s", com);
    if ( com[0] == 'f' ){
      scanf("%d", &a);
      Node t = treeSearch(root, a);
      if ( t != NIL ) printf("yes\n");
      else printf("no\n");
    } else if ( com[0] == 'i' ){
      scanf("%d", &a);
      insert(a);
    } else if ( com[0] == 'p' ){
      inorder(root);
      printf("\n");
      preorder(root);
      printf("\n");
    } else if ( com[0] == 'd' ){
      scanf("%d", &a);
      treeDel(treeSearch(root, a));
    }
  }

  return 0;
}
