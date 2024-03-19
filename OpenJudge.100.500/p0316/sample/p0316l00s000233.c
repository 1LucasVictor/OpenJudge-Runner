#include <stdio.h>
#include <stdlib.h>
   
struct node{
   
int id;
struct node* parentNode;
struct node* leftChild;
struct node* rightChild;
   
};
   
struct node *createNode(int);
struct node *searchNode(int);
void insert(struct node*);
void printNodes(void);
void preOrder(struct node *);
void inOrder(struct node *);
   
struct node* nodes[500001];
struct node* root;
  
int n;
  
main(){
   
int i, id;
char command[7];
 struct node* tmpNode;
   
scanf("%d",&n);
   
for(i=0; i<n; i++){
   
scanf("%s",command);
if(command[0]=='i'){
scanf("%d",&id);
insert(createNode(id));
}else if(command[0]=='p'){
printNodes();
}
   
}/* END OF LOOP */
  
 return 0;
   
}
  
struct node *createNode(int id){
  struct node *newNode;
  
    if(id<0) return NULL;
  
    if(newNode = searchNode(id)) return newNode;
  
  newNode=(struct node*)malloc(sizeof(struct node));
  newNode->id=id;
  newNode->parentNode=NULL;
  newNode->rightChild=NULL;
  newNode->leftChild=NULL;
    
  nodes[id]=newNode;
  return newNode;
}
  
struct node *searchNode(int id){
  if(nodes[id]){
    return nodes[id];
  }
  return NULL;
}
   
void insert(struct node* z){
   
  struct node* y = NULL;
  struct node* x = root;
  
  while(x != NULL){
    y = x;
    if(z->id < x->id){
      x = x->leftChild;
    }else{
      x = x->rightChild;
    }
  }
  z->parentNode = y;
  if(y == NULL){
    root = z;
  }else{
    if(z->id < y->id){
      y->leftChild = z;
    }else{
      y->rightChild = z;
    }
  }
   
}
   
void printNodes(void){
     
  inOrder(root);
  printf("\n");
  preOrder(root);
  printf("\n");
  
}
   
void preOrder(struct node* nd){
  printf(" %d",nd->id);
  if(nd->leftChild){
    preOrder(nd->leftChild);
  }
  if(nd->rightChild){
    preOrder(nd->rightChild);
  }
   
}
   
void inOrder(struct node* nd){
  if(nd->leftChild){
    inOrder(nd->leftChild);
  }
  printf(" %d",nd->id);
  if(nd->rightChild){
    inOrder(nd->rightChild);
  }
   
}