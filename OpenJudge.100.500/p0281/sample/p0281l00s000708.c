#include <stdio.h>
#define N 1000000
  
int main(){
  int i,j,n,min,a,b,c;
  int G[100][100],k[100],d[100];
  
  scanf("%d",&n);
  
  for(i=0;i<n;i++){
    k[i]=0;
    d[i]=N;
    for(j=0;j<n;j++){
      G[i][j]=-1;
    }
  }
  for(i=0;i<n;i++){
    scanf("%d %d",&a,&b);
    for(j=0;j<b;j++){
      scanf("%d",&c);
      scanf("%d",&G[a][c]);
    }
  }
  d[0]=0;
  while(1){
    min=N;
    for(i=0;i<n;i++){
      if(k[i]!=1&&d[i]<min){
        min=d[i];
        a=i;
      }
    }
  
    if(min==N){
      break;
    }
    for(i=0;i<n;i++){
      if(G[a][i]!=-1&&k[i]!=1&&d[a]+G[a][i]<d[i])
        d[i]=d[a]+G[a][i];
    }
    k[a]=1;
  }
  for(i=0;i<n;i++){
    printf("%d %d\n",i,d[i]);
  }
  return 0;
}