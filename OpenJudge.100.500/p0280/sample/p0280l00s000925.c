#include <stdio.h>
#define MAX 100
static const int INFTY = (1<<21);
int n,A[MAX][MAX];

int prim();

int main(){
  int i,j,s;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      scanf("%d",&s);
      A[i][j]=(s==-1)?INFTY : s;
    }
  }
  printf("%d\n",prim());
  return 0;
}

int prim(){
  int e,min,i,v,sum=0;
  int g[MAX],r[MAX],a[MAX];

  for(i=0;i<n;i++){
    g[i]=INFTY;
    r[i]=-1;
    a[i]=0;
  }
  g[0]=0;

  while(1){
    min=INFTY;
    e=-1;
    for(i=0;i<n;i++){
      if(min>g[i]&&a[i]!=2){
	e=i;
	min=g[i];
      }
    }
    if(e==-1)
      break;
    a[e]=2;
    for(v=0;v<n;v++){
      if(a[v]!=2&&A[e][v]!=INFTY){
	if(g[v]>A[e][v]){
	  g[v]=A[e][v];
	  r[v]=e;
	  a[v]=1;
	}
      }
    }
  }
  for(i=0;i<n;i++){
    if(r[i]!=-1)
      sum+=A[i][r[i]];
  }
  return sum;
}

