#include <stdio.h>

#define MAX 100

int main() {
  int i, j;
  int n, index, k, v;
  int adj[MAX][MAX];

  scanf("%d", &n);

  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
      adj[i][j] = 0;
    }
  }

  
  for (i = 0; i < n; i++) {
    scanf("%d %d", &index, &k);
    for (j = 0; j < k; j++) {
      scanf("%d", &v);
      adj[index - 1][v - 1] = 1;
    }
  }

  for (i = 0; i < n; i++) {
    for (j = 0; j < n; j++) {
      if (j != 0) printf(" "); 
      printf("%d", adj[i][j]);
    }
    printf("\n");
  }
  
  return 0;
}

