#include <stdio.h>
#define MAX 10000
#define NIL -1

typedef struct {int pr,left,right} node;
node T[MAX];
int n;

//先行準巡回//
void preP(int u){
  if(u == NIL) return;
  printf(" %d",u);
  preP(T[u].left);
  preP(T[u].right);
}

//中間順巡回//
void inP(int u){
  if(u == NIL) return;
  inP(T[u].left);
  printf(" %d",u);
  inP(T[u].right);
}

//後行順巡回//
void posP(int u){
  if(u == NIL) return;
  posP(T[u].left);
  posP(T[u].right);
  printf(" %d",u);
}

int main(){
  int i,id,left,right,root;
  scanf("%d",&n);
  for(i=0;i<n;i++) T[i].pr = NIL;
  for(i=0;i<n;i++){
    scanf("%d %d %d",&id,&left,&right);
    T[id].left = left; T[id].right = right;
    if(left != NIL) T[left].pr = id; if(right != NIL) T[right].pr = id;
  }
  for(i=0;i<n;i++) if(T[i].pr == NIL) root = i;

  printf("Preorder\n"); preP(root); printf("\n");
  printf("Inorder\n"); inP(root); printf("\n");
  printf("Postorder\n"); posP(root); printf("\n");

  return 0;
}

