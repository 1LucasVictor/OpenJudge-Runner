#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct node{  
  struct node *right;
  struct node *left;
  struct node *parent;
  int key;
};


typedef struct node Node;
//typedef struct tree Tree;

void insert(Node**,int);
void preorder(Node*);
void inorder(Node*);
Node* find(int,Node*);
void deletion(Node**,Node**);
Node* TreeSuccessor(Node*);
Node* treeMinimum(Node*);

Node *NIL;

  
int main(){

  int n,i,num;
  char order[7];
  Node *root;
  //Tree tree;
  Node *finder;

  root=NIL;

  //root=(Node*)malloc(sizeof(Node));

  //NIL->right=NULL;
  //printf("wa-i30\n");Node* find(int num,Node** u){

  //NIL->left=NULL;
  //NIL->parent=NULL;
  //NIL->key=-1;

  //printf("wa-i20\n");
  
  // tree.root=NIL;
 
  scanf("%d",&n);

  for(i=0;i<n;i++){

    scanf("%s %d",order,&num);
    
    //printf("%s\n",order);

    // root->key=3;

    if(strcmp(order,"insert")==0){
      
      //printf("wa-i\n");
      //printf("%d\n",root->key);
      insert(&root,num);
      //printf("Main : address of root;%p\n",root);
      //printf("%d\n",root->key);

    }
    
    else if(strcmp(order,"print")==0){
      //printf("%d\n",root->key);

      // printf("wa-i50\n");
      
      inorder(root);
      
      printf("\n");
	     
      preorder(root);

      printf("\n");

    }
    else if(strcmp(order,"find")==0){

      finder=find(num,root);
      // printf("wa-i30\n");
      
      if(finder!=NIL) printf("yes\n");
      else printf("no\n");
      
      
    }
    else if(strcmp(order,"delete")==0){
      
      finder = find(num,root);
      deletion(&root,&finder);
    
    }
  }

  return 0;
}

void insert(Node** root,int num){

  Node *x,*y,*z;

  y=NIL;
  x=*root;

  //printf("address of root;%p\n",root);

  z=(Node*)malloc(sizeof(Node));

  z->left=NIL;
  z->right=NIL;
  z->key=num;

  //printf("%d\n",z->key);  

  while(x!=NIL){
    y=x;
    if( z->key < x->key )x=x->left;
    else x=x->right;
    //printf("wa-i200\n");
  }
    
  z->parent=y;
  
  if(y==NIL){
    *root=z;
    //printf("wa-i100\n");
  }
  else if( z->key < y->key ) y->left=z;
  else y->right=z;

  //printf("%d\n",(*root)->key);
  //printf("%d\n",z->key);
  // printf("address of root;%p\n",root);
  
}

void preorder(Node *u){
  
  if(u==NIL) {
    // printf("wa-i10000\n");
    return;
  }
  
  printf(" %d",u->key);
  preorder(u->left);
  preorder(u->right);
  
}

void inorder(Node *u){

  if(u==NIL) return;
  
  inorder(u->left);
  printf(" %d",u->key);
  inorder(u->right);

}

Node* find(int num,Node* u){

  while(u!=NIL&&num!=u->key){

    if(num< u->key ) u= u->left;
    else u=u->right;
  }
  // printf("wa-i20\n");
  return u;

}

void deletion(Node** r,Node** z){

  Node *x,*y;

  if((*z)->left==NIL||(*z)->right==NIL){
    y=*z;
  }
  else{
   y=TreeSuccessor(*z);
  }

  if(y->left!=NIL){
    x=y->left;
  }
  else{
    x=y->right;
  }

  if(x!=NIL){
    x->parent=y->parent;

  }

  if(y->parent==NIL){

    *r=x;
  }
  else if(y==y->parent->left){

    y->parent->left=x;
  }
  else{
    y->parent->right=x;
  }
  
  if(y!=*z){
    (*z)->key = y->key;
  }
  
}
 
Node* TreeSuccessor(Node* x){ 

  Node *y;
  
  if(x->right!=NIL) return treeMinimum(x->right);

  y=x->parent;

  while(y!=NIL&&x==y->right){
    x=y;
    y=y->parent;
  }

  

  return y;
  
}

Node* treeMinimum(Node* x){

  while(x->left != NIL){
    x=x->left;
  }

  return x;


}







  