#include<stdio.h>
#define N 100000
#define NIL -1

typedef struct {
  int p;
  int left;
  int right;
}Node;

Node T[N];

void preParse(int u){
  if(u==NIL)
    return;
  printf(" %d",u);
  preParse(T[u].left);
  preParse(T[u].right);
}

void inParse(int u){
  if(u==NIL)
    return;
  inParse(T[u].left);
  printf(" %d",u);
  inParse(T[u].right);
}

void postParse(int u){
  if(u==NIL)
    return;
  postParse(T[u].left);
  postParse(T[u].right);
  printf(" %d",u);
}

int main(){
  int n,id,left,right,i,root;
  scanf("%d",&n);
  for(i=0;i<n;i++)
    T[i].p=T[i].left=T[i].right=NIL;
  
  for(i=0;i<n;i++){
    scanf("%d%d%d",&id,&left,&right);
    T[id].left=left;
    T[id].right=right;
    if(left!=NIL)T[left].p=id;
    if(right!=NIL)T[right].p=id;
  }

  for(i=0;i<n;i++)
    if(T[i].p==NIL)
      root=i;

  printf("Preorder\n");
  preParse(root);
  printf("\n");

  printf("Inorder\n");
  inParse(root);
  printf("\n");

  printf("Postorder\n");
  postParse(root);
  printf("\n");
  
  return 0;
}

