#include<stdio.h>
#include<stdlib.h>


struct node{
  struct node* right;
  struct node* left;
  struct node* p;
  int key;
};

typedef struct node *Node;

Node root;

void insert(int  k){
  Node y = NULL;
  Node x = root;
  Node z;

  z = (Node)malloc(sizeof(struct node));
  z->key = k;
  z->left = NULL;
  z->right = NULL;
  
  while(x != NULL){
    y = x;
    if(z->key < x->key) x = x->left;
    else x = x->right;
  }
  
    z->p = y;

    if(y == NULL) root = z;
    else if(z->key < y->key) y->left = z;
    else y->right = z;
}

void inorder(Node u){
  if(u != NULL){
    inorder(u->left);
    printf(" %d",u->key);
    inorder(u->right);
  }
}

void preorder(Node u){
  if(u != NULL){
    printf(" %d",u->key);
    preorder(u->left);
    preorder(u->right);
  }
}

int find(Node u, int k){
  while(u != NULL){
    if(k == u->key) return 1;
    else if(k < u->key) u = u->left;
    else u = u->right;
  }

  return 0;
}
int main(){
  int n,i,k;
  char com[10];
  
  scanf("%d",&n);
  
  for(i=0;i<n;i++){
    scanf("%s",com);
    
    if(com[0] == 'i'){
      scanf("%d",&k);
      insert(k);
    }
    else if(com[0] == 'p'){
      inorder(root);
      printf("\n");
      preorder(root);
      printf("\n");
    }
  
    else{
      scanf("%d",&k);
      if(find(root,k)) printf("yes\n");
      else printf("no\n");
    }
  }
  
  return 0;
}

