#include<stdio.h>
static const int N = 101;

int main(){
  int M[N][N];
  int n, u, k, v; 
  int i, j;

  scanf("%d", &n); 

  for ( i = 1; i <=n; i++ ){ //init M
    for ( j = 1; j <=n; j++ ) M[i][j] = 0;
  }
  
  for ( i = 1; i <= n; i++ ){
    scanf("%d %d", &u, &k);
    //u--;
    for ( j = 0; j < k; j++ ){
      scanf("%d", &v);
      //v--;
      M[u][v] = 1;  //  adjacency  =1
    }
  }
  
  for ( i = 1; i <= n; i++ ){   // print result
    for ( j = 1; j <=n; j++ ){
      if ( j>1 ) printf(" ");
      printf("%d", M[i][j]);
    }
    printf("\n");
  }

  return 0;
}

