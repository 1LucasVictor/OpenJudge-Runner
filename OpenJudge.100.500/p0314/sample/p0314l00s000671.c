#include <stdio.h>
#define MAX 25
#define N 100000
#define NIL -1
struct Node {
  int parent;
  int left;
  int right;
};
struct Node T[MAX];

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
  int a,n,i,j,x;
  int id,left,right,y,root;
  int deg=0;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    T[i].parent=NIL;  
  }
    
  for(i=0;i<n;i++){
    scanf("%d%d%d",&id,&left,&right);
    T[id].left=left;
    T[id].right=right;
    if(left != NIL)
      T[left].parent=id;
    if(right != NIL)
      T[right].parent=id;
  }
  
  for(i=0;i<n;i++){
    if(T[i].parent==NIL)
      root=i;
  }
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