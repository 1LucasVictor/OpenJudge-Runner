#include <stdio.h>
#define N 102
#define WHITE 0
#define GRAY 1
#define BLACK 2
#define INF 1000000

int S[N][N],color[N],d[N],pi[N],sum=0,n;


void prim(int r){
  int i,u,min,v;
  for(i=0;i<n;i++){
  d[i]=INF;
  pi[i]=-1;
  color[i]=WHITE;
  }


  d[r]=0;

  while(1){
    min =INF;
    u=-1;
    for(i=0;i<n;i++){
      if (color[i] != 1 && d[i] < min){
      min = d[i];
      u = i;
    }
  }
    if (u==-1){
      break;
    }

color[u] = 1;

for (v=0;v<n;v++){
    if (color[v] != 1 && S[u][v] < d[v] && S[u][v] != -1){
      pi[v] = u;
      d[v] = S[u][v];
    }
  }
}
  for(i=0;i<n;i++){
    if(pi[i] != -1)sum+=S[i][pi[i]];
  }

}

int main(){

int i,j;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
    scanf("%d",&S[i][j]);
    }
  }
prim(0);
printf("%d\n",sum);
return 0;
}