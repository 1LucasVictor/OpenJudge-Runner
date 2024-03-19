#include<stdio.h>


main(){
  int n, i, j, e, sum;
  int M[500][500];
  int V, E;
  int minv;
  int d[500];
  int p[500];
  int vis[500];

  scanf("%d", &n);

  for ( i = 0; i< n; i++ ){
    for ( j = 0; j < n; j++ ){
      scanf("%d", &e);
      M[i][j] = (e==-1)?(1<<21):e;
    }
  }

  for ( i = 0; i < n; i++ ) {
    d[i] = (1<<21);
    p[i] = -1;
    vis[i] = 0;
  }

  d[0] = 0;

  while(1){
    minv = (1<<21);
    V = -1;
    for ( i = 0; i < n; i++ ){
      if ( minv > d[i] && !vis[i] ){
        V = i;
        minv = d[i];
      }
    }
    if ( V == -1 ) break;
    vis[V] = 1;
    for ( E = 0; E < n; E++ ){
      if ( !vis[E] && M[V][E] != (1<<21)){
        if ( d[E] > M[V][E] ){
          d[E] =  M[V][E];
          p[E] = V;
            }
      }
    }
  }

  sum = 0;

  for ( i = 0; i < n; i++ ){
    if ( p[i] != -1 ) sum += M[i][p[i]];
  }

  printf("%d\n", sum);

  return 0;
}



