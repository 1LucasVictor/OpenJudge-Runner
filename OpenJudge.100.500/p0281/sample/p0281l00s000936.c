#include <stdio.h>

#define White 0
#define Gray 1
#define Black 2
#define Max 100
#define Inf 1000000000

int G[Max + 1][Max + 1], n;

void dia() {
  int min, i, j, u;
  int color[Max + 1], dist[Max + 1];

  for (i = 0; i < n; i++) {
    color[i] = White;
    dist[i] = Inf;
  }

  color[0] = Gray;
  dist[0] = 0;

  while (1) {
    min = Inf;
    u = -1;
    for (i = 0; i < n; i++) {
      if (color[i] != Black && min > dist[i]) {
        u = i;
        min = dist[i];
      }
    }

    if (u == -1) break;
    color[u] = Black;

    for (j = 0; j < n; j++) {
      if (color[j] != Black && G[u][j] != Inf) {
        if (dist[j] > dist[u] + G[u][j]) {
          dist[j] = dist[u] + G[u][j];
          color[j] = Gray;
        }
      }
    }
  }
  for (i = 0; i < n; i++) {
    if (dist[i] != Inf) {
      printf("%d %d\n", i, dist[i]);
    } else {
      printf("%d -1\n", i);
    }
  }
}

int main() {
  scanf("%d", &n);
  int i, j;

  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
      G[i][j] = Inf;
    }
  }

  int k, c, u, v;
  for (i = 0; i < n; i++) {
    scanf("%d %d", &u, &k);
    for (j = 0; j < k; j++) {
      scanf("%d %d", &v, &c);
      G[u][v] = c;
    }
  }
  dia();

  return 0;

}

