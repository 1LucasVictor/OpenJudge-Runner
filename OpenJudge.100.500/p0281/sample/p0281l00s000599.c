#include <stdio.h>
#define M 101
#define t (1<<28);

int n;
int G[M][M];

int main() {
  int i, j, k;
  int id, v, c;
  int tmp;
  for(i=0; i<M; i++) {
    for(j=0; j<M;j++) {
      if( i== j)G[i][j]=0;
      else G[i][j]=t;
    }
  }
  scanf("%d", &n);
  for(i = 0; i < n; i++) {
    scanf("%d %d",&id,&k);
    while(1) {
      if(k==0)break;
      scanf("%d %d", &v, &c);
      G[id][v] = c;
      k--;
    }
  }

  for(k=0; k<n; k++) {
    for(i=0; i<n; i++) {
      for(j = 0; j < n; ++j) {
        tmp = G[i][k] + G[k][j];
        if(tmp < G[i][j]) G[i][j] = tmp;
      }
    }
  }

  for(i = 0; i < n; ++i) {
    printf("%d %d\n", i, G[0][i]);
  }

  return 0;
}

