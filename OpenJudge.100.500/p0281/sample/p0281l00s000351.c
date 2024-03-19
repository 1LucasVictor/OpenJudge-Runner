#include<stdio.h>

#define Max 100
#define Infty (1<<21)
#define W 0
#define G 1
#define B 2

int n, m[Max][Max];

void dijkstra(){
  int i, u, minv, v;
  int d[Max], color[Max];

   for(i = 0 ; i < n ; i++){
    d[i] = Infty;
    color[i] = W;
  }

  d[0] = 0;
  color[0] = G;

  while(1){
    minv = Infty;
    u = -1;

    for(i = 0 ; i < n ; i++){
      if(minv > d[i] && color[i] != B){
	u = i;
	minv = d[i];
      }
    }
    if(u == -1) break;
    color[u] = B;
    for(v = 0 ; v < n ; v++){
      if(color[v] != B && m[u][v] != Infty){
	if(d[v] > m[u][v] + d[u]){
	  d[v] = d[u] + m[u][v];
	  color[v] = G;
	}
      }
    }
  }
  
  for(i = 0 ; i < n ; i++){
    printf("%d %d\n", i, d[i] == Infty ? -1 : d[i]);
  }
}


int main(){
  int i, j, k, c, u, v;
  
  scanf("%d", &n);

   for(i = 0 ; i < n ; i++){
    for(j = 0 ; j < n ; j++){
      m[i][j] = Infty;
    }
   }

   for(i = 0 ; i < n ; i++){
     scanf("%d %d", &u, &k);
     for(j = 0 ; j < k ; j++){
       scanf("%d %d", &v, &c);
       m[u][v] = c;
     }
   }

   dijkstra();

   return 0;
}
