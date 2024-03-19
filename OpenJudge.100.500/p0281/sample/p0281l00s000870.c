#include<stdio.h>
#define N -1
#define W 0
#define B 1
static const int MAX = 500;
static const int INF = (1<<21);

int main(void){
  int i, j, k, n, u, v, c;
  int minv;
  int M[MAX][MAX];
  int check[MAX];
  int p[MAX];
  int key[MAX];

  scanf("%d", &n);

  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      M[i][j] = INF;
    }
  }

  for(i=0;i<n;i++){
    scanf("%d %d", &u, &k);
    for(j=0;j<k;j++){
      scanf("%d %d", &v, &c); 
      M[u][v]=c;
    }
  }

  for(i=0;i<n;i++){
    key[i]=INF;
    p[i]=N;
    check[i]=W;
  }

  key[0]=0;

  while(1){
    u=N;
    minv=INF;
    for(i=0;i<n;i++){
      if(key[i]<minv && check[i] == W){
	u=i;
	minv=key[i];
      }
    }

    if(u==N) break;

    check[u]=B;

    for(v=0;v<n;v++){
      if(check[v] == W && key[v]>key[u] + M[u][v]){
	key[v] = key[u]+M[u][v];
	p[v]=u;
      }
    }
  }

  for(i=0;i<n;i++){
    printf("%d %d\n", i, (key[i] == INF? 0:key[i]));
  }

  return 0;
}