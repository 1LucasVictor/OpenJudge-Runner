#include<stdio.h>
#define MAX 100
#define INFTY (1<<21)
#define WHITE 0
#define GRAY 1
#define BLACK 2

int n,M[MAX][MAX];

void dig(){
  int minv,d[MAX],iro[MAX];
  int i,j,u,v;
  for(i=0;i<n;i++){
    d[i]=INFTY;
    iro[i]=WHITE;
  }
  d[0]=0;
  iro[0]=GRAY;
  while(1){
    minv=INFTY;
    u=-1;
    for(i=0;i<n;i++){
      if(minv>d[i] && iro[i]!=BLACK){
	u=i;
	minv=d[i];
      }
    }
    if(u==-1)break;
    iro[u]=BLACK;
    for(v=0;v<n;v++){
      if(iro[v]!=BLACK && M[u][v]!=INFTY){
	if(d[v]>d[u] + M[u][v]){
	  d[v]=d[u]+M[u][v];
	  iro[v]=GRAY;
	}
      }
    }
  }
  for(i=0;i<n;i++){
    printf("%d ",i);
    if(d[i]==INFTY)printf("-1\n");
    else printf("%d\n",d[i]);
  }
}

int main(){
  int i,j;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      M[i][j]=INFTY;
    }
  }
  int k,c,u,v;
  for(i=0;i<n;i++){
    scanf("%d",&u);
    scanf("%d",&k);
    for(j=0;j<k;j++){
      scanf("%d",&v);
      scanf("%d",&c);
      M[u][v]=c;
    }
  }
  dig();

  return 0;
}