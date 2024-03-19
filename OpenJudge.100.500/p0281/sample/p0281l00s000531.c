#include <stdio.h>

void MST(int,int);

int n,v[100][100],d[100],u,k[100],c[100][100];

int main(){
  int i,j,u;
  
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d",&u);
    scanf("%d",&k[u]);
    for(j=0;j<k[u];j++){
      scanf("%d %d",&v[u][j],&c[u][j]);
    }
  }
  for(i=0;i<n;i++){
    d[i] = 1000000;
  }
  MST(0,0);
  for(i=0;i<n;i++){
    printf("%d %d\n",i,d[i]);
  }

  return 0;
}

void MST(int p,int x){
  int i;
  d[p] = x;
  for(i=0;i<k[p];i++){
    if(d[v[p][i]] > x+c[p][i]){
      MST(v[p][i],x+c[p][i]);
    }
  }
  return;
}