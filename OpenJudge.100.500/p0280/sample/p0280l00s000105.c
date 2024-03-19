#include<stdio.h>
static const int MAX = 100;
static const int INFTY = (1<<21);

int main(){
  int M[MAX][MAX];
  int d[MAX];
  int p[MAX];
  int c[MAX];
  int n,i,j,a,sum,m,u,v;

  scanf("%d", &n);

  for(i = 0;i < n;i++){
    for(j = 0;j < n;j++){
      scanf("%d",&a);
      M[i][j] = (a==-1)?INFTY:a;
    }
  }

  for(i = 0;i < n;i++){
    d[i] = INFTY;
    p[i] = -1;
    c[i] = 0;
  }

  d[0] = 0;

  while(1){
    m = INFTY;
    u = -1;
    for(i = 0;i < n;i++){
      if(m > d[i] && !c[i]){
	u = i;
	m = d[i];
      }
    }
    if(u == -1)break;
    c[u] = 1;
    for(v = 0;v < n;v++){
      if(!c[v] && M[u][v] != INFTY){
	if(d[v] > M[u][v]){
	  d[v] =  M[u][v];
	  p[v] = u;
	}
      }
    }
  }
  sum = 0;
  for(i = 0;i < n;i++){
    if(p[i] != -1){
      sum += M[i][p[i]];
    }
  }
  printf("%d\n",sum);
}

