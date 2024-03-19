#include<stdio.h>
#define NIL -1
typedef struct {
  int parent;
  int lchild;
  int rchild;
} Node;
Node t[25];
void preParse(int);
void inParse(int);
void postParse(int);
 
int main()
{
  int n,i,id,right,left;
  scanf("%d",&n);
  for(i=0; i<n; i++) t[i].parent=NIL;
  for(i=0; i<n; i++) {
    scanf("%d%d%d",&id,&left,&right);
    t[id].lchild=left; t[id].rchild=right;
    if(left!=NIL) t[left].parent=id;
    if(right!=NIL) t[right].parent=id;
  }
 
  for(i=0; ; i++) {
    if(t[i].parent==NIL) {
      printf("Preorder\n");
      preParse(i);
      printf("\nInorder\n");
      inParse(i);
      printf("\nPostorder\n");
      postParse(i);
      printf("\n");
      break;
    }
  }
  return 0;
}
 
void preParse(int u)
{
  if(u==NIL)  return;
  printf(" %d",u);
  preParse(t[u].lchild);
  preParse(t[u].rchild);
}
 
void inParse(int u)
{
  if(u==NIL) return;
  inParse(t[u].lchild);
  printf(" %d",u);
  inParse(t[u].rchild);
}
 
void postParse(int u)
{
  if(u==NIL) return;
  postParse(t[u].lchild);
  postParse(t[u].rchild);
  printf(" %d",u);
}