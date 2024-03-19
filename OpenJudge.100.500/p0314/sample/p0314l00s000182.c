#include <stdio.h>

struct Node{
  int p,l,r;
};
struct Node T[10000];
int n;

void inParse(int v) {
  if(v==-1) return;
  inParse(T[v].l);
  printf(" %d",v);
  inParse(T[v].r);
}

void preParse(int v) {
  if(v==-1)return;
  printf(" %d",v);
  preParse(T[v].l);
  preParse(T[v].r);
}

void postParse(int v) {
  if(v==-1) return;
  postParse(T[v].l);
  postParse(T[v].r);
  printf(" %d",v);
}

int main(int argc, char const *argv[]) {
  int i,v,l,r,root;

  scanf("%d",&n);
  for(i=0;i<n;i++){
    T[i].p=-1;
  }

  for(i=0;i<n;i++){
    scanf("%d %d %d",&v,&l,&r);
    T[v].l=l;
    T[v].r=r;
    if(l!=-1)T[l].p=v;
    if(r!=-1)T[r].p=v;
  }
  for(i=0;i<n;i++){
    if(T[i].p==-1)root =i;
  }

  printf("Preorder\n");
  preParse(root);
  printf("\nInorder\n");
  inParse(root);
  printf("\nPostorder\n");
  postParse(root);
  printf("\n");
  return 0;
}