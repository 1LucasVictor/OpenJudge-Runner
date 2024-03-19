#include <stdio.h>
#define X 10000
#define W 0
#define B 1

int n;
int G[100][100],d[100],p[100],c[100];
int Pr(void);

int main(){
  int i,j;
  scanf("%d",&n);
  for(i=0; i<n; i++){
    for(j=0; j<n; j++) {
      scanf("%d",&G[i][j]);
    }
  }
  printf("%d\n",Pr());
  return 0;
}

int Pr(void){
  int min,u,v,i,wgt=0;
  for(u=0; u<n; u++){
    d[u]=X;
    p[u]=-1;
    c[u]=W;
  }
  d[0]=W;
  while(1){
    min=X;
    for(i=0; i<n; i++){
      if(c[i]!=B && d[i]<min){
	min=d[i];
	u=i;
      }
    }
    if(min==X) break;
    c[u]=B;
    for(v=0; v<n; v++){
      if(G[u][v]!=-1){
	if(c[v]!=B && G[u][v]<d[v]){
	  p[v]=u;
	  d[v]=G[u][v];
	}
      }
    }
  }
  for(i=0; i<n; i++) wgt+=d[i];
  return wgt;
}

