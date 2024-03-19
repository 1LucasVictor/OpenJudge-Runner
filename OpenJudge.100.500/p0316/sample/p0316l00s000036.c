#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct node{
  int key;
  struct node *prev;
  struct node *left;
  struct node *right;
};
typedef struct node *NodePointer;
void insert(NodePointer);
NodePointer makenode(int);
void InorderPrint(NodePointer);
void PreorderPrint(NodePointer);
NodePointer Node; 
int m;
NodePointer root = NULL;

int main()
{
  int i, key;
  char order[7];
  NodePointer NewNode;
  
  scanf("%d",&m);

  for(i = 0 ; i < m ; i++){
    scanf("%s",order);
    
    if(strcmp(order,"insert") == 0){
      scanf("%d",&key);
      NewNode = makenode(key);
      insert(NewNode); }
    if(strcmp(order,"print") == 0){
      InorderPrint(root);
      printf("\n");
      PreorderPrint(root);
      printf("\n"); }
  }
  
  return 0;
}

void insert(NodePointer z)
{
  NodePointer y, x;
    
  y = NULL; /* xの親 */
  x = root;

  while(x != NULL){   
    y = x; /* 親を設定 */
    if(z->key < x->key) x = x->left;
    else x = x->right; }

  z->prev = y;

  if(y == NULL) root = z;
  else if (z->key < y->key) y->left = z;
  else y->right = z;
    
}

NodePointer makenode(int key)
{
  NodePointer NewNode;

  NewNode = (NodePointer)malloc(sizeof(struct node));

  NewNode->key = key;
  NewNode->left = NULL;
  NewNode->right = NULL;
  
  return NewNode;
}

void InorderPrint(NodePointer u)
{
  if(u == NULL) return; 

  InorderPrint(u->left);
  printf(" %d",u->key);
  InorderPrint(u->right);
}

void PreorderPrint(NodePointer u)
{
  if(u == NULL) return;
  
  printf(" %d",u->key);

  PreorderPrint(u->left);
  PreorderPrint(u->right);
}

