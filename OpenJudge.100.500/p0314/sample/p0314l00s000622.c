#include<stdio.h>

#define MAX 26
#define NIL -1

typedef struct{
  int p;
  int l;
  int r;
} Tree;

Tree T[MAX];

void preParse(int u){
  if(u==NIL) return;

  printf(" %d",u);
  preParse(T[u].l);
  preParse(T[u].r);
}

void inParse(int u){
  if(u==NIL) return;

  inParse(T[u].l);
  printf(" %d",u);
  inParse(T[u].r);
}

void postParse(int u){
  if(u==NIL) return;

  postParse(T[u].l);
  postParse(T[u].r);
  printf(" %d",u);
}

int main(){
  int n,i,id,left,right;

  scanf("%d",&n);

  for(i=0;i<n;i++){
    T[i].p=-1;
    T[i].l=-1;
    T[i].r=-1;
  }

  for(i=0;i<n;i++){
    scanf("%d%d%d",&id,&left,&right);
    T[id].l=left;
    T[id].r=right;
    if(left!=NIL) T[left].p=id;
    if(right!=NIL) T[right].p=id;
  }

  for(i=0;i<n;i++){
    if(T[i].p==NIL){
      printf("Preorder\n");
      preParse(i);
      printf("\nInorder\n");
      inParse(i);
      printf("\nPostorder\n");
      postParse(i);
    }
  }
  printf("\n");

  return 0;
}