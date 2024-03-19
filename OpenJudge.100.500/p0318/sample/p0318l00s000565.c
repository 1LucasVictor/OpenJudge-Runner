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
NodePointer findNode(int);
NodePointer treeSuccessor(NodePointer);
NodePointer treeMinimum(NodePointer);
NodePointer treeMaximum(NodePointer);
void deleteNode(int);

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
    }else if(order[0] == 'd'){
      scanf("%d",&x);
      deleteNode(x);
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

NodePointer findNode(int key){
 NodePointer x = root;
  while(x != NIL){
    if(key < x->key){
      x = x->left;
    }else if(key > x->key){
      x = x->right;
    }else{
      return x;
    }
  }
  return NIL;
}

NodePointer treeSuccessor(NodePointer x){
  NodePointer y;
  if(x->right != NIL){
    return treeMinimum(x->right);
  }
  y = x->parent;
  while(y != NIL && x == y->right){
    x = y;
    y = y->parent;
  }
  return y;
}

NodePointer treeMinimum(NodePointer x){
  while(x->left != NIL){
    x = x->left;
  }
  return x;
}

NodePointer treeMaximum(NodePointer x){
  while(x->right != NIL){
    x = x->right;
  }
  return x;
}

void deleteNode(int key){
  NodePointer x,y;
  NodePointer z = findNode(key);
  if(z == NIL){ return; }
  if(z->left == NIL || z->right == NIL){
    y = z;
  }else{
    y = treeSuccessor(z);
  }
  if(y->left != NIL){
    x = y->left;
  }else{
    x = y->right;
  }
  if(x != NIL){
    x->parent = y->parent;
  }
  if(y->parent == NIL){
    root = x;
  }else if(y == y->parent->left){
    y->parent->left = x;
  }else{
    y->parent->right = x;
  }
  if(y != z){
    z->key = y->key;
  }
  free(y);
}