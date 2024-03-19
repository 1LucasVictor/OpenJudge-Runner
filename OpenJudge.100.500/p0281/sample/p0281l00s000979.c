#include<stdio.h>
#define MAX 100
#define INFTYtw 1000000
#define WHITEtw 0
#define GRAYtw 1
#define BLACKtw 2

int n,Mtw[MAX][MAX];

void dijkstra(){
  int i,v,minv;
  int d[MAX],color[MAX];

  for(i=0;i<n;i++){
    d[i]=INFTYtw;
    color[i]=WHITEtw;
  }

  d[0]=0;
  color[0]=GRAYtw;
  while(1){
    minv=INFTYtw;
    int u=-1;
    for(i=0;i<n;i++){
      if(minv>d[i]&&color[i]!=BLACKtw){
	u=i;
	minv=d[i];
      }
    }
    if(u==-1)break;
    color[u]=BLACKtw;
    for(v=0;v<n;v++){
      if(color[v]!=BLACKtw&&Mtw[u][v]!=INFTYtw){
	if(d[v]>d[u]+Mtw[u][v]){
	  d[v]=d[u]+Mtw[u][v];
	  color[v]=GRAYtw;
	}
      }
    }
  }
  for(i=0;i<n;i++){
    printf("%d ",i);
    if(d[i]==INFTYtw)printf("-1\n");
    else printf("%d\n",d[i]);
  }
}

int main(){
  int i,j;
  scanf("%d",&n);

  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      Mtw[i][j]=INFTYtw;
    }
  }

  int k,c,u,v;
  for(i=0;i<n;i++){
    scanf("%d %d",&u,&k);
    for(j=0;j<k;j++){
      scanf("%d %d",&v,&c);
      Mtw[u][v]=c;
    }
  }

  dijkstra();

  return 0;
}

