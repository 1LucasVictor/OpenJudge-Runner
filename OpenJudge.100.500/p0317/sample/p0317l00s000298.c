#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 500001

struct node{
  struct node *parent;
  struct node *left;
  struct node *right;
  int key;
};

typedef struct node Node;
Node *root,*NIL;

void Insert(int id){
  Node *x,*y,*z;
  y = NIL;
  x = root;

  z = (Node *)malloc(sizeof(Node));
  z->key = id;
  z->left = NIL;
  z->right = NIL;
  
  while(x!=NIL){
    y = x;
    if(z->key < x->key){
      x = x->left;
    }
    else{
      x = x->right;
    }
  }
  z->parent = y;

  if(y == NIL) root = z;
  else if(z->key < y->key) y->left = z;
  else y->right = z;
  
};
void Inorder(Node *id){
  if(id==NIL)return;

  Inorder(id->left);
  printf(" %d",id->key);

  Inorder(id->right);
};
void Preorder(Node *id){
  if(id==NIL)return;

  printf(" %d",id->key);
  
  Preorder(id->left);
  Preorder(id->right);
};
int Find(Node *id, int key){
  int count = 0;
  if(id==NIL){
    //printf("no\n");
    return 0;
  }
  if(key==id->key){
    //printf("yes\n");
    //count++;
    return 1;
  }
  
  count += Find(id->left,key);
  count +=  Find(id->right,key);
  return count;
  
};
int main(){

  int i,j,n,id,find,count=0,judge;
  char order[MAX];
  
  scanf("%d",&n);

  for(i=0;i<n;i++){ //parent
    scanf("%s",order);
    if(strcmp(order,"insert")==0){
      scanf("%d",&id);
      Insert(id);
    }
    else if(strcmp(order,"find")==0){
      scanf("%d",&find);
      judge = Find(root,find);
      if(judge == 1){
	printf("yes\n");
      }
      else{
	printf("no\n");
      }
    }
    else{
      Inorder(root);
      printf("\n");
      Preorder(root);
      printf("\n");
    }
  }

  return 0;
}