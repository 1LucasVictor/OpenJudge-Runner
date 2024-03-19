#include<stdio.h>
 
static const int MAX = 500;
static const int INFTY = (1<<21);
 
main(){
  int n, i, j, e, sum,k,a,V;
  int key,PI[MAX],v[MAX],u,c[MAX],M[MAX][MAX];
   
  scanf("%d", &n);
  for ( i = 0; i< n; i++ ){
    for ( j = 0; j < n; j++ ){
      M[i][j] = INFTY;
    }
  }
   
  for ( i = 0; i < n; i++ ){
    scanf("%d %d", &u, &k);
    for ( j = 0; j < k; j++ ){
      scanf("%d %d", &V, &a);
      M[u][V] = a;
    }
  }
  for(i=0;i<n;i++){
    c[i]=INFTY;
    PI[i]=-1;
    v[i]=0;
  }
  c[0]=0;
 
  while(1){
    key=INFTY;
    u=-1;
    for(i=0;i<n;i++){
      if(key>c[i] && !v[i]){
    u=i;
    key=c[i];
      }
    }
    if(u==-1)break;
    v[u]=1;
    for(j=0;j<n;j++){
      if(M[u][j]+c[u]<c[j] && !v[j]){
    PI[j]=u;
    c[j]=c[u]+M[u][j];
      }
    }
  }
   
  for ( i = 0; i < n; i++ ){
    printf("%d %d\n", i, (c[i]==INFTY?-1:c[i]));
  }
   
  return 0;
}