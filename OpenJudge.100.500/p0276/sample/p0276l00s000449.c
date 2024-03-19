#include <stdio.h>

int N = 100;

int main(){
  int x[N][N];
  int i,j,n,k,u,v;

  scanf("%d",&n);

  for(i=0;i<n;i++){
    for(j=0;j<n;j++)
      x[i][j]=0;
    }

    for(i=0;i<n;i++){
      scanf("%d%d",&u,&k);
      u--;
      for(j=0;j<k;j++){
	scanf("%d",&v);
	v--;
	x[u][v] = 1;
      }
    }

    for(i=0;i<n;i++){
      for(j=0;j<n;j++){
	if(j) printf(" ");
	printf("%d",x[i][j]);
      }
      printf("\n");
    }
  
  return 0;
}

