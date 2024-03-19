#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/*typedef struct{
  int id;
  int d;
  int frag;
  }node;*/
void DA(int **,int *,int,int);
int main(){
  int i,j,n,u,k;
  int **G;
  int *A;

  scanf("%d",&n);
  A=malloc(n*sizeof(int));
  G=malloc(n*sizeof(int *));
  for(i=0;i<n;i++)
    {
      G[i]=malloc(n*sizeof(int)*2);
      A[i]=INT_MAX;
    }
  A[0]=0;
  for(i=0;i<n;i++)
    {
      scanf("%d%d",&u,&k);
      for(j=0;j<2*k;j++)
	{
	  scanf("%d",&G[u][j]);
	}
    }

  DA(G,A,n,0);
  for(i=0;i<n;i++)
    {
      printf("%d %d\n",i,A[i]);
    }
  return 0;
}
void DA(int **G,int *A,int n,int num){
  int i,j;
 
  

  for(j=1;j<2*n;j+=2)
    {
      if(A[num]+G[num][j]<A[G[num][j-1]])
	{
	  A[G[num][j-1]] = A[num]+G[num][j];
	  DA(G,A,n,G[num][j-1]);
	}
    }
    
 
}

