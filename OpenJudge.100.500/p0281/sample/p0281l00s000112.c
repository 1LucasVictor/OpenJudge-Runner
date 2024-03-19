#include <stdio.h>
#define MAX_N 101
#define INF (1<<28);

int N;
int G[MAX_N][MAX_N];

int main() {
  int i, j, k;
  int id, v, c;
  int tmp;
  for(i = 0; i < MAX_N; ++i) {
    for(j = 0; j < MAX_N; ++j) {
      G[i][j] = i == j ? 0 : INF;
    }
  }
  scanf("%d", &N);
  for(i = 0; i < N; ++i) {
    scanf("%d %d", &id, &k);
    while(k--) {
      scanf("%d %d", &v, &c);
      G[id][v] = c;
    }
  }

  for(k = 0; k < N; ++k) {
    for(i = 0; i < N; ++i) {
      for(j = 0; j < N; ++j) {
        tmp = G[i][k] + G[k][j];
        if(tmp < G[i][j]) G[i][j] = tmp;
      }
    }
  }

  for(i = 0; i < N; ++i) {
    printf("%d %d\n", i, G[0][i]);
  }

  return 0;
}