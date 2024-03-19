// A : minimum spanning tree
#include <stdio.h>
#include <stdlib.h>
#define N 10000
#define I 1000000
#define W 0
#define B 1

int n;  // the number of vertices in G
int m[N][N] = {0};
int set[N];
int col[N];

int genericMST();

int main() {
  int i, j, k = 1, l, u;
  int min, sum = 0, cnt = 1;

  // input
  scanf("%d", &n);  // the number of vertices in G
  for(i = 0; i < n; i++) {
    for(j = 0; j < n; j++) {
      scanf("%d", &m[i][j]); // adjacency matrix M
    }
  }
  // initialization
  for(i = 0; i < n; i++) {
    set[i] = 0;
    col[i] = W;
  }
  // MST
  col[0] = B;
  while(cnt != n) {
    min = I;
    for(i = 0; i < k; i++) {
      for(j = 0; j < n; j++) {
        if((m[set[i]][j] < min) && (m[set[i]][j] != -1) && (col[j] != B)){
          min = m[set[i]][j];
          u = j;
        }
      }
    }
    col[u] = B;
    set[k] = u;
    k++;
    if(min != I) sum += min;
    cnt++;
  }

  printf("%d\n", sum);

  return 0;
}

