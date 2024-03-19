//Binary Search Tree 1
#include <stdio.h>
#include <stdlib.h>
struct node{
  int key;
  struct node *left,*right,*parent;
};
typedef struct node Node;
Node *rootnode;
Node *NIL;
void Insert(int );
void Preorder(Node *);
void Inorder(Node *);



int main(void){
  int n,i,key;
  char command[6];
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%s",command);
    if(command[0]=='i'){
      scanf("%d",&key);
      Insert(key);
    }
    else if(command[0]=='p'){
      Inorder(rootnode);
      printf("\n");
      Preorder(rootnode);
      printf("\n");
    }
  }

  return 0;
}
void Insert(int key){
  Node *parent=rootnode;
  Node *z;
  Node *y=NIL;
  z=(Node *)malloc(sizeof(Node));
  z->key=key;
  z->left=NIL;
  z->right=NIL;

  while(parent!=NIL){
    y=parent;
    if(key > parent->key)
      parent=parent->right;
    else
      parent=parent->left;
  }
  if(y==NIL)rootnode=z;
  z->parent=y;
  if(y!=NIL){
    if(key > y->key)
      y->right=z;
    else
      y->left=z;
  }
}

void Preorder(Node *node){
  printf(" %d",node->key);
  if(node->left!=NIL)
    Preorder(node->left);
  if(node->right!=NIL)
    Preorder(node->right);
}

void Inorder(Node *node){
  if(node->left!=NIL)
    Inorder(node->left);
  printf(" %d",node->key);
  if(node->right!=NIL)
    Inorder(node->right);
}

