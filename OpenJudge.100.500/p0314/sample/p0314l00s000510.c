#include<stdio.h>
#define MAX 10000

typedef struct{
  int p,l,r;
}Node;

Node tree[MAX];

int n;

void pre(int u){
  if(u==-1) return;

  printf(" %d",u);

  pre(tree[u].l);
  pre(tree[u].r);
}

void in(int u){
  if(u==-1) return;

  in(tree[u].l);

  printf(" %d",u);

  in(tree[u].r);
}

void post(int u){
  if(u==-1) return;

  post(tree[u].l);
  post(tree[u].r);

  printf(" %d",u);
}

int main(){

  int i,v,l,r,root;

  scanf("%d",&n);

  for(i=0;i<n;i++){
    tree[i].p=-1;
  }

  for(i=0;i<n;i++){
    scanf("%d %d %d",&v,&l,&r);

    tree[v].l=l;
    tree[v].r=r;

    if(l!=-1){
      tree[l].p=v;
    }
    if(r!=-1){
      tree[r].p=v;
    }
  }
  for(i=0;i<n;i++){
    if(tree[i].p==-1){
      root=i;
    }
  }
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