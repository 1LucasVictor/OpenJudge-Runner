#include<stdio.h>
#define MAX 10000
#define NIL -1

struct Node {
  int l,p,r;
};
  struct Node A[MAX];
int n;

void pre(int x){
  if(x==NIL)return;
  printf(" %d",x);
  pre(A[x].l);
  pre(A[x].r);
}

void in(int x){
  if(x==NIL)return;
  in(A[x].l);
  printf(" %d",x);
  in(A[x].r);
}

void post(int x){
  if(x==NIL)return;
  post(A[x].l);
  post(A[x].r);
  printf(" %d",x);
}

int main(){
  int i,v,l,r,root;

  scanf("%d",&n);

  for(i=0;i<n;i++)A[i].p=NIL;

  for(i=0;i<n;i++){
    scanf("%d %d %d",&v,&l,&r);
    A[i].l=l;
    A[i].r=r;
    if(l!=NIL)A[l].p=v;
    if(r!=NIL)A[r].p=v;
  }
  for(i=0;i<n;i++)if(A[i].p==NIL)root=i;

  printf("Preorder\n");
  pre(root);
  printf("\n");
  printf("Inorder\n");
  in(root);
printf("\n");
  printf("Postorder\n");
  post(root);
  printf("\n");

  return 0;
}


