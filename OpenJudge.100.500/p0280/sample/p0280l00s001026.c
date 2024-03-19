#include<stdio.h>

static const int MAX = 500;
static const int INFTY = (1<<21);

int main(){
  int n, i, j, e, sum;
  int M[MAX][MAX];
  int d[MAX];
  int isA[MAX];
  int r;
  int u;
  
  scanf("%d", &n);
  
  for ( i = 0; i< n; i++ ){
    for ( j = 0; j < n; j++ ){
      scanf("%d", &e);
      M[i][j] = (e==-1?INFTY:e);
    }    
    d[i]=INFTY;
    isA[i]=0;
  }
  
  d[r]=0;

  while(1){
    int u,v=INFTY;
    
    for(i=0;i<n;i++){
      if(isA[i]==1)continue;
      if(v>d[i]){
	v=d[i];
	u=i;
      }
      isA[u]=1;
      for(j=0;j<n;j++){
	if(isA[j]==1)continue;
	if(d[j]>=M[u][j]){
	  d[j]=M[u][j];
	}
      }
    }
    if(v==INFTY)break;
    
  }
  
  
  
  
  
  sum = 0;
  
  for ( u = 0; u < n; u++ ){
    sum += d[u];
  }
  
  printf("%d\n", sum);
  
  return 0;
}