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
  NodePointer a = malloc(sizeof(Node));
  a->l = NULL;
  a->r = NULL;
  a->p = NULL;
  a->key = 0;
  return a;
}
 
void insert(int key){
   
  NodePointer a = createNode();
  NodePointer b = NULL;
  NodePointer c = root;
  a->key = key;
   
  while(c != NULL){
    b = c;
    if(a->key<c->key) c=c->l;
    else c =c->r;
  }
  a->p = b;
  if(b== NULL) root = a;
  else if(a->key<b->key)b->l = a;
  else b->r = a;
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

  NodePointer c;

  if(p->r!= NULL) return minimum(p->r);
  c=p->p;
  while(c!= NULL && p==c->r){
    p=c;
    c=c->p;
  }
  return c;
}

void Delete(NodePointer p){

  NodePointer c;
  NodePointer b;

  if(p->l == NULL || p->r == NULL)
    c=p;
  else
    c=successor(p);
  if(c->l!= NULL)
    b=c->l;
  else
    b=c->r;
  if(b!= NULL)
    b->p = c->p;
  if(c->p == NULL)
    root =b;
  else if(c == c->p->l)
    c->p->l=b;
  else
    c->p->r=b;
  if(b!= p)
    p->key =c->key;
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
  NodePointer c;
 
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
	c=find(root,key);
	if(c!= NULL) printf("yes\n");
	else printf("no\n");
    }
    else{
      scanf("%d",&key);
      Delete(find(root,key));

    }
  }
  return 0;
}

