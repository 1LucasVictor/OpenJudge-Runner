#include<stdio.h>
#include<stdlib.h>
typedef struct graph{
  int k, *v, *c, d, p;
}T_graph;
int main(){
  int n;
  scanf("%d", &n);
  T_graph g[n];
  int id;
  int i, j;
  for(i = 0; i < n; i++){
    scanf("%d", &id);
    scanf("%d", &g[id].k);
    g[id].v = (int *)malloc(sizeof(int) * g[id].k);
    g[id].c = (int *)malloc(sizeof(int) * g[id].k);
    for(j = 0; j < g[id].k; j++)
      scanf("%d %d", &g[id].v[j], &g[id].c[j]);
    g[id].d = 2147483647;
    g[id].p = 0;
  }
  g[0].d = 0;
  g[0].p = 1;
  int q[n];
  int qn = 1;
  q[0] = 0;
  int p = 0;
  for(i = n; i > 0; i--){
    for(p = 0; p < qn; p++)
      for(j = 0; j < g[q[p]].k; j++){
	//printf(" %d", g[q[p]].v[j]);
	if(g[q[p]].d + g[q[p]].c[j] < g[g[q[p]].v[j]].d)
	  g[g[q[p]].v[j]].d = g[q[p]].d + g[q[p]].c[j];
	if(!g[g[q[p]].v[j]].p){
	  q[qn] = g[q[p]].v[j];
	  g[g[q[p]].v[j]].p = 1;
	  qn++;
	}
      }
  }
  for(i = 0; i < n; i++){
    printf("%d %d\n", i, g[i].d);
    free(g[i].v), free(g[i].c);
  }
  return 0;
}