#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define ORDER 500000

struct NODE{
  int key,nil;
  struct NODE *left,*right,*parent;
};

typedef struct NODE Node;

Node *head;

void insert(Node*);
void print1(Node*);
void print2(Node*);
int find(Node*,int);

int main(){
  int i,num;
  Node *n;
  char order[ORDER][10];
  Node tmp;
  
  scanf("%d",&num);

  n = (Node *)malloc(sizeof(Node) * num);

  for(i=0; i<num; i++){
    scanf("%s",order[i]);
    if(strcmp(order[i],"print")!=0)scanf("%d",&n[i].key);
  }  
  
  for(i=0; i<num; i++){
    if(strcmp(order[i],"insert")==0) insert(&n[i]);
    if(strcmp(order[i],"print")==0){
      print1(head);
      printf("\n");
      print2(head);
      printf("\n");
    }
    if(strcmp(order[i],"find")==0){
      if(find(head,n[i].key)==1) printf("yes\n");
      else printf("no\n");
    }
  }
  
  return 0;
}



void insert(Node *z){
  Node *y,*x;
  
  z->left = NULL;
  z->right = NULL;
  y = NULL;
  x = head;

  while(x != NULL){
    y = x;
    if(z->key < x->key)  x = x->left;
    else x = x->right;    
  }

  z->parent = y;
  
  if(y == NULL) head = z;
  else if(z->key < y->key) y->left = z;
  else y->right = z;
}


void print1(Node *node){
  if(node == NULL){
    return;
  }
  
  print1(node->left);
  printf(" %d",node->key);
  print1(node->right);
  return ;
}


void print2(Node *node){
  if(node == NULL){
    return;
  }
  
  printf(" %d",node->key);
  print2(node->left);
  print2(node->right);
  return;
}

int find(Node* node,int num){
  int found=0;
  if(node == NULL){
    return found;
  }
  
  if(node->key == num) found=1;
  if(found==0) found = find(node->left,num);
  if(found==0) found = find(node->right,num);
  
  return found;
}