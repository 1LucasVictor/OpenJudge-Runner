#include<stdio.h>
#define INFTY (1 << 21)
#define SHIRO 0
#define NEZUMI 1
#define KURO 2
#define MAX 100
int n;
int M[MAX][MAX];

void Dijkstra();

int main(){
  int i, j;


  int s, t, u, v;

  scanf("%d",&n);

  for(i = 0 ; i < n ; i++){


    for(j = 0 ; j < n ; j++){




      M[i][j] = INFTY;
    }
  }

  for(i = 0 ; i < n ; i++){
    scanf("%d%d",&s,&t);

    for(j = 0 ; j < t ; j++){
      scanf("%d%d",&u,&v);
      M[s][u] = v;
    }
  }

  Dijkstra();

  return 0;
}

void Dijkstra(){
  int i=0;
  int min, s, v;
  int d[MAX];
  int iro[MAX];

  while(i<n){
    i++;
    d[i] = INFTY;
    iro[i] = SHIRO;
  }

  d[0] = 0;
  iro[0] = NEZUMI;

  while(1){
    min = INFTY;
    s = -1;
    for(i = 0 ; i < n ; i++){
      if(min > d[i] && iro[i] != KURO){
	s = i;
	min = d[i];
      }
    }

    if(s == -1) break;

    iro[s] = KURO;



    for(v = 0 ; v < n ; v++){
      if(iro[v] != KURO && M[s][v] != INFTY){
	if(d[s] + M[s][v] < d[v]){
    
	  d[v] = d[s] + M[s][v];
	  iro[v] = NEZUMI;
	}
      }
    }
  }

  for(i = 0 ; i < n ; i++){



    printf("%d ",i);

    if(d[i] == INFTY) printf("-1\n");



    else printf("%d\n",d[i]);
  }
}

