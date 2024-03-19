#include<stdio.h>

#define Max 100
#define Inf (1<<21)
#define W 0
#define G 1
#define B 2

int n, M[Max][Max];

void dik(){
  int minv,i,v;
  int d[Max],col[Max];

  for(i=0;i<n;i++){
    d[i] = Inf;
    col[i]=W;
  }

  d[0] = 0;
  col[0] = G;

  while(1){
    minv = Inf;
    int u = -1;

    for(i=0;i<n;i++){
      if(minv > d[i] && col[i] != B){
        u = i;
        minv = d[i];
      }
    }
    if(u==-1)break;
    col[u] = B;
    for(v = 0;v<n;v++){
      if(col[v] != B && M[u][v] != Inf){
        if(d[v]> d[u] + M[u][v]){
          d[v] = d[u] + M[u][v];
          col[v] = G;
         }
      }
    }
  }

  for(i=0;i<n;i++){
    printf("%d ",i );
    if(d[i] == Inf)printf("-1\n" );
    else printf("%d\n",d[i]);
  }
}

int main(){
  int i,j,k,c,u,v;
  scanf("%d",&n);

  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      M[i][j] = Inf;
    }
  }

  for(i=0;i<n;i++){
    scanf("%d%d",&u,&k);
    for(j = 0;j<k;j++){
      scanf("%d%d",&v,&c);
      M[u][v]=c;
    }
    }

    dik();
    return 0;
}

