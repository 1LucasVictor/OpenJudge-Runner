#include<stdio.h>
#define MAX 500
#define INFTY  (1<<21)
#define NIL -1
main(){
  int n, i, j, e, sum,k,a,v1;
  int min,pi[MAX],v[MAX],u,c[MAX],M[MAX][MAX];
  
  scanf("%d", &n);

  for(i=0;i<n;i++){
    c[i]=INFTY;
    pi[i]=NIL;
    v[i]=0;
  }
  c[0]=0;

  for ( i = 0; i< n; i++ ){
    for ( j = 0; j < n; j++ ){
      M[i][j] = INFTY;
    }
  }
  
  for ( i = 0; i < n; i++ ){
    scanf("%d %d", &u, &k);
    for ( j = 0; j < k; j++ ){
      scanf("%d %d", &v1, &a);
      M[u][v1] = a;
    }
  }
  while(1){
    min=INFTY;
    u=NIL;
    for(i=0;i<n;i++){
      if(min>c[i] && !v[i]){
	u=i;
	min=c[i];
      }
    }
    if(u==NIL)break;
    v[u]=1;
    for(j=0;j<n;j++){
      if(M[u][j]+c[u]<c[j] && !v[j]){
	pi[j]=u;
	c[j]=c[u]+M[u][j];
      }
    }
  }
  
  for ( i = 0; i < n; i++ ){
    printf("%d %d\n", i, (c[i]==INFTY?-1:c[i]));
  }
  
  return 0;
}