#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct node{
  int key;
  struct node *left;
  struct node *right;
  struct node *parent;
};

typedef struct node *NodePointer;

void insert(int);
void delete(int);
void change(NodePointer, NodePointer);
NodePointer Treemin(NodePointer);
NodePointer Search(NodePointer, int);
void Preorder(NodePointer);
void Inorder(NodePointer);

NodePointer root = NULL; 


int main () {
  int n = 0, i, x = 0;
  char str[7];


  scanf("%d",&n);

  for(i = 0 ; i < n ; i++) {
    scanf("%s",str);
    if(strcmp(str,"insert") == 0) {
      scanf("%d",&x);
      insert(x);
    }
    else if(strcmp(str,"print") == 0) {
      Inorder(root);
      printf("\n");
      Preorder(root);
      printf("\n");
    }
    else if(strcmp(str,"find") == 0) {
      scanf("%d",&x);
      if(Search(root, x) != NULL) printf("yes\n");
      else printf("no\n");
    }

    else {
      scanf("%d",&x);
      delete(x);
    }
  }
  

  return 0;
}


NodePointer Search(NodePointer p, int x) {
  if(p == NULL) return NULL;
  else if(p->key == x) return p;
  else if(p->key > x) return Search(p->left, x);
  else return Search(p->right, x);
}



void insert(int z) {
  NodePointer p, x = root, y = NULL;
  
  p = (NodePointer)malloc(sizeof(struct node));

  p->key = z;
  p->left = NULL;
  p->right = NULL;
  
  while(x != NULL) {
  
    y = x;
    
    if(z < x->key) x = x->left;
    else x = x->right; 
  }
  
  p->parent = y; 
  
  if(y == NULL) root = p;
  else if(p->key < y->key) y->left = p;
  else y->right = p; 


}



void delete(int x) {
  NodePointer p, y,z;

  p = Search(root, x);

  if(p != NULL) {
    if(p->left == NULL) { //右の子のみ、また子がない
      change(p, p->right);
    }
    else if(p->right == NULL) { //左の子のみ
      change(p, p->left);
    }
    else {  //子が二人
      y = Treemin(p->right);
      if(y->parent != p) {
	change(y, y->right);
	y->right = p->right;
	p->right->parent = y;
      }
      change(p,y);
      y->left = p->left;
      p->left->parent = y;
    }
  }
  
}


void change(NodePointer p, NodePointer n) {
  if(p->parent == NULL) root = n;
  else if(p == p->parent->left) p->parent->left = n;
  else p->parent->right = n;
  if(n != NULL) n->parent = p->parent;
}


NodePointer Treemin(NodePointer p) {
  if(p->left == NULL) return p;
  else return Treemin(p->left);
}







void Preorder(NodePointer cur) {

  if(cur != NULL) {
    printf(" %d",cur->key);
    Preorder(cur->left);
    Preorder(cur->right);
  }
  
}


void Inorder(NodePointer cur) {

  if(cur != NULL) {
    Inorder(cur->left);
    printf(" %d",cur->key);
    Inorder(cur->right);
  }
}

