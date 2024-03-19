#include<stdio.h>
#define MAX 1000000
#define E -1
#define A 0
#define B 1
#define C 2

int n;
int M[100][100];

void dkr(){
  int d[100];
  int alph[100];
  int min,u;
  int i,v;

  for(i = 0 ; i < n ; i++){
    d[i] = MAX;
    alph[i] = A;
  }

  d[0] = 0;
  alph[0] = B;

  while(1){
    min = MAX;
    u = E;
    for(i = 0 ; i < n ; i++){
      if(alph[i] != C && d[i] < min){
        min = d[i];
        u = i;
      }
    }

    if(u == E)break;
    alph[u] = C;

    for(v=0;v<n;v++){
      if(alph[v] != C && M[u][v] != MAX){
        if(d[u] + M[u][v] < d[v]){
          d[v] = d[u] + M[u][v];
          alph[v] = B;
        }
      }
    }
  }

  for(i = 0 ; i < n ; i++){
    printf("%d %d\n",i,(d[i] == MAX? -1 : d[i]));
  }
}

int main(){
  int k,u,c,v;
  int i,j;


  scanf("%d",&n);
  for(i = 0 ; i < n ; i++){
    for(j = 0 ; j < n ; j++){
      M[i][j] = MAX;
    }
  }

  for(i = 0 ; i < n ; i++){
    scanf("%d%d",&u,&k);
    for(j = 0 ; j < k ; j++){
      scanf("%d%d",&v,&c);
      M[u][v] = c;
    }
  }

  dkr();

  return 0;
}

