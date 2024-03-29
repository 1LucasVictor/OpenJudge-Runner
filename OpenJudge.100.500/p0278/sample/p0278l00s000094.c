#include<stdio.h>
#include<stdlib.h>
typedef struct list{
  int u, k, *v;
}T_list;
typedef struct graph{
  int d, f;
}T_graph;
int n;
T_list *lst;
T_graph *grp;
//int t;
int que[100];
int p, q;
void bfs(int);
int main(){
  scanf("%d", &n);
  lst = (T_list *)malloc(sizeof(T_list) * n);
  grp = (T_graph *)malloc(sizeof(T_graph) * n);
  int i, j;
  for(i = n - 1; i >= 0; i--)
    grp[i].d = 0;
  for(i = 0; i < n; i++){
    scanf("%d %d", &lst[i].u, &lst[i].k);
    if(lst[i].k){
      lst[i].v = (int *)malloc(sizeof(int) * lst[i].k);
      for(j = 0; j < lst[i].k; j++){
	scanf("%d", &lst[i].v[j]);
	//mat[lst[i].u - 1][lst[i].v[j] - 1] = 1;
      }
      //free(lst[i].v);
    }
  }
  p, q = 0;
  que[q] = 0;
  q++;
  for(p = 0; p < n; p++)
    //if(!grp[que[p]].d)
      bfs(que[p]);
  for(i = 0; i < n; i++){
    if(lst[i].k)
      free(lst[i].v);
    printf("%d %d\n", i + 1, grp[i].d);
  }
  free(grp), free(lst);
  return 0;
}

void bfs(int v){
  //static int t = 0;
  //printf("%d %d %d\n", v + 1, grp[v].d, lst[v].k);
  int i;
  for(i = 0; i < lst[v].k; i++){
    if(!grp[lst[v].v[i] - 1].d){
      grp[lst[v].v[i] - 1].d = grp[v].d + 1;
      que[++q] = lst[v].v[i] - 1;
      //printf(" %d\n", lst[v].v[i] - 1);
    }
  }
  //grp[v].f = ++t;
}