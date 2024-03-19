#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#define rad M_PI/3
#define N 200001
#define Max 10000
#define NTL -1
struct node {
  struct node *right;
  int key;
  struct node *left;
};
typedef struct node * Pointer;
 
Pointer head, tail;

Pointer makenode(int k){
  Pointer x;
 
  x=malloc(sizeof(struct node));
  x->key = k;
  x->left = x->right = tail;
 
  return x;
}
void insert(int k, Pointer p){
  if(k < p->key){
    if(p->left == tail){
      p->left = makenode(k);
    }else{
      insert(k , p->left);
    }
  }else{
    if(p->right == tail){
      p->right = makenode(k);
    }else{
      insert(k , p->right);
    }
  }
}
void init(void){
  head=makenode(-1);
  tail=makenode(-1);
  head->right=tail;
  head->left=tail;
}
void preorder(Pointer node){
  if(node != tail){
    printf(" %d", node->key);
    preorder(node->left);
    preorder(node->right);
  }
}
 
void inorder(Pointer node){
  if(node != tail){
    inorder(node->left);
    printf(" %d", node->key);
    inorder(node->right);
  }
}

int main()
{
    char str[7];
  int n,k;
 
  init();
  scanf("%d" ,&n);
  while(n--){
    scanf("%s" ,str);
 
    if(str[0] == 'i'){
      scanf("%d" ,&k);
      insert(k, head);
    }else{
      inorder(head->right);
      printf("\n");
      preorder(head->right);
      printf("\n");
    }
  }
 
  return 0;
}
