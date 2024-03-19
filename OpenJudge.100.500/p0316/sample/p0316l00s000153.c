#include <stdio.h>

#define max_order 500001
#define max_str 100

typedef struct _NODE{
  int key;
  struct _NODE *right;
  struct _NODE *left;
} NODE;

NODE node_pool[max_order];
int node_count;
NODE *root;

void insert(NODE **root,int k);
void print(NODE *root);
void print_inorder(NODE *node);
void print_preorder(NODE *node);

int main(){
  int i;
  int n,k;
  char buf[max_str];

  node_count = 0;
  root = NULL;

  scanf("%d%*c",&n);
  for(i=0;i<n;i++){
    fgets(buf,max_str,stdin);
    if(buf[0]=='i'){
      
      sscanf(buf,"%*s %d",&k);
      insert(&root,k);
    }else{
      
      print(root);
    }
  }

  return 0;
}


void insert(NODE **root,int k){
  NODE *y = NULL; 
  NODE *x = *root;
  NODE *z = &node_pool[node_count];
  node_count++;
  z->key = k;
  z->right = NULL;
  z->left = NULL;

  while( x != NULL ){
    y = x; 
    if( z->key < x->key ){
      x = x->left; 
    }else{
      x = x->right; 
    }
  }
  if( y == NULL){ 
    *root = z;
  }else if( z->key < y->key){
    y->left = z; 
  }else{
    y->right = z; 
  }
}

void print(NODE *root){
  print_inorder(root);
  printf("\n");
  print_preorder(root);
  printf("\n");
}

void print_inorder(NODE *node){
  if(node==NULL) return;
  print_inorder(node->left);
  printf(" %d",node->key);
  print_inorder(node->right);
}

void print_preorder(NODE *node){
  if(node==NULL) return;
  printf(" %d",node->key);
  print_preorder(node->left);
  print_preorder(node->right);
}

