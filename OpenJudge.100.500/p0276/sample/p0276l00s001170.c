#include<stdio.h>
static const int N=100;
static const int INFTY = (1<<21);
int main(){
  int G[N][N],n,i,j,u,k,v,a=0;
  if(a == 0){
  scanf("%d",&n);
  for(i=0;i<n;i++){
    for(j=0;j<n;j++)
      G[i][j]=0;
  }
  for(i=0;i<n;i++){
    scanf("%d %d",&u,&k);
    u--;
    for(j=0;j<k;j++){
      scanf("%d",&v);
      v--;
      G[u][v]=1;
    }
  }
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      if( j )
	printf(" ");
      printf("%d",G[i][j]);
    }
    printf("\n");
  }
  return 0;
}
}

