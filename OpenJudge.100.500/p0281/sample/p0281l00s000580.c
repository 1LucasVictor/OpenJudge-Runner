#include<stdio.h>
#define N 100
#define INF 1000000
int g[N][N],n,d[N];

void sssp(void){//全ての点の最短経路を求める
  int i,j,judge[n],min,u;
  for(i=0;i<n;i++){
    d[i]=INF;
    judge[i]=1;//1は未訪問　0は探索中　-1は探索終了
  }
  d[0]=0;

  while(1){
    min=INF;
    for(i=0;i<n;i++){
      if(judge[i]!=-1&&d[i]<min){
                min=d[i];
                u=i;
      }
    }
      if(min==INF)break;
      judge[u]=-1;

    for(i=0;i<n;i++){
      if(judge[i]!=-1&&g[u][i]!=-1){
        if(g[u][i]+d[u]<d[i]){
          d[i]=g[u][i]+d[u];
          judge[i]=0;
        }
      }
    }
  }
}



int main(){
  int i,j,k,l,v,num;


  scanf("%d",&n);
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        g[i][j]=-1;
    }
}

    for(j=0;j<n;j++){
      scanf("%d%d",&num,&k);
      for(l=0;l<k;l++){
          scanf("%d",&v);
          scanf("%d",&g[num][v]);
      }
    }
  
  sssp();
  for(i=0;i<n;i++){
      printf("%d %d\n",i,d[i]);
  }
  return 0;
}
