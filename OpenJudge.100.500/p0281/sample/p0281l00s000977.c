#include <stdio.h>
#define N 100
#define INFTY 1000000
#define NO 0
#define DISCOVERY 1
#define FINISHING 2
int n,ans[N][N];
void daikusutora() {
  int minv;
  int discover[N],check[N];
  for(int i=0;i<n;i++){
    discover[i]=INFTY;
    check[i]=NO;
  }
  discover[0]=0;
  check[0]=DISCOVERY;
  while(1){
    minv=INFTY;
    int u=-1;
    for(int i=0;i<n;i++){
      if(minv > discover[i] && check[i]!=FINISHING){
	u=i;
	minv=discover[i];
      }
    }
    if(u==-1)break;
    check[u]=FINISHING;
    for(int v=0;v<n;v++){
      if(check[v]!=FINISHING && ans[u][v]!=INFTY){
	if(discover[v]>discover[u]+ans[u][v]){
	  discover[v]=discover[u]+ans[u][v];
	  check[v]=DISCOVERY;
	}
      }
    }
  }
  for(int i=0;i<n;i++){
    printf("%d %d\n",i,(discover[i]==INFTY ? -1:discover[i]));
  }
}

int main() {
  scanf("%d",&n);
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++)ans[i][j]=INFTY;
  }
  int k,c,u,v;
  for(int i=0;i<n;i++){
    scanf("%d%d",&u,&k);
    for(int j=0;j<k;j++){
      scanf("%d%d",&v,&c);
      ans[u][v]=c;
    }
  }
  daikusutora();
  return 0;
}

