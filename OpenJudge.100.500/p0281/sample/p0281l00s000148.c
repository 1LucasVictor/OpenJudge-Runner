#include <stdio.h>
#include <stdlib.h>

#define NIL -1
#define INFTY (1<<21)

int **M;
int *key, *p;
int n;

void init() {
  int i, j;

  key = (int *)malloc(sizeof(int) * n);
  p = (int *)malloc(sizeof(int) * n);
  M = (int **)malloc(sizeof(int *) * n);

  for (i = 0; i < n; i++) {
    M[i] = (int *)malloc(sizeof(int) * n);
    key[i] = INFTY;
    p[i] = NIL;
    for (j = 0; j < n; j++) {
      M[i][j] = INFTY;
    }
  }

  key[0] = 0;
}

void input() {
  int i, j, u, k, v, c;

  scanf("%d", &n);
  init();

  for (i = 0; i < n; i++){
    scanf("%d %d", &u, &k);
    for (j = 0; j < k; j++){
      scanf("%d %d", &v, &c);
      M[u][v] = c;
    }
  }
}

int MSTPrim() {
  int i, u;

  while (1) {
    u = NIL;

    for (i = 0; i < n; i++) {
      if (p[i] == 1) continue;
      if (u == NIL || key[i] < key[u]) {
        u = i;
      }
    }

    if (u == NIL) break;
    p[u] = 1;
    for (i = 0; i < n; i++) {
      if (key[i] > M[u][i] && p[i] == NIL) {
        key[i] = M[u][i] + key[u];
      }
    }
  }
}

void Free() {
  int i;

  for (i = 0; i < n; i++) {
    free(M[i]);
  }
  free(M);
  free(key);
  free(p);
}

main() {
  int i;

  input();
  MSTPrim();

  for ( i = 0; i < n; i++ ){
    if (key[i] == INFTY) key[i] = -1;
    printf("%d %d\n", i, key[i]);
  }

  Free();

  return 0;
}