#include<stdio.h>
#define N 100
#define INF 99999
#define WHITE 0
#define BLACK 2
#define GRAY 1
int prim(int n,int A[N][N]){
  
  int i,p[N],mincost,cost[N],color[N],sum=0,k,ver;

  for(i=0;i<n;i++){
    cost[i] = INF;
    color[i] = WHITE;
  } //初期化
  cost[0] = 0;
 
 p[0] = -1;
  while(1){
   
    mincost = INF;
    for(i=0;i<n;i++){
        if(color[i] != BLACK && cost[i] < mincost){
      
      mincost = cost[i];
   
      ver = i; 
      }
    }

  
    
  
    if(mincost == INF)break; 
  sum += mincost;
  
  color[ver] = BLACK;

  for(k=0;k<n;k++){
    if(color[k] != BLACK && A[ver][k]!=-1){
      if(A[ver][k] < cost[k]){
          cost[k] = A[ver][k];
          p[k] = ver;
          color[k] = GRAY;
      }
        
    }
      
  }
  }
    
    return sum;
}




int main(){

  int i,j,answer,n,A[N][N];
  
  scanf("%d",&n);
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
         A[i][j] = -1; //ここで全て辺無しにしておく
    }
  }
  
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      scanf("%d",&A[i][j]);//ここで編の番号を入力。ないなら－１を入力
    
    }
  }

   answer = prim(n,A);

printf("%d\n",answer);


  return 0;
}

