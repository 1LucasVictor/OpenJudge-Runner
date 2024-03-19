#include<stdio.h>
#define N 100
#define INF 100000
#define origin 0
#define discover 1
#define death 2
int n,A[N][N];
int prim(void);
int main(){
  int x,i,j,z;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      scanf("%d",&x);
      if(x==-1)
	A[i][j]=INF;
      else
	A[i][j]=x;
    }
  }
  z=prim();
  printf("%d\n",z);
  return 0;
    }

int prim(void){
  int condition[N],a[N],b[N];
  int i,v,mincost,u,z;
  for(i=0;i<n;i++){
    a[i]=INF;
    b[i]=-1;
    condition[i]=origin;
  }
  a[0]=0;
  while(1){
    mincost=INF;
    u=-1;
    for(i=0;i<n;i++){
      if(condition[i]!=death&&a[i]<mincost){
	u=i;
	mincost=a[i];
      }
    }
    if(u==-1)
      break;
    condition[u]=death;
    for(v=0;v<n;v++){
      if(condition[v]!=death&&A[u][v]!=INF){
	if(a[v]>A[u][v]){
	  a[v]=A[u][v];
	  b[v]=u;
	  condition[v]=discover;
	}
      }
    }
  }
 
  z=0;
  for(i=0;i<n;i++){
    if(b[i]!=-1)
      z+=A[i][b[i]];
  }
  return z;
}

