#include <stdio.h>

int n,M[101][101];

void dijkstra(){
  int minv,i,v,u;
  int d[101],color[101];

  for(i=0;i<n;i++){
    d[i]=100000000;
    color[i]=0;
  }
  
  d[0]=0;
  color[0]=1;
  while(1){
    minv=100000000;
    u=-1;
    for(i=0;i<n;i++){
      if(minv>d[i] && color[i]!=2){
	u=i;
	minv=d[i];
      }
    }
    if(u==-1) break;
    color[u]=2;
    for(v=0;v<n;v++){
      if(color[v]!=2 && M[u][v]!=100000000){
	if(d[v] > d[u]+M[u][v]){
	  d[v]=d[u]+M[u][v];
	  color[v]=1;
	}
      }
    }
  }
  for(i=0;i<n;i++){
    printf("%d ",i);
    if(d[i]==100000000){
      printf("1\n");
    }
      else   printf("%d\n",d[i]);
    
  }
}

int main(){
  int i,j,u,k,v,c;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      M[i][j]=10000000;
    }
  }
  for(i=0;i<n;i++){
    scanf("%d %d",&u,&k);
    for(j=0;j<k;j++){
      scanf("%d %d",&v,&c);
      M[u][v]=c;
    }
  }
  
  dijkstra();
  return 0;
}