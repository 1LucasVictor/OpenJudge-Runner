#include<stdio.h>
  
int n, G[110][110];
int u, k, v, mincost, a, c[110], d[110], p[110];

void prim(){

  int i, j;

  for(i = 0; i < n; i++){
    c[i] = 0;
    p[i] = -1;
    d[i] = 1000;
  }
  
  d[0]=0;
  
  while(1){
    mincost = 1000;
    for(i = 0; i < n; i++){
      if(c[i] != 2 && d[i] < mincost){
	mincost = d[i];
	a = i;
      }
    }
    
    if(mincost == 1000) break;
       
    c[a] = 2;
  
    for(i = 0; i < n; i++){
      if(G[a][i] != -1 && c[i] != 2 && (G[a][i] + d[a]) < d[i]){
	p[i]= a;
	d[i] = G[a][i] + d[a];
	c[i] = 1;
      }
    }
  }
  
  for(i = 0 ; i < n; i++)
    printf("%d %d\n", i, d[i]);

}

int main(){
 
  int i, j, c;
  
  scanf("%d",&n);
  
  for(i = 0; i < 110; i++){
    for( j = 0; j < 110; j++){
      G[i][j] = -1;
    }
  }
  
  for(i = 0; i < n; i++){
    scanf("%d%d",&u,&k);
    for(j = 0 ;j < k ;j++){
      scanf("%d%d",&v,&c);
      G[u][v] = c;
    }
  }
  
  prim();
  
  return 0;
 
}