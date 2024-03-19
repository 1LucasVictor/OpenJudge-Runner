#include <stdio.h>
#define INF 1000000
#define W 0
#define G 1
#define B 2
int Prim(void);
int n,A[100][100];
 
int main()
{
  int i,j;
 
  scanf("%d",&n);
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      scanf("%d",&A[i][j]);
      if(A[i][j]==-1) A[i][j]=INF;      
    }
  }
 
  printf("%d\n",Prim());
  return 0;
}
 
int Prim(void)
{
  int i,k,kv,min,sum=0;
  int dp[100],pr[100],col[100];
 
  for(i=0;i<n;i++){
    dp[i]=INF;
    pr[i]=-1;
    col[i]=W;
  }
   
  dp[0]=0;
  while(1){
    min=INF;
    k=-1;
    for(i=0;i<n;i++){
      if(dp[i]<min && col[i]!=B){
    k=i;
    min=dp[i];
      }
    }
     
    if(k==-1) break;
    col[k]=B;
    for(kv=0;kv<n;kv++){
      if(col[kv]!=B && A[k][kv]!=INF){
    if(A[k][kv]<dp[kv]){
      dp[kv]=A[k][kv];
      pr[kv]=k;
      col[kv]=G;
    }
      }
    }
  }
   
  for(i=0;i<n;i++){
    if(pr[i]!=-1) sum+=A[i][pr[i]];
  }
  return sum;
}