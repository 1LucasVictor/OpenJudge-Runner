#include <stdio.h>
#define INF 1e9
#define MAX 150
#define min(a,b) ((a) < (b) ? (a) : (b))

int main(){
  int num,i;
  int u,k,j,v,con;
  int A[MAX][MAX];
  
  for(i = 0 ; i < MAX ; i++){
    for(j = 0 ; j < MAX ; j++){
     A[i][j] = INF;
    }
    A[i][i] = 0;
  }
  
  scanf("%d",&num);
  for(i = 0 ; i < num ; i++){
    scanf("%d%d" ,&u ,&k);
    for(j = 0 ; j < k ; j++){
     scanf("%d%d" ,&v ,&con);
      A[u][v] = con;
    }
  }
 
  for(k = 0 ; k < num ; k++){
    for(i = 0 ; i < num ; i++){
     for(j = 0 ; j < num ; j++){
    A[i][j] = min(A[i][j],A[i][k]+A[k][j]);
     }
    }
  }

  for(i = 0 ; i < num ; i++){
    printf("%d %d\n" ,i ,A[0][i]);
  }

  return 0;
}
