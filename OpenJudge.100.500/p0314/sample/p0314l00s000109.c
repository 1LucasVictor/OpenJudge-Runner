#include <stdio.h>
#include <stdlib.h>
#define MAX 100
#define NO -1
typedef struct{
        int p;
        int l;
        int r;
}Tree;

Tree tree[MAX];
int count=0;
void pre(int);
void in(int);
void pos(int);

int main(void){
  int n,k;
  int i;
  int start =0;
  
  for(i=0;i<MAX;i++){
    tree[i].p=tree[i].l=tree[i].r=-1;
  }
  
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d%d%d",&k,&tree[i].l,&tree[i].r);
    if(tree[i].l !=-1) tree[tree[i].l].p=i;
    if(tree[i].r !=-1) tree[tree[i].r].p=i;
  }
  for(i=0;i<n;i++){
    if(tree[i].p==-1) start = i;
  }     
  //    printf("%d",start);
  
  printf("Preorder\n");
  pre(start);
  printf("\n");
  count=0;
  printf("Inorder\n");
  in(start);
  printf("\n");
  count = 0;
  printf("Postorder\n");
  pos(start);
  printf("\n");
  
  
  
  
  return 0;
}

void pre(int num){
  printf(" %d", num);
  if (tree[num].l != -1) pre(tree[num].l);
  if (tree[num].r !=-1) pre(tree[num].r);
 
}

void in(int num){
  
  if (tree[num].l !=-1) in(tree[num].l);
  printf(" %d", num);
  if (tree[num].r !=-1) in(tree[num].r);
  
  
}

void pos(int num){
  
  if (tree[num].l !=-1) pos(tree[num].l);
  if (tree[num].r !=-1) pos(tree[num].r);
  printf(" %d", num);
  

}