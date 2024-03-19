#include<stdio.h>
#define N 100
#define MAX 2000
#define INFTY (1<<21)


int A[N][N],n;

int prim();

int main(){
  int i,j,s;
  scanf("%d",&n);
  for(i=0; i<n;i++){
    for(j=0;j<n;j++){
      scanf("%d",&s);
      A[i][j] = (s == -1) ? INFTY : s;
    }
  }
  printf("%d\n",prim());
  return 0;
}


int prim(){
  int i,u,v,minv;
  int sum=0;
  int d[N],p[N],flg[N];

  for(i=0;i<n;i++){
    d[i] = INFTY;
    p[i] = -1;
    flg[i] = 0;
  }
  d[0] = 0;

  while(1){
    minv = INFTY;
    u=-1;
    for(i=0;i<n;i++){
      if(minv>d[i] && flg[i] != 2){
	u = i;
	minv= d[i];
      }
    }

    if(u==-1)break;
    flg[u] = 2;
    for(v=0;v<n;v++){
      if(flg[v] != 2 && A[u][v] != INFTY){
	if(d[v] > A[u][v]){
	  d[v] = A[u][v];
	  p[v] = u;
	  flg[v] = 1;
	}
      }
    }
  }
  for (i = 0;i<n ;i++){
    if(p[i] != -1)sum += A[i] [p[i]];
  }
  return sum;
}


