
#include<stdio.h>
#define N 100
#define WHITE 0
#define BLACK 1
#define INFTY 100000

int n,m[N][N];

int prim(){
  int color[N],d[N],p[N],i,j,min,u,sum=0;
  for(i=0;i<n;i++){
    d[i] = 2001;
    p[i] = -1;
    color[i] = WHITE;
  }

  d[0] =0;

  while(1){
    min = 2001;
    for(i=0;i<n;i++){
      if(min>d[i] && color[i]!=BLACK){
	u = i;
	min = d[i];
      }
    }
    if(min == 2001)break;
    color[u] = BLACK;
    for(j=0;j<n;j++){
      if(color[j]!=BLACK){
	if(d[j]>m[u][j] && m[u][j]!= -1){
	  d[j] = m[u][j];
	  p[j] = u;
	 
	}
      }
    }
  }
  for(i=0;i<n;i++){
    if(p[i]!=-1){
      sum += m[i][p[i]];
    }
  }
    return sum;

}

int main(){
  int i,j;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      scanf("%d",&m[i][j]);
    }
  }
  printf("%d\n",prim());
  return 0;
}