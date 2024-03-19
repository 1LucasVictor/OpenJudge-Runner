#include<stdio.h>

#define N 2001
#define WHITE 1
#define GRAY -1
#define BLACK 2

int n,A[N][N],pi[N],d[N],color[N],min;

int prim(void){
  int i,u,v,sum=0;

  for(u=0;u<n;u++){
    d[u]=N;
    pi[u]=NULL;
    color[u]=WHITE;
  }

  d[0]=0;

  while(1){
    min=N;
    u=-1;
    for(i=0;i<n;i++){
      if(color[i]!=BLACK && d[i]<min){
	min=d[i];
	u=i;
      }
    }

    if(u==-1) break;

    color[u]=BLACK;

    sum+=d[u];

    for(v=0;v<n;v++){
      if(color[v]!=BLACK && A[u][v]<d[v] && A[u][v]>-1){
	pi[v]=u;
	d[v]=A[u][v];
      }
    }
  }

  return sum;
}
int main(){
  int i,j,w;

  scanf("%d",&n);

  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      scanf("%d",&A[i][j]);
    }
  }

  w=prim();

  printf("%d\n",w);

  return 0;
}

