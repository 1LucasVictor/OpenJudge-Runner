#include<stdio.h>

int main(){
  int i,j,v,n,m,k;
  int V[105][110];
  scanf("%d",&n);

  for(i = 0; i < n; i++){
    scanf("%d%d",&v,&m);
    if(m != 0){
      for(j = 0; j < m; j++){
	scanf("%d",&k);
	V[v-1][k-1] = 1;
      }
    }
  }

  for(i = 0; i < n; i++){
    j = 0;
    printf("%d",V[i][j]);
    for(j = 1; j < n; j++){
      printf(" %d",V[i][j]);
    }
    printf("\n");
  }
  return 0;
}