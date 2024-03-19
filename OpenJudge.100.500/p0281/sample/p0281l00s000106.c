#include<stdio.h>
#define W 0
#define G 1
#define B 2
  
int main(){
  int i,j,n,k,u,v,c;
  int A[100][100],wei[100],col[100];
  int ver,min_wei;
  scanf("%d",&n);
  
  for(i=0;i<n;i++)
    for(j=0;j<n;j++) A[i][j]=-1;

  for(i=0;i<n;i++){
    scanf("%d%d",&u,&k);
    for(j=0;j<k;j++){
      scanf("%d%d",&v,&c);
      A[u][v]=c;
    }
  }
  for(i=0;i<n;i++){
    wei[i]=2147483647;
    col[i]=W;
  }
  
  wei[0] = 0;
  col[0] = G;
  
  while(1){
    ver = -1;
    min_wei = 2147483647;
    
    for(i=0;i<n;i++){
      if(col[i] == G && wei[i] < min_wei){
	min_wei = wei[i];
	ver = i;
      }
    }

    if(ver == -1) break;

    col[ver] = B;

    for(i=0;i<n;i++){
      if(col[i] != B && A[ver][i] != -1){
	col[i] = G;
	if(wei[i] > (A[ver][i]+wei[ver])) wei[i] = A[ver][i]+wei[ver];
      }
    }
  }

  for(i=0;i<n;i++) printf("%d %d\n",i,wei[i]);

  return 0;
}

