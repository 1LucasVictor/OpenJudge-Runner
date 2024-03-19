#include<stdio.h>
#define N 100
#define INF 1000000
#define origin 0
#define discover 1
#define death 2
void dijkstra(void);
int n,A[N][N];
int main(){
  int i,j,u,k,c,v;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      A[i][j]=INF;
      }
  }
  for(i=0;i<n;i++){
    scanf("%d %d",&u,&k);
  for(j=0;j<k;j++){
    scanf("%d %d",&v,&c);
    A[u][v]=c;
  }
}
  dijkstra(); 
  return 0;
}

void dijkstra(){
  int mincost,i,u,x;
  int a[N],condition[N];
  for(i=0;i<n;i++){
    a[i]=INF;
    condition[i]=origin;
}
  a[0]=0;
  condition[0]=discover;
  while(1){
    mincost=INF;
    u=-1;
    for(i=0;i<n;i++){
      if(mincost>a[i]&&condition[i]!=death){
	u=i;
	mincost=a[i];
      }
    }
    if(u==-1)
      break;
    condition[u]=death;
    for(x=0;x<n;x++){
      if(condition[x]!=death&&A[u][x]!=INF){
	if(a[x]>a[u]+A[u][x]){
	  a[x]=a[u]+A[u][x];
	  condition[x]=discover;
	}
      }
    }
  }
  for(i=0;i<n;i++){
    printf("%d ",i);
    if(a[i]==INF)
      printf("-1");
    else
      printf("%d",a[i]);
  printf("\n");
  }
}

