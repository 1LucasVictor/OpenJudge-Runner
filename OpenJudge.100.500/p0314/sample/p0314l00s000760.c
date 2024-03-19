#include<stdio.h>
#define MAX 10000
#define NIL -1

struct Node{
  int parent;
  int left;
  int right;
};

struct Node T[MAX];
int n;

void preParse(int u){
  if(u==NIL)return;
  printf(" %d",u);
  preParse(T[u].left);
  preParse(T[u].right);
}

void inPalse(int u){
  if(u==NIL)return;
  inPalse(T[u].left);
  printf(" %d",u);
  inPalse(T[u].right);
}

void postPalse(int u){
  if(u==NIL)return;
  postPalse(T[u].left);
  postPalse(T[u].right);
  printf(" %d",u);
}

int main(){
  int i,v,l,r,root;

  scanf("%d",&n);
  for(i=0;i<n;i++){
    T[i].parent=NIL;
  }
  for(i=0;i<n;i++){
    scanf("%d%d%d",&v,&l,&r);
    T[v].left=l;
    T[v].right=r;
    if(l!=NIL)T[l].parent=v;
    if(r!=NIL)T[r].parent=v;
  }
  for(i=0;i<n;i++){
    if(T[i].parent==NIL)root=i;
  }
  printf("Preorder\n");
  preParse(root);
  printf("\n");
  printf("Inorder\n");
  inPalse(root);
  printf("\n");
  printf("Postorder\n");
  postPalse(root);
  printf("\n");

  return 0;
}

