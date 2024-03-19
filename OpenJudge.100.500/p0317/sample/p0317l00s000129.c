#include <stdio.h>
#include <stdlib.h>

struct Node{
  int key;
  struct Node *parent;
  struct Node *left;
  struct Node *right;
};

#define NIL NULL
typedef struct Node* NodePointer;
NodePointer root;

void inOrder(NodePointer);
void preOrder(NodePointer);
void print(void);
void insert(int);
NodePointer makeNode(int);
int find(int);

int main(){
  int Q,i,x;
  char order[7];
  scanf("%d",&Q);
  for(i = 0 ; i < Q ; i++){
    scanf("%s",order);
    if(order[0] == 'i'){
      scanf("%d",&x);
      insert(x);
    }else if(order[0] == 'f'){
      scanf("%d",&x);
      puts(find(x) ? "yes" : "no");
    }else{
      print();
    }
  }
  return 0;
}

void inOrder(NodePointer x){
  if(x == NIL){ return; }
  inOrder(x->left);
  printf(" %d",x->key);
  inOrder(x->right);
}

void preOrder(NodePointer x){
  if(x == NIL){ return; }
  printf(" %d",x->key);
  preOrder(x->left);
  preOrder(x->right);
}

void print(){
  inOrder(root); printf("\n");
  preOrder(root); printf("\n");
}

void insert(int key){
  NodePointer x = root,y = NIL;
  NodePointer z = makeNode(key);
  while(x != NIL){
    y = x;
    if(z->key < x->key){
      x = x->left;
    }else{
      x = x->right;
    }
  }
  z->parent = y;
  if(y == NIL){
    root = z;
  }else if(z->key < y->key){
    y->left = z;
  }else{
    y->right = z;
  }
}

NodePointer makeNode(int key){
  NodePointer newNode = malloc(sizeof(struct Node));
  newNode->key = key;
  newNode->left = newNode->right = NIL;
  return newNode;
}

int find(int key){
  NodePointer x = root;
  while(x != NIL){
    if(key < x->key){
      x = x->left;
    }else if(key > x->key){
      x = x->right;
    }else{
      return 1;
    }
  }
  return 0;
}