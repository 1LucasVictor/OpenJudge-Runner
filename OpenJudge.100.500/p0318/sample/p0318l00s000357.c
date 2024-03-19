#include <stdio.h>
#include <stdlib.h>
 
typedef struct node{
  int key;
  struct node *p;
  struct node *l;
  struct node *r;
} Node;
 
typedef Node *NodePointer;
NodePointer root = NULL;
 
NodePointer createNode(){
  NodePointer z = malloc(sizeof(Node));
  z->l = NULL;
  z->r = NULL;
  z->p = NULL;
  z->key = 0;
  return z;
}
 
void insert(int key){
   
  NodePointer z = createNode();
  NodePointer y = NULL;
  NodePointer x = root;
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
   
void inorder(NodePointer p){
     
  if(p != NULL){
    inorder(p->l);
    printf(" %d",p->key);
    inorder(p->r);
  }
}
 
void preorder(NodePointer p){
  if(p != NULL){
    printf(" %d",p->key);
    preorder(p->l);
    preorder(p->r);
  }
}

NodePointer minimum(NodePointer p){
  while(p->l != NULL){
    p = p->l;
  }
  return p;
}

NodePointer successor(NodePointer p){

  NodePointer x;

  if(p->r != NULL) return minimum(p->r);
  x = p->p;
  while(x != NULL && p == x->r){
    p = x;
    x = x->p;
  }
  return x;
}

void Delete(NodePointer p){

  NodePointer x;
  NodePointer y;

  if(p->l == NULL || p->r == NULL)
    x = p;
  else
    x = successor(p);
  if(x->l != NULL)
    y = x->l;
  else
    y = x->r;
  if(y != NULL)
    y->p = x->p;
  if(x->p == NULL)
    root = y;
  else if(x == x->p->l)
    x->p->l = y;
  else
    x->p->r = y;
  if(y != p)
    p->key = x->key;
}


NodePointer find(NodePointer p, int key){

  if(p == NULL) return p;
  else if(p->key == key) return p;
  if(key < p->key)  return find(p->l,key);
  else  return find(p->r,key);
}
 
int main(void){
 
  int i,key,n;
  char str[20];
  NodePointer x;
 
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
    else if(str[0] == 'f'){
      scanf("%d",&key);
	x = find(root,key);
	if(x != NULL) printf("yes\n");
	else printf("no\n");
    }
    else{
      scanf("%d",&key);
      Delete(find(root,key));

    }
  }
  return 0;
}