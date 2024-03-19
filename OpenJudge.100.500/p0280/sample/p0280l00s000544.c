#include<stdio.h>

static const int MAX = 500;
static const int INFTY = (1<<21);

int main(){
  int n, i, j, e, sum,u,m;
  /*
    
    your code
    

  */
  int M[MAX][MAX];
  int d[MAX];
  int k[MAX],p[MAX];
  
  scanf("%d", &n);
  
  for ( i = 0; i< n; i++ ){
    for ( j = 0; j < n; j++ ){
      scanf("%d", &e);
      M[i][j] = (e==-1)?INFTY:e;
    }
  }
  
  /*

    your code
    
  */
  for(i=0;i<n;i++){
    p[i]=-1;
    k[i]=INFTY;
    d[i]=0;
  }
  k[0]=0;
  
  while(1){
    u=-1;
    m=INFTY;
    
    for(i=0;i<n;i++){
      if( d[i]==0 && m>k[i] ){
	u=i;
	m=k[i];
      }
    }
    if(u==-1)break;
    d[u]=1;
    for(i=0;i<n;i++){
      if(k[i]>=M[u][i]&&d[i]==0){
	p[i]=u;
	k[i]=M[u][i];
      }
    }
  }
    
    sum = 0;
    
    for ( i = 0; i < n; i++ ){
      if ( p[i] != -1 ) sum += M[i][p[i]];
    }
  
  printf("%d\n", sum);
  
  return 0;
}