#include<stdio.h>

static const int MAX = 500;
static const int INFTY = (1<<21);

main(){
  int n, i, j;
  int M[MAX][MAX],u,k,v,c;
  int key[MAX],vis[MAX],pi[MAX],minv;
  
  scanf("%d", &n);
  for ( i = 0; i< n; i++ ){
    for ( j = 0; j < n; j++ ){
      M[i][j] = INFTY;
    }
  }
  
  for ( i = 0; i < n; i++ ){
    scanf("%d %d", &u, &k);
    for ( j = 0; j < k; j++ ){
      scanf("%d %d", &v, &c);
      M[u][v] = c;
    }
  }

  for(i=0; i<n; i++){
    key[i]=INFTY;
    vis[i]=0;
    pi[i]=-1;
  }
  
  key[0]=0;
  
  while(1){
    u=-1;
    minv=INFTY;
    
    for(i=0; i<n; i++){
      if(key[i] < minv && !vis[i]){
	u=i;
	minv=key[i];
      }
    }
    
    if(u==-1)
      break;
    
    vis[u]=1;
    for(i=0; i<n; i++){
      if(key[i] >=M[u][i]+key[u] && !vis[i]){
	pi[i]=u;
	key[i]=M[u][i]+key[u];
      }
    }
  }
  
  
  for ( i = 0; i < n; i++ ){
    printf("%d %d\n", i, (key[i]==INFTY?-1:key[i]));
  }
  
  return 0;
}