
#include <stdio.h>
#include <stdlib.h>
  
struct node{
  
int id;
struct node* parentNode;
struct node* leftChild;
struct node* rightChild;
  
};
  
struct node *createNode(int);
void insert(struct node*);
void printNodes(void);
int findNode(int, struct node*);
void preOrder(struct node *);
void inOrder(struct node *);
  
struct node* nodes[600002];
struct node* root;
 
int n; 
 
main(){
  
int i, id;
char com[7];
 struct node* tmpNode;
  
scanf("%d",&n);
  
for(i=0; i<n; i++){
  
scanf("%s",com);
if(com[0]=='i'){
scanf("%d",&id);
insert(createNode(id));
}else if(com[0]=='p'){
printNodes();
}else if(com[0]=='f'){
scanf("%d",&id);
	if(findNode(id, root)){
		printf("yes\n");	
	}else{
		printf("no\n");	
	}
}
  
}/* END OF LOOP */
 
 return 0;
  
}
 
struct node *createNode(int id){
  struct node *newNode;
  if(id<0) return NULL;
 
  newNode=(struct node*)malloc(sizeof(struct node));
  newNode->id=id;
  newNode->parentNode=NULL;
  newNode->rightChild=NULL;
  newNode->leftChild=NULL;
   
  nodes[id]=newNode;
  return newNode;
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

int findNode(int searchingId, struct node* nd){
	
	if(nd->id == searchingId) return 1;
	if(nd->id < searchingId && nd->rightChild){
		return findNode(searchingId, nd->rightChild);
	}
	if(nd->id > searchingId && nd->leftChild){
		return findNode(searchingId, nd->leftChild);
	}
	return 0;
	
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