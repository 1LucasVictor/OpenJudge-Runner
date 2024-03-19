#include <stdio.h>

#define Max 101

int main(){

  int i, n, m, j, u, k;
  int Adj[Max][Max];

  scanf("%d",&n);

  for(i = 0; i < n ; i++)
    for(j = 0 ; j < n ; j++)
      Adj[i][j] = 0;


  for(i = 0; i < n ; i++){
    scanf("%d%d",&u,&k);
    for( j = 0 ; j < k ; j++){
      scanf("%d",&m);
      Adj[u-1][m-1] = 1;     
    }
  }
  
  for(i = 0; i < n ; i++){
    for(j = 0 ; j < n ; j++){
      printf("%d",Adj[i][j]);
      if( j != n - 1)
	printf(" ");
    }
    printf("\n");
  }
  return 0;
}