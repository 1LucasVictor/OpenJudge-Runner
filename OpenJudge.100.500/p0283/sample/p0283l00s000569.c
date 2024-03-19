#include<stdio.h>

#define free 0
#define not 1
#define N 8
#define Q 999

void putqueen(int);
void printboard(void);

int c[N],r[N],dp[N*2-1],dn[N*2-1],queen[N][N];

int main()
{
  int i,j,k,row,col;
  
  for(i=0; i<N; i++)
    {
      c[i]=free;
      for(j=0; j<N; j++)
	{
	  queen[i][j]=free;
	}
    }
   for(i=0; i<2*N; i++) dp[i] = dn[i] = free;
  
  scanf("%d",&k);
  for(i=0; i<k; i++)
    {
      scanf("%d%d",&row,&col);
      queen[row][col] =Q;
    }

  putqueen(0);
  

  return 0;
}

void putqueen(int x)
{
  int j;
  
  if(x == N)
    {
      printboard();
      return;
    }
  
  
 
  for(j=0; j<N; j++)
    {
      if(c[j]==not || dp[x+j]==not || dn[x-j+N-1]==not) continue;
	  
      r[x]=j;
      c[j]=dp[x+j]=dn[x-j+N-1]=not;
	  
      putqueen(x+1);
      c[j]=dp[x+j]=dn[x-j+N-1]=free;
	      
	      
    }
    
 
}
	  
	  
void printboard(void)
{
  int i,j;
  
  for(i = 0; i < N; i++)
    for(j = 0; j < N; j++)
      if(queen[i][j]==Q && r[i] != j) return;
      
  for(i = 0; i < N; i++){
    for(j = 0; j < N; j++){
      if(r[i] == j) printf("Q");
      else printf(".");
    }
    printf("\n");
  }
}

