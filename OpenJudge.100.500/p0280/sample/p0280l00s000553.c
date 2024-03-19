#include <stdio.h>

 
static const int MAX = 500;
static const int INFTY = (1<<21);
 
main(){
  int n, i, j, e, sum=0;
  int M[MAX][MAX];
  int d[MAX],p[MAX],v[MAX];
  int a,point=0;
  
   
   
 
  scanf("%d", &n);
   
  for ( i = 0; i< n; i++ ){
    for ( j = 0; j < n; j++ ){
      scanf("%d", &e);
      M[i][j] = (e==-1)?INFTY:e;
    }
  }
 
  for(i = 0; i < n; i++){
    v[i] = 0;
    d[i] = INFTY;
    p[i] = -1;
  }
   
  d[0] = 0;
   
  while(1){
    a = -1;
    point = INFTY;
     
    for(i = 0; i < n; i++){
 
      if(d[i] < point && !v[i]){
      a = i;
      point = d[i];
      }
    }
     
    if(a == -1){
      break;
    }
     
    v[a] = 1;
   
    for(j = 0; j < n; j++){
      
      if(M[a][j] < d[j] && !v[j]){
    p[j] = a;
    d[j] = M[a][j];
      }
    }
  }
   
   
  //   sum = 0;
   
  for(i = 0; i < n; i++){
    if(p[i] != -1){
      sum += M[i][p[i]];
    }
  }
   
  printf("%d\n",sum);
   
  return 0;
}