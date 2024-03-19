#include<stdio.h>
#define N 10000
#define NIL -1

struct Node {int p,l,r;};
struct Node T[N];
int n;

void preparse(int u){
  if(u==NIL)return;
  printf(" %d",u);
  preparse(T[u].l);
  preparse(T[u].r);
}

void inparse(int u){
  if(u==NIL)return;
  inparse(T[u].l);
  printf(" %d",u);
  inparse(T[u].r);
}

void postparse(int u){
  if(u==NIL)return;
  postparse(T[u].l);
  postparse(T[u].r);
  printf(" %d",u);
}

int main(){
  int i,v,l,r,root;

  scanf("%d",&n);
  for(i=0;i<n;i++)T[i].p=NIL;

  for(i=0;i<n;i++){
    scanf("%d%d%d",&v,&l,&r);
    T[v].l=l;
    T[v].r=r;
    if(l != NIL)T[l].p=v;
     if(r != NIL)T[r].p=v;
  }

  for(i=0;i<n;i++)if(T[i].p==NIL)root=i;

  printf("Preorder\n");
  preparse(root);
  printf("\n");
  printf("Inorder\n");
  inparse(root);
  printf("\n");
  printf("Postorder\n");
  postparse(root);
  printf("\n");
  
  return 0;
}

