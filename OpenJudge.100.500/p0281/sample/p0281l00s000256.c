#include <stdio.h>
#define inf 10000005
#define WHITE 0
#define GRAY 1
#define BLACK 2
#define Max 105

int n,M[Max][Max];

void dijkstra();

int main(){
  int i,k,c,u,v,j;
  scanf("%d",&n);
  for(i=0; i < n; i++){
    for(j=0; j < n; j++){
      M[i][j]=inf;
    }
  }

  for(i=0; i < n; i++){
    scanf("%d%d",&u,&k);
    for(j=0; j < k; j++){
      scanf("%d%d",&v,&c);
      M[u][v]=c;
    }
  }

  dijkstra();

  return 0;
}

void dijkstra(){
  int miniv,i,v,u,d[Max],color[Max];

  for(i=0; i < n; i++){
    d[i]=inf;
   color[i]=WHITE;
  }
  d[0]=0;
  color[0]=GRAY;

  while(1){
    miniv=inf;
    u=-1;
    for(i=0; i < n; i++){
      if(miniv >d[i] && color[i] != BLACK){
        u=i;
        miniv=d[i];
      }
    }

    if(u==-1) break;
    color[u]=BLACK;

    for(v=0; v < n; v++){
     if(color[v] != BLACK && M[u][v] != inf){
        if(d[v] > d[u]+M[u][v]){
          d[v]=d[u]+M[u][v];
          color[v]=GRAY;
        }
      }
    }
  }

  for(i=0; i < n; i++){
    printf("%d ",i);
    if(d[i]==inf){
      printf("1\n");
    }
    else printf("%d\n",d[i]);
  }
}