#include <stdio.h>
#define INF 102
#define NIL -1
#define WHITE 1
#define BLACK 3
int n,a[101][101],d[101],color[101],pi[101],adj[101];

void prim(int r){
  int i;
  for(i=1;i<=n;i++){
    d[i]=INF;
    pi[i]=NIL;
    color[i]=WHITE;
  }
  d[r]=0;
}
int main(){

  int i,j,min,sum=0,u,min2,f;
  scanf("%d",&n);
  for(i=1;i<=n;i++){
    for(j=1;j<=n;j++){
      scanf("%d",&a[i][j]);
      adj[i]=j;
    }
    prim(i);
  }

  while(1){

    min=INF;

    for(i=1;i<=n;i++){
      if(color[i] !=BLACK  && d[i]<min){
	if(0<=d[i]){
	  min=d[i];
	  u=i;
	}
      }
    }
      
      if(min==INF) break;

      color[u]=BLACK;

      for(j=1;j<=n;j++){
	if(color[j]!=BLACK && a[u][j]<d[j]){
	  if(0<=a[u][j]){
	  pi[j]=u;
	  d[j]=a[u][j];
	  }
	}

      }
    }
  
  for(i=1;i<=n;i++){
    if(pi[i]!=NIL){
      sum+=a[i][pi[i]];
    }
      
  }

    printf("%d\n",sum);




  return 0;
}