#include <stdio.h>
#define MAX 2001;
int adj[101][101];
int check[101];
int mst[101];
int v, count;

void setup(int n) {
  for (int i = 1; i <= n; i++)
    for (int j = 1; j <= n; j++)
      if (adj[i][j] == -1)
	adj[i][j] = MAX;
}

int minimum(int num) {
  int min = 1, sum = 0, step, minicost;
  int i, j;
  mst[++count] = num;
  check[num]++;

  while (1) {
    minicost = MAX;
    for (i = 1; i <= count; i++) {
      for (j = 1; j <= v; j++)
	if (minicost > adj[mst[i]][j] && check[j] == 0) {
	  min = j;
	  minicost = adj[mst[i]][j];
	}
    }
    sum += minicost;
    check[min]++;
    mst[++count] = min;
    if (count == v)
      break;
  }
  return sum;
}

int main(void) {
  int n;

  scanf("%d", &n);
  v = n;
  for (int i = 1; i <= n; i++)
    for (int j = 1; j <= n; j++)
      scanf("%d", &adj[i][j]);

  setup(n);

  printf("%d\n", minimum(1));

  return 0;
}

