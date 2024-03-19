#include <stdio.h>
#include <limits.h>

#define N 100
#define INF INT_MAX
#define MY_NIL -2

int n;
int a[N][N]={0};

void dijkstra();

int main(){
  int i,j,k,u,v,c;
  scanf("%d",&n);
  for(i=0; i<n; i++){
    scanf("%d %d",&u,&k);
    for(j=0; j<k; j++){
      scanf("%d %d",&v,&c);
      a[u][v]=c;
    }
  }
  for(i=0; i<n; i++){
    for(j=0; j<n; j++){
      if(a[i][j]==0){
	a[i][j]=INF;
      }
    }
  }
  dijkstra(0);
  return 0;
}

void dijkstra(int s){
  int i,u,min;
  int d[N],pi[N];
  char color[N]={0};
  for(i=0; i<n; i++){
    d[i]=INF;
    pi[i]=MY_NIL;
  }
  d[s]=0;
  while(1){
    min=INF;
    for(i=0; i<n; i++){
      if(color[i]!='B' && d[i]<min){
	min=d[i];
	u=i;
      }
    }
    if(min==INF){
      break;
    }
    color[u]='B';
    for(i=0; i<n; i++){
      if(color[i]!='B' && d[u]+a[u][i]<d[i] && a[u][i]!=INF){
	pi[i]=u;
	d[i]=d[u]+a[u][i];
      }
    }
  }
  for(i=0; i<n; i++){
    printf("%d %d\n",i,d[i]);
  }
}

