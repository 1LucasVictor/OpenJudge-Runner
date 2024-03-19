#include<stdio.h>

#define INF 2001
#define N 100

int Arr[N][N];

int prim(int n){
  int i,ver,min_cos,cost[N],c[N],sum_weight;

  for(i=0;i<n;i++){
    cost[i] = INF;
    c[i] = 0;
  }

  cost[0] = 0;
  c[0] = 1;
  sum_weight = 0;

  while(1){
    ver = -1;
    min_cos = INF;
    for(i=0;i<n;i++){
      if(c[i] == 1 && cost[i] < min_cos){
	min_cos = cost[i];
	ver =i;
      }
    }

    if(ver == -1){
      break;
    }

    c[ver] = 2;
    sum_weight += cost[ver];

      for (i = 0;i<n;i++) {
      if (c[i] != 2 && Arr[ver][i] < INF) {
        c[i] = 1;
        if (cost[i] > Arr[ver][i]) cost[i] = Arr[ver][i];
      }
    }
  }

  return sum_weight;
}

int main(){
  int i,j,n,w;

  scanf("%d",&n);

  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
      scanf("%d",&w);
      if (w == -1) {
	Arr[i][j] = INF;
      }
      
      else Arr[i][j] = w;
    }
  }

  printf("%d\n",prim(n));

  return 0;
}

