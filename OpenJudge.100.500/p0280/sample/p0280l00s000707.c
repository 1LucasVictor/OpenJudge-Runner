#include<stdio.h>

static const int MAX = 500;
static const int INFTY = (1<<21);

int main() {
  int n,i,j,e,sum,t,x,minv,M[MAX][MAX],d[MAX],P[MAX],vis[MAX];

  scanf("%d",&n);

  for(i = 0 ; i < n ; i++) {
    for(j = 0 ; j < n ; j++) {
      scanf("%d",&e);
      M[i][j] = (e==-1)?INFTY:e;
    }
  }

  for(i = 0 ; i < n ; i++) {
    d[i] = INFTY;
    P[i] = -1;
    vis[i] = 0;
  }

  d[0] = 0;

  while(1) {
    minv = INFTY;
    t = -1;
    for(i = 0 ; i < n ; i++) {
      if(minv > d[i] && !vis[i]) {
        t = i;
        minv = d[i];
      }
    }
    if(t == -1)
      break;
    vis[t] = 1;
    for(x = 0 ; x < n ; x++) {
      if(!vis[x] && M[t][x] != INFTY) {
        if(d[x] > M[t][x]) {
          d[x] =  M[t][x];
          P[x] = t;
        }
      }
    }
  }

  sum = 0;

  for(i = 0 ; i < n ; i++) {
    if(P[i] != -1)
      sum += M[i][P[i]];
  }
  printf("%d\n",sum);
  return 0;
}

