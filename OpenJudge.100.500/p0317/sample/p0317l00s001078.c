#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define true 1
#define false 0
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
int Search(NodePointer, int);
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
    if(strcmp(order,"find") == 0){
      scanf("%d",&key);
      if(Search(root,key) == true) printf("yes\n");
      if(Search(root,key) == false) printf("no\n"); }
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

int Search(NodePointer x, int k)
{
  if(x == NULL || k == x->key){
    if(x == NULL) return false;
    else return true; }
  if(k < x->key) return Search(x->left,k);
  else return Search(x->right,k);
}

