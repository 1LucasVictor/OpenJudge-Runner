#include<stdio.h>
#define N 101

int main(){
  int G[N][N],A[N],key[N],p[N];
  int i,j,n,count=0,cost,u=0;

  scanf("%d",&n);

  for(i=0 ; i<n ; i++){
    for(j=0 ; j<n ; j++){
      scanf("%d",&G[i][j]);
    }
  }

  for(i=0 ; i<n ; i++){
    A[i] = 0;
    p[i] = -1;

    if(i==0)key[i] = 0;
    else key[i] = 2001;
    
  }


  while(cost != 2001){
    cost = 2001;
    for(i=0 ; i<n ; i++){
      if(A[i]!=2 && key[i]<cost){
	/*２は探索済み*/
	cost = key[i];
	u = i;
      }
    }

    A[u]=2;
    for(i=0 ; i<n ; i++){
      if(G[u][i] != -1 && A[i] != 2 && G[u][i]<key[i]){
	p[i] = u;
	key[i] = G[u][i];
	A[i] = 1;
      }
    }
  }

  for(i=0 ; i<n ; i++){
    if(p[i] != -1){
      count += G[i][p[i]];
    }
  }

    printf("%d\n",count);

    return 0;
  }