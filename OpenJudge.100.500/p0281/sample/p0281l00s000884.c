#include <stdio.h>
 
#define INF 1e9
#define MAX 150
#define min(a,b) ((a) < (b) ? (a) : (b))
 
int main(){
  int n,i,u,k,j,v,c;
  int A[MAX][MAX];
 
  for(i = 0 ; i < MAX ; i++){
    for(j = 0 ; j < MAX ; j++){
      A[i][j] = INF;
    }
    A[i][i] = 0;
  }
 
  scanf("%d",&n);
  for(i = 0 ; i < n ; i++){
    scanf("%d%d" ,&u ,&k);
    for(j = 0 ; j < k ; j++){
      scanf("%d%d" ,&v ,&c);
      A[u][v] = c;
    }
  }
 
  for(k = 0 ; k < n ; k++){
    for(i = 0 ; i < n ; i++){
      for(j = 0 ; j < n ; j++){
    A[i][j] = min(A[i][j],A[i][k]+A[k][j]);
      }
    }
  }
 
  for(i = 0 ; i < n ; i++){
    printf("%d %d\n" ,i ,A[0][i]);
  }
 
  return 0;
}