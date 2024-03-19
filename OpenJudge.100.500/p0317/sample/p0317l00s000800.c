#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define N 500000
#define DUMMY 2000000001

struct Node{
  int key;
  struct Node *left,*right;
};

struct Node *make_node(int x){
  struct Node *node = malloc(sizeof(struct Node));
  if(node != NULL){
    node->key = x;
    node->left = NULL;
    node->right = NULL;
  }
  return node;
}

struct Node *root;

struct Node *insert(int,struct Node*);
void insort(struct Node*);
void presort(struct Node*);
void find(int,struct Node*);

int main(void){
  int m,n=0;
  int i;
  int k;
  char order[7];

  root = NULL;

  scanf("%d",&m);

  for(i=0;i<m;i++){
    scanf("%s",order);
    if(strcmp(order,"insert") == 0){
      scanf("%d",&k);
      root = insert(k,root);
    }else if(strcmp(order,"print") == 0){
      insort(root);
      printf("\n");
      presort(root);
      printf("\n");
    }else if(strcmp(order,"find") == 0){
      scanf("%d",&k);
      find(k,root);
    }
  }
}

struct Node *insert(int key,struct Node *node){
  if (node == NULL)
    return make_node(key);
  else if (key < node->key)
    node->left = insert(key, node->left);
  else if (key > node->key)
    node->right = insert(key, node->right);
  return node;
}

void find(int key,struct Node *node){
  while (node != NULL) {
    if (node->key == key){
      printf("yes\n");
      return;
    }
    else if(key < node->key)
      node = node->left;
    else
      node = node->right;
  }
  printf("no\n");
  return;
}

void insort(struct Node *node){

  if(node == NULL) return;

  insort(node->left);

  printf(" %d",node->key);

  insort(node->right);
}

void presort(struct Node *node){

  if(node == NULL) return;

  printf(" %d",node->key);
  
  presort(node->left);
  presort(node->right);
}
