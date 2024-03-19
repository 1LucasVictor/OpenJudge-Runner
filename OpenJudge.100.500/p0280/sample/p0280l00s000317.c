#include<stdio.h>

#define INF (1<<21)
#define X -1
#define Y -2
 
typedef struct{
  int d;
  int con;
}tree;
 
int main(){

  int e, i, j, k, n, u[101], a[101][101], sum = 0;
  tree d[101];

  scanf("%d", &n);

  for(i = 0;i < n;i++){
    for(j = 0;j < n;j++){

      scanf("%d", &e);

      a[i][j] = (e == -1)?INF:e;
      d[i].con = Y;

      if(i == 0)d[i].d = 0;

      else d[i].d = INF;
    }
  }

  u[0] = 0;
  d[0].con = X;

  for(k = 1;k < n;k++){
    for(i = 0;i < k;i++){
      for(j = 0;j < n;j++){

	if(d[k].d > a[u[i]][j] && d[j].con != X){
	  d[k].d = a[u[i]][j];
	  u[k] = j;
	}

      }
    }

    d[u[k]].con = X;  
    sum += d[k].d;
  }

  printf("%d\n", sum);

  return 0;
}


