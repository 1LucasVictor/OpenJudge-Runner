#include <stdio.h>
#include <stdlib.h>
 
typedef struct node{
  int key;
  struct node *p;
  struct node *l;
  struct node *r;
}Node1;
typedef struct node  *Node;
Node root = NULL;
 
Node createNode(){
  Node z = malloc(sizeof(struct node));
  z->l = NULL;
  z->r = NULL;
  z->p = NULL;
  z->key = 0;
  return z;
}
 
int insert(int key){
   
  Node z = createNode();
  Node y = NULL;
  Node x = root;
  z->key = key;
   
  while(x != NULL){
    y = x;
    if(z->key < x->key) x = x->l;
    else x = x->r;
  }
  z->p = y;
  if(y == NULL) root = z;
  else if(z->key < y->key) y->l = z;
  else y->r = z;
}
   
void inorder(Node p){
     
  if(p != NULL){
    inorder(p->l);
    printf(" %d",p->key);
    inorder(p->r);
  }
}
 
void preorder(Node p){
  if(p != NULL){
    printf(" %d",p->key);
    preorder(p->l);
    preorder(p->r);
  }
}
 
int main(void){
 
  int i,key,n;
  char str[20];
 
  scanf("%d",&n);
 
  for(i=0;i<n;i++){
    scanf("%s",str);
 
    if(str[0] == 'i'){
      scanf("%d",&key);
      insert(key);
    }
    else if(str[0] == 'p'){
      inorder(root);
      printf("\n");
      preorder(root);
      printf("\n");
    }
  }
  return 0;
}