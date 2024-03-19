#include <stdio.h>

#define MAX 25

struct Node{
  int parent;
  int left;
  int right;
};

struct Node T[MAX];

void preP(int);
void inP(int);
void postP(int);

int main(){
  int i=0;
  int n=0;
  int id=0;
  int root=0;
  scanf("%d",&n);

  for(i=0;i<n;i++){
    T[i].parent=-1;
  }

  for(i=0;i<n;i++){
    scanf("%d",&id);
    scanf("%d%d",&T[id].left,&T[id].right);
    if(T[id].left!=-1)T[T[id].left].parent=id;
    if(T[id].right!=-1)T[T[id].right].parent=id;
  }

  for(i=0;i<n;i++) if(T[i].parent==-1) root=i;

  printf("Preorder\n");
  preP(root);
  printf("\n");
  printf("Inorder\n");
  inP(root);
  printf("\n");
  printf("Postorder\n");
  postP(root);
  printf("\n");

  return 0;
}


void preP(int u){
  if(u==-1) return;
  printf(" %d",u);
  preP(T[u].left);
  preP(T[u].right);
}

void inP(int u){
  if(u==-1) return;
  inP(T[u].left);
  printf(" %d",u);
  inP(T[u].right);
}

void postP(int u){
  if(u==-1) return;
  postP(T[u].left);
  postP(T[u].right);
  printf(" %d",u);
}
