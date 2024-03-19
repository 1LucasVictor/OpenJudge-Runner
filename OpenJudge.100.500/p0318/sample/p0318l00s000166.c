//2020.1.9
//s1270188 xxxmk2
//alds1_08c

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
Node find(int,Node);
void pr_pre(Node);
void pr_in(Node);
void del_all(Node);
void del(Node);
Node suc(Node);

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
    
    else if(cmd[0]=='f'){//find
      scanf("%d",&j);

      if(find(j,root)==NULL) printf("no\n");
      else printf("yes\n");
    }

    else if(cmd[0]=='d'){//delete
      scanf("%d",&j);
      del(find(j,root));
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

Node find(int n,Node data){
  if(data->key == n) return data;

  if(data->key > n){
    if(data->l==NULL) return NULL;
    else return find(n,data->l);
  }
  
  if(data->key < n){
    if(data->r==NULL) return NULL;
    else return find(n,data->r);
  }
}

void del(Node z){
  Node x, y;

  if(z==NULL) return;
  
  if(z->l==NULL || z->r==NULL) y=z;
  else y=suc(z);

  if(y->l!=NULL) x=y->l;
  else x=y->r;

  if(x!=NULL) x->p=y->p;

  if(y->p==NULL) root=x;
  else{
    if(y==y->p->l) y->p->l=x;
    else y->p->r=x;
  }
  
  if(y!=z) z->key=y->key;

  free(y);
  
}

Node suc(Node x){
  Node  y;
  
  if(x->r!=NULL){
    x=x->r;
    while(x->l!=NULL) x=x->l;
    return x;
  }

  y=x->p;
  while(y!=NULL && x==y->r){
    x=y;
    y=y->p;
  }

  return y;
}


