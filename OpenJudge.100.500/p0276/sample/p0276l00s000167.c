#include <stdio.h>
#define N 101

int main()
{
  int i,j,k,l,n,m;
  int Adj[N][N];
  
  scanf("%d",&n);
  
  for(i=1;i<=n;i++){
    scanf("%d%d",&k,&l);
    for(j=0;j<l;j++){
      scanf("%d",&m);
      Adj[i][m]=1;
    }
  }
  
  for(i=1;i<=n;i++){
    for(j=1;j<=n;j++){
      printf("%d",Adj[i][j]);
      if(j!=n){
	printf(" ");
      }
    }
    printf("\n");
  }
  return 0;
}