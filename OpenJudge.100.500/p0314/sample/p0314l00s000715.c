#include<stdio.h>
#define N 25
#define NIL -1
#define MAX 100000
int n;
typedef struct Node{
  int parent;
  int left;
  int right;
}T;
T Tree[N];
void printP(int r)
{
  if(r==NIL)return;
  printf(" %d",r);
  printP(Tree[r].left);
  printP(Tree[r].right);
}
void printI(int r)
{
  if(r==NIL)return;
  printI(Tree[r].left);
  printf(" %d",r);
  printI(Tree[r].right);
}
void PrintPos(int r)
{
  if(r==NIL)return;
  PrintPos(Tree[r].left);
  PrintPos(Tree[r].right);
  printf(" %d",r);
}
int main()
{
  int i,j,data1,data2,m;
  scanf("%d",&n);
  for(i=0; i<n; i++){
    Tree[i].parent=Tree[i].left=Tree[i].right=NIL;
  }
    for(i=0; i<n; i++){
      scanf("%d",&data1);
      for(j=0; j<2; j++){
	scanf("%d",&data2);
	if(j==0)Tree[data1].left=data2;
	else Tree[data1].right=data2;
	Tree[data2].parent = data1;
      }
    }
  
  for(i=0; i<n; i++)
    if(Tree[i].parent==NIL)m=i;
    printf("Preorder\n");
    printP(m);
    printf("\n");
    printf("Inorder\n");
    printI(m);
    printf("\n");
    printf("Postorder\n");
    PrintPos(m);
    printf("\n");
    return 0;
}

