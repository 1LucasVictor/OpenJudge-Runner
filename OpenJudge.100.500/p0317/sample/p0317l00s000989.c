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

