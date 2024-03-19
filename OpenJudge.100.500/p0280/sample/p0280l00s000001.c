#include <stdio.h>
#define N 100
#define INFTY 1000000
#define NO 0
#define DISCOVERY 1
#define FINISHING 2

int n,ans[N][N];

int prim() {
  int u,minv;
  int discover[N],parent[N],check[N];
  for(int i=0;i<n;i++){
    discover[i]=INFTY;
    parent[i]=-1;
    check[i]=NO;
  }
  discover[0]=0;
  while(1){
    minv=INFTY;
    u=-1;
    for(int i=0;i<n;i++){
      if(minv > discover[i] && check[i] != FINISHING){
	u=i;
	minv=discover[i];
      }
    }
    if(u==-1)break;
    check[u]=FINISHING;
    for(int v=0;v<n;v++){
      if(check[v]!=FINISHING && ans[u][v]!=INFTY){
	if(discover[v] > ans[u][v]){
	  discover[v]=ans[u][v];
	  parent[v]=u;
	  check[v]=DISCOVERY;
	}
      }
    }
  }
  int sum=0;
  for(int i=0;i<n;i++){
    if(parent[i]!=-1)sum+=ans[i][parent[i]];
  }
  return sum;
}

int main() {
  scanf("%d",&n);
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      int e;
      scanf("%d",&e);
      ans[i][j]=(e==-1)?INFTY:e;
    }
  }
  printf("%d\n",prim());
  return 0;
}

