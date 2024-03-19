#include<stdio.h>
#define max 100
#define INF 10000000
int main(){

  int n, u, k,v, c, i, j, min;
  int d[max],node[max][max],jud[max];

  scanf("%d",&n);
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      node[i][j] = -1;
    }
  }

  for(i=0;i<n;i++){
    scanf("%d %d",&u,&k);
    for(j=0;j<k;j++){
      scanf("%d %d",&v,&c);
      node[i][v] = c;
    }
  }
  
  for(i=0;i<n;i++){
    d[i] = INF;
    jud[i] = 1;
  }
  
  d[0] = 0;
  
  while(1){
    min = INF;
    for(i=0;i<n;i++){
      if(min > d[i] && jud[i] == 1){
        u = i;
        min = d[i];
      }
    }
    if(min == INF)
      break;
    jud[u] = 0;
    for(j=0;j<n;j++){
      if(node[u][j] == -1)
        continue;
      if(d[j] > d[u] + node[u][j]){
        d[j] = d[u] + node[u][j];
      }
    }
  }
  
  for(i=0;i<n;i++){
    printf("%d %d\n",i,d[i]);
  }
  
  return 0;
}
