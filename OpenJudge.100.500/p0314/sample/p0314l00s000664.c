#include<stdio.h>

#define MAX 10000

struct Node {
  int p,l,r;};

  struct Node tr[MAX];

  int n;

  void pre(int u){
    if(u==-1)return;
    printf(" %d",u);
    pre(tr[u].l);
    pre(tr[u].r);
  }

  void in(int u){
  if(u==-1)return;
  in(tr[u].l);
  printf(" %d",u);
  in(tr[u].r);
}

  void post(int u){
    if(u==-1)return;
    post(tr[u].l);
    post(tr[u].r);
    printf(" %d",u);
  }

  int main(){

  int i,v,l,r,root;

  scanf("%d",&n);
  for(i=0; i<n; i++){
    tr[i].p=-1;
  }

  for(i=0; i<n; i++){
  scanf("%d%d%d",&v,&l,&r);
  tr[v].l=l;
  tr[v].r=r;
  if(l !=-1) tr[l].p = v;
  if(r !=-1) tr[r].p = v;
}

  for(i=0; i<n; i++)
    if(tr[i].p ==-1) root=i;

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

