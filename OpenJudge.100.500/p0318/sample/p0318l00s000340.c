#include <stdio.h>
#include <stdlib.h>
struct node{
  int key;
  struct node *left,*right,*parent;
};
typedef struct node Node;
Node *rootnode,*NIL;
void Insert(int );
void Preorder(Node *);
void Inorder(Node *);
Node *Find(Node *,int );
void Delete(Node *);



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
    else if(command[0]=='f'){
      scanf("%d",&key);
      if(Find(rootnode,key)!=NIL)
	printf("yes\n");
      else printf("no\n");
    }
    else if(command[0]=='d'){
      scanf("%d",&key);
      Delete(Find(rootnode,key));
    }
  }

  return 0;
}

void Delete(Node *node){
  Node *deletenode;
  Node *child;
  
  //case1 and case2
  if(node->left==NIL || node->right==NIL)
    deletenode=node;
  //case3
  else{
    //start search for deletenode
    deletenode=node;
    if(deletenode->right!=NIL){
      //search for minimum of right side
      deletenode=deletenode->right;
      while(deletenode->left!=NIL)
	deletenode=deletenode->left;
    }
    else{
      deletenode=node->parent;
      while(deletenode!=NIL && node==deletenode->right){
	node=deletenode;
	deletenode=deletenode->parent;
      }
    }//finish
  }//finish case3
  


  
  
  //setting child
  if(deletenode->left!=NIL)
    child=deletenode->left;
  else
    child=deletenode->right;
  
  if(child!=NIL)
    child->parent=deletenode->parent;
  
  
  
  
  //if deletenode is rootnode
  if(deletenode->parent==NIL)
    rootnode=child;
  //deletenode is not rootnode
  else{
    if(deletenode->parent->left==deletenode)
      deletenode->parent->right=child;
    else if(deletenode->parent->right==deletenode)
      deletenode->parent->right=child;
  }
  node->key=deletenode->key;
  free(deletenode);
}


Node *Find(Node *node,int key){
  while(node!=NIL){
    if(node->key==key)
      break;
    else if(node->key < key)
      node=node->right;
    else
      node=node->left;
  }
  return node;
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
  z->parent=y;
  if(y==NIL)rootnode=z;
  else{
    if(key > y->key)
      y->right=z;
    else
      y->left=z;
  }
}

void Preorder(Node *node){
  if(node!=NIL){
    printf(" %d",node->key);
    Preorder(node->left);
    Preorder(node->right);
  }
}

void Inorder(Node *node){
  if(node->left!=NIL)
    Inorder(node->left);
  printf(" %d",node->key);
  if(node->right!=NIL)
    Inorder(node->right);
}
