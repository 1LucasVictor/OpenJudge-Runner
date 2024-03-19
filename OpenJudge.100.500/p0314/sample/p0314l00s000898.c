#include<stdio.h>
#define MAX 100000
#define N -1

typedef struct{
  int p,l,r;
}Node;

Node T[MAX];
int n;

void Pre(int x){
  if(x==N)return;
  printf(" %d",x);
  Pre(T[x].l);
  Pre(T[x].r);
}

void In(int x){
  if(x==N)return;
  In(T[x].l);
  printf(" %d",x);
  In(T[x].r);
}

void Post(int x){
  if(x==N)return;
  Post(T[x].l);
  Post(T[x].r);
  printf(" %d",x);
}

int main(){
  int i;
  scanf("%d",&n);
  for(i=0;i<n;i++)T[i].p=T[i].l=T[i].r=N;
  for(i=0;i<n;i++){
  int current,left,right;
  scanf("%d %d %d",&current,&left,&right);
  T[current].l=left;
  T[current].r=right;
  if(left!=N)T[left].p=current;
  if(right!=N)T[right].p=current;
}
  int r;
  for(i=0;i<n;i++)if(T[i].p==N)r=i;
  printf("Preorder\n");
  Pre(r);
  printf("\n");
  printf("Inorder\n");
  In(r);
  printf("\n");
  printf("Postorder\n");
  Post(r);
  printf("\n");
  return 0;
}

