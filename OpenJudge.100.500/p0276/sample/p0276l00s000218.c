#include<stdio.h>

int max=100;

int main(){
  int x[max][max];
  int n, i, j, u, v, num;
  scanf("%d",&n);
  for(i=0 ; i<n ; i++){
    for(j=0 ; j<n ; j++){
      x[i][j]=0;
    }
  }
  for(i=0 ; i<n ; i++){
    scanf("%d%d",&u, &num);
    u=u-1;
    for(j=0 ; j<num ; j++){
      scanf("%d", &v);
      v=v-1;
      x[u][v]=1;
    }
  }
  for(i=0 ; i<n ; i++){
    for(j=0 ; j<n ; j++){
      if(j!=0)printf(" ");
      printf("%d", x[i][j]);
    }
    printf("\n");
  }
  return 0;
}

