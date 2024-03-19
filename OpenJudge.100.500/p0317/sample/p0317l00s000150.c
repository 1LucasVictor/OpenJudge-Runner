#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#define NIL -1

struct node{
  int key;
  struct node *left;
  struct node *right;
  struct node *parent;
};

struct node *root,*NIL;

void insert(int k)
{
  struct node *y,*x,*z;

  y=NIL;    // x の親                                                           
  x=root;

  z=(struct node *)malloc(sizeof(struct node));
  z->key=k;
  z->left=NIL;
  z->right=NIL;

  while(x!=NIL){
    y=x;    // 親を設定                                                         
    if(z->key<x->key){
      x=x->left;  // 左の子へ移動                                               
    }else{
      x=x->right;  // 右の子へ移動                                              
    }
  }
  z->parent=y;

  if(y==NIL){  // T が空の場合                                                  
    root=z;
  }else {
    if(z->key<y->key){
    y->left=z;  // z を y の左の子にする                                        
    }else{
    y->right=z;  // z を y の右の子にする                                       
    }
  }
}

struct node *find(struct node *x,int k)
{
  while(x!=NIL && k!=x->key){
    if(k<x->key){
      x=x->left;
    }else{
      x=x->right;
    }
  }
  return x;
}

void in_print(struct node *u) //中間から
{
  if(u==NIL) return;
  in_print(u->left);
  printf(" %d",u->key);
  in_print(u->right);
}

void pre_print(struct node *u)  //前から
{
  if(u==NIL) return;
  printf(" %d",u->key);
  pre_print(u->left);
  pre_print(u->right);
}

int main(){
  int i,m,k;
  char str[21];
  struct node *num;

  scanf("%d",&m);
  for(i=0;i<m;i++){
    scanf("%s",str);
    if(strcmp("insert",str)==0){
      scanf("%d",&k);
      insert(k);  
    }else if(strcmp("find",str)==0){
      scanf("%d",&k);
      num=find(root,k);
      if(num!=NIL) printf("yes\n");
      else printf("no\n");
    }else{
      in_print(root);
      printf("\n");
      pre_print(root);
      printf("\n");
    }
  }

  return 0;
}



