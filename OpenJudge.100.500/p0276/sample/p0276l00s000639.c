#include <stdio.h>

typedef struct{
  int u, k, v[100];
} Adj;

int main()
{
  int n, i, j, l, cnt;
  Adj adj[100];
  
  scanf("%d",&n);
  for (i = 0; i < n; i++){
    scanf("%d%d",&adj[i].u,&adj[i].k);
    for (j = 0; j < adj[i].k; j++)
      scanf("%d",&adj[i].v[j]);
  }
  for (i = 0; i < n; i++){
    for (j = 0; j < n; j++){
      cnt = 0;
      for (l = 0; l < adj[i].k; l++)
	if (j+1 == adj[i].v[l]){
	  cnt++;
	  printf("1");
	}
      if (cnt == 0)
	printf("0");
      if (j != n-1)
	printf(" ");
    }
    printf("\n");
  }
    
  return 0;
}

