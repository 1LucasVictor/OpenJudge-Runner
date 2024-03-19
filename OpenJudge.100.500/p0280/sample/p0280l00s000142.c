#include<stdio.h>

static const int MAX = 500;
static const int INFTY = (1<<21);

main(){
  int n, i, j, e, sum;
  int M[100][100];
  int p[100], c[100], v[100];
  int key, u;

  scanf("%d", &n);

  for ( i = 0; i< n; i++ ){
    for ( j = 0; j < n; j++ ){
      scanf("%d", &e);
      M[i][j] = (e==-1)?INFTY:e;
    }
  }

  for(i = 0; i < n; i++){
    p[i] = -1;
    c[i] = INFTY;
    v[i] = 0;
    }

  c[0] = 0;

  while(1){
    key = INFTY;
    u = -1;

    for(i = 0; i < n; i++){
      if(key > c[i] && v[i] == 0){
	u = i;
	key = c[i];
      }
    }

    if(u == -1) break;

    v[u] = 1;

    for(j = 0; j < n; j++){
      if(M[u][j] < c[j] && v[j] == 0){
	p[j] = u;
	c[j] = M[u][j];
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