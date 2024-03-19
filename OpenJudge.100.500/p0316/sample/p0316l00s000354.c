#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define ORDER_MAX 500000
#define KEY_MAX 2000000000
#define KEY_MIN -2000000000
#define NIL KEY_MIN-1


typedef struct node{
  int key;
  struct node *l;
  struct node *r;
  struct node *p;
}Node;

void inorder(Node *);
void preorder(Node *);
void insert(int);

Node *root;

int main(){
  int i,m;
  char *str_print = "print";
  char *str_insert = "insert";
  char str[7];
  int k;

  scanf("%d",&m);
  root = NULL;
        
  for(i = 0; i < m; i++){//入力
    scanf("%s",str);
    //printf("test str %s",str);
    if(strcmp(str,str_print) == 0){//print
     inorder(root);
     printf("\n");
     preorder(root);
     printf("\n");
    }
    else if(strcmp(str,str_insert) == 0){//insert
      scanf("%d",&k);
      insert(k);
    }
    //printf("test for\n");
  }

  return 0;
}

void inorder(Node *x){
  if(x != NULL){
    inorder(x->l);
    printf(" %d",x->key);
    inorder(x->r);
  }
}

void preorder(Node *x){
  if(x == NULL)return;
  printf(" %d",x->key);
  preorder(x->l);
  preorder(x->r);
}

void insert(int k){
  Node *x,*y,*z;

  y = NULL;
  x = root;

  z = (Node *)malloc(sizeof(Node));
  z->key = k;
  z->l = z->r = z->p = NULL;
  
  while(x != NULL){
    //printf("test");
    y = x;
    if(z->key < x->key){
      x = x->l;
    }
    else x = x->r;
  }
  z->p = y;

  if(y == NULL)root = z;
  else if(z->key < y->key)y->l = z;
  else y->r = z;
  
}
