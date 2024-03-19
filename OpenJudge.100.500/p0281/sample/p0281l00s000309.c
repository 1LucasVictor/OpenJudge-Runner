#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

struct vertex {
  int k;
  int dis;
  int definite;
  int **vlist;
};

int main(int argc, char *argv[])
{
  int n, i, j, id;
  struct vertex *adj;
  int minv, op, cost, mind;

  scanf("%d", &n);
  adj = (struct vertex *)malloc(sizeof(struct vertex) * n);

  for (i = 0; i < n; i++) {
    scanf("%d", &id);
    scanf("%d", &(adj[id].k));
    adj[id].vlist = (int **)malloc(sizeof(int *) * adj[id].k);
    for (j = 0; j < adj[id].k; j++) {
      adj[id].vlist[j] = (int *)malloc(sizeof(int) * 2);
      scanf("%d", &(adj[id].vlist[j][0]));
      scanf("%d", &(adj[id].vlist[j][1]));
    }
    adj[id].dis = INT_MAX;
    adj[id].definite = 0;
  }

  adj[0].dis = 0;
  adj[0].definite = 1;
  minv = 0;
  while (minv != -1) {
    for (i = 0; i < n; i++) {
      if (adj[i].definite == 1) {
	for (j = 0; j < adj[i].k; j++) {
	  op = adj[i].vlist[j][0];
	  cost = adj[i].vlist[j][1];
	  if (adj[op].definite == 0 && adj[op].dis > adj[i].dis + cost) {
	    adj[op].dis = adj[i].dis + cost;
	  }
	}
      }
    }
    minv = -1;
    mind = INT_MAX;
    for (i = 0; i < n; i++) {
      if (adj[i].definite == 0 && mind > adj[i].dis) {
	mind = adj[i].dis;
	minv = i;
      }
    }
    if (minv != -1) adj[minv].definite = 1;
  }


  for (i = 0; i < n; i++) printf("%d %d\n", i, adj[i].dis);

  return 0;
}