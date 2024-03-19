#include<stdio.h>
#include<stdlib.h>
#include<string.h>
 
struct Node{
 
  int key;
  struct Node *parent;
  struct Node *left;
  struct Node *right;
 
};
 
struct Node *root,*NIL;
void insert(int );
void preorder(struct Node *);
void inorder(struct Node *);
struct Node *find(struct Node *, int);
int main(){
 
  int sumnode,inputdata,i,findnumber;
  char string[10];
 
 
  scanf("%d",&sumnode);
 
  for(i = 0; i < sumnode; i++){
 
    scanf("%s",string);
 
    if((strcmp(string,"insert")) == 0){
 
      scanf("%d",&inputdata);
      insert(inputdata);
 
    }
 
 
    else if((strcmp(string,"print"))==0){
 
      inorder(root);
 
      printf("\n");
 
      preorder(root);
 
      printf("\n");
    
         
    }
 
    else if((strcmp(string,"find")) == 0){
 
 
      struct Node *answer;
      scanf("%d",&findnumber);
 
      answer =  find(root,findnumber);
       
 
      if(answer !=NIL){
 
	printf("yes\n");
 
      }
 
      else{
 
	printf("no\n");
 
      }
    }
 
  }
  return 0;
}
void insert(int inputdata){
 
  struct Node *correntNode; 
  struct Node *beforeNode; 
  struct Node *newNode;
 
  newNode = (struct Node*)malloc(sizeof(struct Node));
 
  newNode -> key = inputdata;
 
  newNode->parent = NIL;
 
  newNode->left = NIL;
 
  newNode->right = NIL;
 
  correntNode = root;
  beforeNode = NIL;
 
  while(correntNode != NIL){
 
    beforeNode = correntNode;
 
    if(newNode->key < correntNode->key){
 
      correntNode = correntNode->left;
 
    }
 
    else{
 
      correntNode =  correntNode->right;
 
    }
  } 
 
  newNode->parent = beforeNode;
 
 
  if(beforeNode == NIL){ 
 
    root = newNode;;
 
  }
 
  else if(newNode->key > beforeNode->key){
 
    beforeNode->right = newNode;
 
  }
 
  else{
 
    beforeNode->left = newNode;
 
  }
 
}
 
void preorder(struct Node *inputdata){
 
  if(inputdata != NIL){
 
    printf(" %d",inputdata->key);
 
    preorder(inputdata->left);
    preorder(inputdata->right);
 
  }
 
}
 
void inorder(struct Node *inputdata){
 
  if(inputdata != NIL){
 
    inorder(inputdata->left);
 
    printf(" %d",inputdata->key);
 
    inorder(inputdata->right);
 
  }
 
}
 
 
struct Node * find(struct Node *inputdata ,int findnumber){
 
  int flag = 0;
 
  while( inputdata != NIL && inputdata->key != findnumber){
 
    if(inputdata->key < findnumber){
 
      inputdata = inputdata->right;
 
    }
 
    else if(inputdata->key > findnumber){
 
      inputdata = inputdata->left;
 
    }
  }
 
 
 
  return inputdata;
 
}