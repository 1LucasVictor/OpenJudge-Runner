#include<stdio.h>

#define MAX 25

typedef struct{
  int l,r,par;
} node;

node data[MAX];

void init(int);
void preorder(int);
void inorder(int);
void postorder(int);

int main(){
  int num,i,id,left,right;
  int p;

  scanf("%d",&num);
  init(num);

  for(i = 0;i < num;i++){
    scanf("%d%d%d",&id,&left,&right);

    if(left != -1){
      data[id].l = left;
      data[left].par = id;
    }
    if(right != -1){
      data[id].r = right;
      data[right].par = id;
    }
  }

  for(i = 0;i < num;i++){
    if(data[i].par == -1){
      p = i;
      break;
    }
  }

  puts("Preorder");
  preorder(p);
  puts("");

  puts("Inorder");
  inorder(p);
  puts("");

  puts("Postorder");
  postorder(p);
  puts("");

  return 0;
}

void init(int num){
  int i;

  for(i = 0;i < num;i++){
    data[i].par = data[i].l = data[i].r = -1;
  }
}

void preorder(int p){
  if(p != -1){
    printf(" %d",p);
    preorder(data[p].l);
    preorder(data[p].r);
  }
}

void inorder(int p){
  if(p != -1){
    inorder(data[p].l);
    printf(" %d",p);
    inorder(data[p].r);
  }
}

void postorder(int p){
  if(p != -1){
    postorder(data[p].l);
    postorder(data[p].r);
    printf(" %d",p);
  }
}

