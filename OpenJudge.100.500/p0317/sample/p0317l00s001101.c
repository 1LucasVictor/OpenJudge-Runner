#include<stdio.h>
#include<stdlib.h>
#define NIL NULL


struct node{
  struct node *left;
  struct node *right;
  struct node *parent;
  int key;
};
  
typedef struct node * Node;
  
Node root;

void Insert(int k){
  Node y=NIL;
  Node x=root;
  Node z;
  
  z=malloc(sizeof(struct node));
  z->key=k;
  z->left=NIL;
  z->right=NIL;
    
  while(x!=NIL){
    y=x;
  
    if(z->key<x->key){
      x=x->left;
    }
    else x=x->right;
  }
  z->parent=y;
    
  if(y==NIL){
    root=z;
  }
  else if(z->key<y->key){
    y->left=z;
  }
  else y->right=z;
}
 

  
void preorder(Node u){
  printf(" %d",u->key);
  if(u!=NIL){
    if(u->left!=NIL){
      preorder(u->left);
    }
    if(u->right!=NIL){
      preorder(u->right);
    }
  }
}
  
void inorder(Node u){
    
  if(u!=NIL){
    if(u->left!=NIL){
      inorder(u->left);
    }
    printf(" %d",u->key);
      
    if(u->right!=NIL){
      inorder(u->right);
    }
  }
}
  
void insert(int k){
  Node y=NIL;
  Node x=root;
  Node z;
  
  z=malloc(sizeof(struct node));
  z->key=k;
  z->left=NIL;
  z->right=NIL;
    
  while(x!=NIL){
    y=x;
  
    if(z->key<x->key){
      x=x->left;
    }
    else x=x->right;
  }
  z->parent=y;
    
  if(y==NIL){
    root=z;
  }
  else if(z->key<y->key){
    y->left=z;
  }
  else y->right=z;
}
  
Node Search(Node u,int k){
  if(u==NIL || k==u->key){
    return u;
  }
  if(k<u->key){
    return Search(u->left,k);
  }
  else return Search(u->right,k);
}
  
main(){
  int n, i, x;
  char str[20];
    
  scanf("%d",&n);
  
  for ( i = 0; i < n; i++ ){
    scanf("%s",str);
  
    if (str[0]=='i'){
      scanf("%d",&x);
      insert(x);
    } 
    else if (str[0]=='p'){
      inorder(root);
      printf("\n");
        
      preorder(root);
      printf("\n");
    }
    else if(str[0]=='f'){
      scanf("%d",&x);
      Node s=Search(root,x);
      if (s!= NIL ) printf("yes\n");
      else printf("no\n");
    }
  }
  return 0;
}