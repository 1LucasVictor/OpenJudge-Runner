#include <stdio.h>
#define INFTY 2000000000
#define WHITE 0
#define GRAY 1
#define BLACK 2

int n,A[100][100];

int prim(){
  int u,i,j,k,min,sum=0,d[100],p[100],color[100];
  for(i=0;i<n;i++){
    d[i]=INFTY;
    p[i]=-1;
    color[i]=WHITE;
  }
  d[0]=0;
  while(1){
    min=INFTY;
    u=-1;
    for(i=0;i<n;i++){
      if(min>d[i] && color[i]!=BLACK){
	u=i;
	min=d[i];
      }
    }
    if(u==-1)
      break;
    color[u]=BLACK;
    for(k=0;k<n;k++){
      if(color[k]!=BLACK && A[u][k]!=INFTY){
	if(d[k]>A[u][k]){
	  d[k]=A[u][k];
	  p[k]=u;
	  color[k]=GRAY;
	}
      }
    }
  }
  for(i=0;i<n;i++){
    if(p[i]!=-1)
      sum+=A[i][p[i]];
  }
  return sum;
}



int main(){
  int i,j,a;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      scanf("%d",&a);
      A[i][j]=a;
      if(a==-1)
	A[i][j]=INFTY;
    }
  }
  printf("%d\n",prim());
}

