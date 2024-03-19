#include <stdio.h>

int main( ){

  int n, i, j, u, v, k, M[101][101];

  scanf("%d", &n);

  for(i=0 ; i<=n ; i++){
    for(j=0 ; j<=n ; j++){
      M[i][j] = 0;
    }
  }


  for(i=1 ; i<=n ; i++){

    scanf("%d%d", &u, &k);
    //   printf("u: %d, k: %d\n", u, k);
    for(j=0 ; j<k ; j++){
      scanf("%d", &v);
      //     printf("v: %d\n", v);
      M[u][v] = 1;
      //     printf("M[u][v]: %d\n", M[u][v]);
    }
  }


  for(i=1 ; i<=n ; i++){
    for(j=1 ; j<=n ; j++){
      printf("%d", M[i][j]);
      printf(" ");
    }
    if(i != n) printf("\n");
  }

  return 0;
}