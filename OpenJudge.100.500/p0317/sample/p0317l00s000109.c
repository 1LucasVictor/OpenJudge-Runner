#include<stdio.h>
#include<stdlib.h>

struct node{
  struct node *right;
  struct node *left;
  struct node *parent;
  int key;
};

typedef struct node *Node;
Node root;

Node find(Node x,int k){
  if(x  == NULL || k == x->key)return x;
  if(k < x->key)return find(x->left,k);
  else return find(x->right,k);
}




void insert(int k){
  Node y = NULL;//x??????
  Node x = root;//t????????£???
  Node z;

  z = malloc(sizeof(struct node));
  z->key = k;
  z->left = NULL;
  z->right = NULL;

  while(x != NULL){
    y = x;
    if(z->key < x->key)x = x->left;
    else x = x->right;
  }

  z->parent = y;

  if( y == NULL )root = z;
  else if(z->key < y->key) y->left = z;
  else y->right = z;

}

//ok inorder
void inorder(Node u){
  if(u->left != NULL)inorder(u->left);
  printf(" %d",u->key);
  if(u->right != NULL)inorder(u->right);
}


//ok preorder
void preorder(Node u){
  printf(" %d",u->key);
  if(u->left != NULL)preorder(u->left);
  if(u->right != NULL)preorder(u->right);
}


int main(){
  int n, i, x;
  char com[20];
  scanf("%d", &n);

  for ( i = 0; i < n; i++ ){
    scanf("%s", com);

    if ( com[0] == 'i' ){
      scanf("%d", &x);
      insert(x);
    }
    else if(com[0] =='f'){
      scanf("%d",&x);
      Node t = find(root,x);
      if( t!= NULL )printf("yes\n");
      else printf("no\n");
    }
    else if ( com[0] == 'p' ){
      inorder(root);
      printf("\n");
      preorder(root);
      printf("\n");
    }
  }
  return 0;
}