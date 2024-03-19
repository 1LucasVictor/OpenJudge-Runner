#include<stdio.h>
#define N 101
int main(){
  int G[N][N];
  int i,j,n,u,k,v;
  scanf("%d",&n);
  for(i = 0;i < n;i++){
    for(j = 0;j < n;j++){
      G[i][j]=0;
    }
  }

  for(i = 0;i < n;i++){
    scanf("%d%d",&u,&k);
    for(j = 0;j < k;j++){
      scanf("%d",&v);
      G[u-1][v-1]=1;
    }
  }

  for(i = 0;i < n;i++){
    for(j = 0;j < n-1;j++){
      //if(j != 0)printf(" ");
      printf("%d ",G[i][j]);
    }
    printf("%d\n",G[i][j]);
    }
  return 0;
}