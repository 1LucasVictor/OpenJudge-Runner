#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node *link;
struct node{
  int key;
  link le,ri,pa;
};
link head;
int count=0,non=0;  //non:ノードの数
link ta[10000];
void insert(int a);
void inorder(link h);
void preorder(link h);
link find(int a);
void delete(int a);
void delete_node(link x);
link inol(int a);
void inolp(link h);

int main(){
  int m,k;
  char op[10];
  int i;

  head=NULL;
  scanf("%d",&m);
  for(i=0;i<m;i++){
    scanf("%s",op);
    if(strcmp(op,"insert")==0){
      scanf("%d",&k);
      insert(k);
      non++;
    }else if(strcmp(op,"print")==0){
      count=0;
      inorder(head);
      printf("\n");
      preorder(head);
      printf("\n");
    }else if(strcmp(op,"find")==0){
      scanf("%d",&k);
      if(find(k)!=NULL)  printf("yes\n");
      else  printf("no\n");
    }else if(strcmp(op,"delete")==0){
      scanf("%d",&k);
      delete(k);
      non--;
    }
  }

  return 0;
}

void insert(int a){
  link x,y,z;
  z=malloc(sizeof(struct node));
  z->key=a; z->le=NULL; z->ri=NULL;
  y=NULL;  x=head;
  while(x!=NULL){
    y=x;
    if(z->key<x->key)   x=x->le;
    else                x=x->ri;
  }
  z->pa=y;

  if(y==NULL)             head=z;
  else if(z->key<y->key)  y->le=z;
  else                    y->ri=z;
}

void inorder(link h){
  if(h==NULL) return;
  inorder(h->le);
  printf(" %d",h->key);
  inorder(h->ri);
}

void preorder(link h){
  if(h==NULL) return;
  printf(" %d",h->key);
  preorder(h->le);
  preorder(h->ri);
}


link find(int a){
  link x=head;
  while(x!=NULL){
    if(x->key==a)     break;
    else if(x->key>a) x=x->le;
    else              x=x->ri;
  }
  return x;
}

void delete(int a){
  link x=find(a);
  delete_node(x);
}
void delete_node(link x){
  link y;
  int a=x->key;
  if(x!=NULL){
    if(x->le==NULL&&x->ri==NULL){
      if(x->pa->le->key==a) x->pa->le=NULL;
      else if(x->pa->ri->key==a) x->pa->ri=NULL;
    }else if(x->le==NULL){  //右に子
      if(x->pa->le->key==a){  //親の左に
        x->pa->le=x->ri;  x->ri->pa=x->pa;
      }else if(x->pa->ri->key==a){
        x->pa->ri=x->ri;  x->ri->pa=x->pa;
      }
    }else if(x->ri==NULL){  //左に子
      if(x->pa->le->key==a){  //親の左に
        x->pa->le=x->le;  x->le->pa=x->pa;
      }else if(x->pa->ri->key==a){
        x->pa->ri=x->le;  x->le->pa=x->pa;
      }
    }else{
      y=inol(a);
      x->key=y->key;
      delete_node(y);
    }
  }
}

link inol(int a){
  int i, state=0,m;
  count=0;
  inorder(head);
  for(i=0;i<non;i++){
    if(ta[i]->key==a){
      m=i+1;  break;
    }
  }
  return ta[m];
}

void inolp(link h){
  if(h==NULL) return;
  inorder(h->le);
  //printf(" %d",h->key);
  ta[count]=h; count++;
  inorder(h->ri);
}

