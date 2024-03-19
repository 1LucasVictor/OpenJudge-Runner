#include<stdio.h>
#include<stdlib.h>
struct node{
  struct node *r,*l,*p,*z;
  int key;
};
 
typedef struct node * Node;
Node root, NIL;
int max;

Node find(int k,Node u){
  if(u==NULL ||k==u->key){
    return u;
  }
  if(k<u->key){
    return find(k,u->l);
  }
  else {
    return find(k,u->r);
  }
}
void insert(int k){
  int H;
  Node y=NIL,x=root,z;
    z = malloc(sizeof(struct node));
  z->key = k;
  z->l = NIL;
  z->r = NIL;
  while( x != NIL ){   
    y = x;
    if ( z->key < x->key ){ 
      x = x->l; 
    }
    else {
      x = x->r; 
    }
  } 
  z->p = y; 
  if ( y == NIL ){  
    root = z;
  }   
  else {
    if (z->key < y->key) { 
      y->l = z; 
    }
    else { 
      y->r = z; 
    }
  }
}
  
void inorder(Node u){   
  if ( u == NIL ) return; 
  inorder(u->l); 
  printf(" %d", u->key);
  inorder(u->r); 
}
 
void preorder(Node u){
  if ( u == NIL ) return;
  printf(" %d", u->key);
  preorder(u->l);
  preorder(u->r);
  
}
 
int main(){
  int n, i, x;
  char com[20];
  scanf("%d", &n);
  max = 0;
  for ( i = 0; i < n; i++ ){
    scanf("%s", com);
    if ( strcmp(com, "insert") == 0 ){
      scanf("%d", &x);
      insert(x);
    }
    else if ( strcmp(com, "print") == 0 ){
      inorder(root);
      printf("\n");
      preorder(root);
      printf("\n");
    }
    else if(strcmp(com,"find")==0){
      scanf("%d",&x);
      if(find(x,root)==NULL){
	printf("no\n");
      }
      else{
	printf("yes\n");
      }
    }
      
  }
  return 0;
}