#include <stdio.h>
int main(){
  int m[100][100];
  int n,u,k,v;
  scanf("%d",&n);
  int i,j;
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      m[i][j] = 0;
    }
  }
  for(i=0;i<n;i++){
    scanf("%d %d",&u,&k);
    u--;
    for(j=0;j<k;j++){
      scanf("%d",&v);
      v--;
      m[u][v] = 1;
    }
  }
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      if(j!=0)printf(" ");
      printf("%d",m[i][j]);
    }
    printf("\n");
  }
  return 0;
}