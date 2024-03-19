#include <stdio.h>
#define MAX 100000000;
int adj[1000][1000];
int cost[100];
int check[100];
int mst[100];
int v, count;

void input(int n) {
  int node, k, v, c;
  for (int i = 0; i < n; i++) {
    scanf("%d%d", &node, &k);
    for (int j = 0; j < k; j++) {
      scanf("%d%d", &v, &c);
      adj[node][v] = c;
    }
  }
}

void setup(int n) {
  for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++)
      if (adj[i][j] == 0)
	adj[i][j] = MAX;
}

void minimum(int num) {
  int min, sum = 0, minicost;
  int i, j;
  cost[num] = 0;
  mst[count++] = num;
  check[num]++;

  while (1) {
    minicost = MAX;
    for (i = 0; i < count; i++) {
      //printf("node:%d\n", mst[i]);
      for (j = 0; j < v; j++)
	if (minicost > adj[mst[i]][j] + cost[mst[i]] && check[j] == 0) {
	  min = j;
	  minicost = adj[mst[i]][j] + cost[mst[i]];
	  //printf("minj = %d\n", min);
	  //printf("edge = %d cost = %d total = %d\n", adj[mst[i]][j], cost[mst[i]], minicost);
	}
    }
    //printf("node:%d minicost = %d\n", min, minicost);
    cost[min] = minicost;
    check[min]++;
    mst[count++] = min;
    if (count == v)
      break;
  }
}

int main(void) {
  int n;

  scanf("%d", &n);
  v = n;
  input(n);

  setup(n);

  /* for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++)
      printf(" %d", adj[i][j]);
    printf("\n");
    }*/
  
  minimum(0);

  for (int i = 0; i < n; i++)
    printf("%d %d\n", i, cost[i]);
  
  return 0;
}


