#include<stdio.h>
static const int MAX = 500;
static const int INFTY = (1<<21);
int main(void){
  int n, i, j;
  int M[MAX][MAX];
  int d[MAX];
  int tmp[MAX];
  int m;
  int u, k, c, v;
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
  for( i=0; i<n; i++ ){
	  tmp[i]=0;
	  d[i]=INFTY;
  }
  d[0]=0;
  m=INFTY;
  while(1){
	  m=INFTY;
	  u=-1;
	  for( i=0; i<n; i++ ){
		  if(d[i]<m&&(tmp[i]==0)){
			  u=i;
			  m=d[i];
		  }
	  }
	  if(u==-1)break;
	  tmp[u]=1;
	  for( v=0; v<n; v++ ){
		  if(d[v]>=d[u]+M[u][v]) d[v]=d[u]+M[u][v];
	  }
  }
  for ( i = 0; i < n; i++ ) printf("%d %d\n", i, (d[i]==INFTY?-1:d[i]));
  return 0;
}