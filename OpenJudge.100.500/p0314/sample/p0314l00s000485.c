#include<stdio.h>
#define MAX 10000
#define FALSE -1

typedef struct
{
  int parent;
  int left;
  int right;
}Tree;

Tree A[MAX];
int n;

void pPato(int k)
{
  if(k==FALSE)return;
  printf(" %d",k);
  pPato(A[k].left);
  pPato(A[k].right);
}

void mPato(int k)
{
  if(k==FALSE)return;
  mPato(A[k].left);
  printf(" %d",k);
  mPato(A[k].right);
}

void lPato(int k)
{
  if(k==FALSE)return;
  lPato(A[k].left);
  lPato(A[k].right);
  printf(" %d",k);
}

int main()
{
  int i,pnum,lnum,rnum,pass;

  scanf("%d",&n);
  for(i=0;i<n;i++)A[i].parent=FALSE;
  for(i=0;i<n;i++)
    {
      scanf("%d %d %d",&pnum,&lnum,&rnum);
      A[pnum].left=lnum;
      A[pnum].right=rnum;
      if(lnum!=FALSE)A[lnum].parent=pnum;
      if(rnum!=FALSE)A[rnum].parent=pnum;
    }
  for(i=0;i<n;i++)if(A[i].parent==FALSE)pass=i;
  printf("Preorder\n");
  pPato(pass);
  printf("\n");
  printf("Inorder\n");
  mPato(pass);
  printf("\n");
  printf("Postorder\n");
  lPato(pass);
  printf("\n");

  return 0;
}