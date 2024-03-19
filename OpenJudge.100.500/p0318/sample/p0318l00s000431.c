#include <stdio.h>
#include <stdlib.h>

struct node{
  int key;
  struct node *pa;
  struct node *le;
  struct node *ri;
};
typedef struct node* TREE;
TREE root;

void insert(int);
int find(int);
void print();
void inorder(TREE);
void preorder(TREE);
TREE successor(TREE);
TREE minimum(TREE);
void delete(int);

int main(){
  int i,m,num;
  char com[7];

  scanf("%d",&m);
  if(m>500000) exit(2);
  root = NULL;
  for(i=0;i<m;i++){
    scanf("%s",com);
    if(com[0] == 'i'){
      scanf("%d",&num);
      insert(num);
    }
    else if(com[0] == 'p')print();
    else if(com[0] == 'f'){
      scanf("%d",&num);
      if(find(num) == 1) printf("yes\n");
      else printf("no\n");
    }
    else if(com[0] == 'd'){
      scanf("%d",&num);
      delete(num);
    }
  }
  
  return 0;
}

void insert(int key){
  TREE node_root=root,newnode,p,oya=NULL;

  newnode = (TREE)malloc(sizeof(struct node));
  newnode->le = newnode->ri = NULL;
  newnode->key = key;
  p=node_root;
  while(p!=NULL){
    oya=p;
    if(p->key > key) p=p->le;
    else p=p->ri;
  }
  newnode->pa = oya;
  if(oya == NULL){
    root = newnode;
  }else{
    if(oya->key > newnode->key) oya->le = newnode;
    else oya->ri = newnode;
  }
}

void print(){
  inorder(root);
  printf("\n");
  preorder(root);
  printf("\n");
}

void inorder(TREE out){
  if(out == NULL) return;
  inorder(out->le);
  printf(" %d",out->key);
  inorder(out->ri);
}

void preorder(TREE out){
  if(out == NULL) return;
  printf(" %d",out->key);
  preorder(out->le);
  preorder(out->ri);
}

int find(int key){
  TREE node_root=root,p;

  p=root;
  while(p!=NULL){
    if(p->key == key) return 1;
    if(p->key > key) p=p->le;
    else p=p->ri;
  }
  return 0;
}

void delete(int key){
  TREE p,delch,ne,delnode;
  int i=0;
  
  p=root;
  while(p!=NULL){
    if(p->key > key)p=p->le;
    else if(p->key < key)p=p->ri;
    else{
      if(p->le == NULL || p->ri == NULL){
	delnode = p;
      }else{
	delnode = successor(p);
      }
      if(delnode->le != NULL){
	delch = delnode->le;
      }else{
	delch = delnode->ri;
      }
      if(delch != NULL){
	delch->pa = delnode->pa;
      }
      if(delnode->pa == NULL){
	root = delch;
      }else{
	if(delnode == delnode->pa->le){
	  delnode->pa->le = delch;
	}else{
	  delnode->pa->ri = delch;
	}
      }
      if(delnode != p){
	p->key = delnode->key;
      }
      break;
    }
  }
  free(delnode);
}

TREE successor(TREE x){
  if(x->ri != NULL) return minimum(x->ri);
  TREE y=x->pa;
  while(y != NULL && x == y->ri){
    x=y;
    y=y->pa;
  }
  return y;
}

TREE minimum(TREE x){
  while(x->le != NULL) x=x->le;
  return x;
}

