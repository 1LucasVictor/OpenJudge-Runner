#include<stdio.h>

int n,size[101],t[101][101],cost[101][101],distance[101];

void spp(int x,int y){
  int i;
  distance[x]=y;

  for(i=0;i<size[x];i++){
    if(distance[t[x][i]]>y+cost[x][i]) spp(t[x][i],y+cost[x][i]);
  }
}

int main(){
  int i,j;
  scanf("%d",&n);

  for(i=0;i<n;i++){
    int a;
    scanf("%d",&a);
    scanf("%d",&size[a]);

    for(j=0;j<size[a];j++){
      scanf("%d",&t[a][j]); 
      scanf("%d",&cost[a][j]);
    }
  }

  for(i=0;i<n;i++) distance[i]=114514810;
  spp(0,0);
  for(i=0;i<n;i++){
    printf("%d %d\n",i,distance[i]);
  }
  return 0;
}