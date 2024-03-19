#include<stdio.h>
#define N 102
#define MAX 100001
static const int INFTY = (1<<21);
 
main(){
  int n, i, j, u, k, v, c;
  int M[N][N], d[N], p[N], q[N];
 
  scanf("%d", &n);
  for ( i = 0; i< n; i++ ){
    for ( j = 0; j < n; j++ ){
      M[i][j] = INFTY;
    }
    d[i] = INFTY;
    q[i] = 0;
  }
  d[0] = 0;
  q[0] = 1;
  p[0] = 0;
  for ( i = 0; i < n; i++ ){
    scanf("%d %d", &u, &k);
    for ( j = 0; j < k; j++ ){
      scanf("%d %d", &v, &c);
      M[u][v] = c;
    }
  }
u = 1;
  for(c = 0; c < n - 1; c++){
    k = MAX;
    for(i = 0; i < u; i++){
      for(j = 0; j < n; j++){
        if(q[j] == 0){
          if(M[p[i]][j] < MAX && d[j] >= M[p[i]][j] + d[p[i]]){
            d[j] = M[p[i]][j] + d[p[i]];
            if(d[j] <= k){
              k = d[j];
              v = j;
            }
          }
        }
      }
    }
    u++;
    q[v] = 1;
    p[i] = v;
  }
  for ( i = 0; i < n; i++){
    printf("%d %d\n", i, d[i]);
  }
 
  return 0;
}