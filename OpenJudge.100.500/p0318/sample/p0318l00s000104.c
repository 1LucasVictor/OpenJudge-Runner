#include <stdio.h>
#include <stdlib.h>
struct node{
  int key;
  struct node *left,*right,*parent;
};
typedef struct node* Node;
Node rootnode,NIL;



Node getMinimum(Node node){
  while(node->left!=NIL)
    node=node->left;
  return node;
}
Node getSuccessor(Node node){
  Node delete=node->parent;
  if(node->right!=NIL)
    return getMinimum(node->right);

  while(delete!=NIL && node==delete->right){
    node=delete;
    delete=delete->parent;
  }
  return delete;
}
Node Find(Node node,int key){
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
  Node parent=rootnode;
  Node z;
  Node y=NIL;
  z=(Node )malloc(sizeof(struct node));
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

void Preorder(Node node){
  if(node!=NIL){
    printf(" %d",node->key);
    Preorder(node->left);
    Preorder(node->right);
  }
}

void Inorder(Node node){
  if(node->left!=NIL)
    Inorder(node->left);
  printf(" %d",node->key);
  if(node->right!=NIL)
    Inorder(node->right);
}

void Delete(Node node){
  Node delete;
  Node child;

  /*
  //case1 and case2
  if(node->left==NIL || node->right==NIL)
    deletenode=node;
  //case3
  else{
    //start search for deletenode like treeSuccessor()
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
  */

  if(node->left==NIL || node->right==NIL)
    delete=node;
  else
    delete=getSuccessor(node);
  node->key=delete->key;
  


  
  
  //setting child
  if(delete->left!=NIL)
    child=delete->left;
  else
    child=delete->right;
  
  if(child!=NIL)
    child->parent=delete->parent;
  
  
  
  
  //if deletenode is rootnode
  if(delete->parent==NIL)
    rootnode=child;
  //deletenode is not rootnode
  else{
    if(delete->parent->left==delete)
      delete->parent->right=child;
    else
      delete->parent->right=child;
  }
  free(delete);
}

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

