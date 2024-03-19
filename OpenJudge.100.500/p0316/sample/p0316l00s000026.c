//2020.1.9
//s1270188 xxxmk2
//alds1_08a

#include<stdio.h>
#include<stdlib.h>

//struct
struct node{
  int key;
  struct node *p, *l, *r;
};
typedef struct node *Node;

//prototype
void insert(int);
void pr_pre(Node);
void pr_in(Node);
void del_all(Node);

//global
Node root;

int main(){
  int num, i, j;
  char cmd[10];
  
  //input
  scanf("%d",&num);
  for(i=0;i<num;i++){
    scanf("%s",cmd);

    if(cmd[0]=='i'){//insert
      scanf("%d",&j);
      insert(j);
    }
    
    else if(cmd[0]=='p'){//print
      pr_in(root);
      printf("\n");
      pr_pre(root);
      printf("\n");
    }
  }

  del_all(root);
  return 0;
}

void insert(int n){
  Node x=root, y=NULL, z;

  z=malloc(sizeof(struct node));
  z->key=n;
  z->l=z->r=NULL;

  while(x!=NULL){
    y=x;
    if(z->key < x->key) x=x->l;
    else x=x->r;
  }
  z->p=y;

  if(y==NULL) root=z;
  else if(z->key < y->key) y->l=z;
  else y->r=z;
  
}

void pr_pre(Node data){
  printf(" %d",data->key);
  if(data->l!=NULL) pr_pre(data->l);
  if(data->r!=NULL) pr_pre(data->r);
}

void pr_in(Node data){
  if(data->l!=NULL) pr_in(data->l);
  printf(" %d",data->key);
  if(data->r!=NULL) pr_in(data->r);
}

void del_all(Node data){
  if(data->l!=NULL) del_all(data->l);
  if(data->r!=NULL) del_all(data->r);
  free(data);
}

