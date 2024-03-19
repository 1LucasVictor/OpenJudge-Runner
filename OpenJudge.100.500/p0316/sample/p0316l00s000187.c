#include<stdio.h>
#include<stdlib.h>
 struct node{
  struct node *left;
  struct node *right;
  struct node *parent;
  int key;
};
typedef struct node * NodePointer;

void insert(int);
void preorder(NodePointer);
void inorder(NodePointer);
NodePointer createNode(void);
NodePointer root = NULL;
NodePointer NIL = NULL;

main(){
  int m, i, k;
  char order[10];
  scanf("%d", &m);
  for(i = 0; i < m; i++){
    scanf(" %s", order);
    if(order[0]=='i'){
      scanf(" %d",&k);
      insert(k);
    }
    else if(order[0]=='p'){
      inorder(root);
      printf("\n");
      preorder(root);
      printf("\n");
    }
  }
  return 0;
}


NodePointer createNode(){
  NodePointer node = malloc(sizeof(struct node));
  node->left = NULL;
  node->right = NULL;
  node->parent = NULL;
  node->key = 0;
  return node;
}


void insert(int key){
  NodePointer z = createNode();
  NodePointer x = root;
  NodePointer y = NIL;
  z->key = key;
  while(x != NIL){
    y = x;
    if(z->key < x->key) x = x->left;
    else x = x->right;
  }
  z->parent = y;
  if(y == NIL) root = z;
  else if(z->key < y->key) y->left = z;
  else y->right = z;
}


void preorder(NodePointer p){
  printf(" %d", p->key);
  if(p->left != NULL) preorder(p->left);
  if(p->right != NULL) preorder(p->right);
}

void inorder(NodePointer p){
  if(p->left != NULL) inorder(p->left);
  printf(" %d", p->key);
  if(p->right != NULL) inorder(p->right);
}