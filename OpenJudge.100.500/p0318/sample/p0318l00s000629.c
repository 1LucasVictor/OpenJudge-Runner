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
  while(node!=NIL && node->key!=key){
    if(node->key < key)
      node=node->right;
    else
      node=node->left;
  }
  return node;
}

void Insert(int key){
  Node node=rootnode,z,y=NIL;
  z=(Node )malloc(sizeof(struct node));
  z->key=key;
  z->left=NIL;
  z->right=NIL;

  while(node!=NIL){
    y=node;
    if(key>node->key)
      node=node->right;
    else
      node=node->left;
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

  if(node->left==NIL || node->right==NIL)
    delete=node;
  else
    delete=getSuccessor(node);
   
  
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
      delete->parent->left=child;
    else
      delete->parent->right=child;
  }
  free(delete);
}

int main(void){
  int n,i,key;
  char command[7];
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
