#include<stdio.h>
#include<stdlib.h>
#define LEN 7

struct node{
  int key;
  struct node *parent, *left, *right;
};

typedef struct node node;
typedef struct node * nodepointer;

void insert(int);
void inorder(nodepointer);
void preorder(nodepointer);

nodepointer root;

int main(){
  int n, k;
  int i;
  char com[LEN];

  scanf("%d", &n);
  for(i=0;i<n;i++){
    scanf(" %s", com);
    if(com[0] == 'i'){
      scanf("%d", &k);
      insert(k);
    }
    else{
      inorder(root);
      printf("\n");
      preorder(root);
      printf("\n");
    }
  }

  return 0;
}

void insert(int k){
  nodepointer x, y, z; //zが新しく挿入するノード

  z = (nodepointer)malloc(sizeof(node));
  //zの設定　zは葉だからleft,rightはnullでok
  z -> key = k;
  z -> left = NULL;
  z -> right = NULL;

  x = root; //たどる際のスタートは根
  y = NULL; //yはxの親
  //xがnullになるまでたどる。このときyはxの直前のノード、つまりxの親であり葉ノードである。
  while(x != NULL){
    y = x;
    if(z -> key < x -> key) x = x -> left;
    else x = x -> right;
  }
  z -> parent = y;

  //rootがnullのときwhile回らずにyはnullのまま
  //つまり、木が空っぽのときyはnull
  if(y == NULL) root = z;
  else if(z -> key < y -> key) y -> left = z;
  else y -> right = z;
}

void inorder(nodepointer n){
  if(n == NULL) return;
  inorder(n -> left);
  printf(" %d", n -> key);
  inorder(n -> right);
}

void preorder(nodepointer n){
  if(n == NULL) return;
  printf(" %d", n -> key);
  preorder(n -> left);
  preorder(n -> right);
}

