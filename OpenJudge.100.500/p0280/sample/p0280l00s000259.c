#include<stdio.h>

#define MAX 2001
#define W 0
#define G 1
#define B 2

int n, M[MAX][MAX];

int prim(void){
  int i,v, u, minv,sum=0;
  int d[MAX],p[MAX],color[MAX];

  for(i=0;i<n;i++){
    d[i] = MAX;
    p[i] = -1;
    color[i] = W;
  }

  d[0] = 0;

  while(1){
    minv = MAX;
    u = -1;
    for(i=0;i<n;i++){
      if(minv>d[i]&&color[i]!=B){
	u=i;
	minv=d[i];
      }
    }
    if(u==-1)break;
    color[u]=B;
    sum += d[u];

      
    for(v=0;v<n;v++){
      if(color[v]!=B&&M[u][v]<d[v]&&M[u][v]>-1){
	p[v]=u;
	d[v]=M[u][v];
      }
    }
  }
  return sum;
}

int main(){
  int i,j,e;
  scanf("%d",&n);

  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      scanf("%d",&M[i][j]);
    }
  }

  e = prim();

  printf("%d\n",e);

  return 0;
}

