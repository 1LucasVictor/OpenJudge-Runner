#include<stdio.h>
#define N 501

int main()
{
  int i,j,n,u,k,v,data[N][N];

  scanf("%d",&n);

  for(i=0; i<n; i++){
    for(j=0; j<n; j++){
      data[i][j] = 0;
    }
  }

  for(i=0; i<n; i++){
    scanf("%d %d",&u,&k);
    u--;
    for(j=0; j<k; j++){
      scanf("%d",&v);
      v--;
      data[u][v] = 1;
    }
  }

  for(i=0; i<n; i++){
    for(j=0; j<n-1; j++){
      printf("%d ", data[i][j]);
    }
    printf("%d\n",data[i][n-1]);
  }

  return 0;
}
