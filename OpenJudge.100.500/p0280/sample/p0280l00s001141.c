#include<stdio.h>
#include<limits.h>

static const int MAX = 500;
static const int INFTY = (1<<21);

int main(){
  int n, i, j, e, sum;
  int d[MAX], M[MAX][MAX],min,k;

  scanf("%d", &n);

  for ( i = 0; i< n; i++ ){
    for ( j = 0; j < n; j++ ){
      scanf("%d", &e);
      M[i][j] = (e==-1)?INFTY:e;
    }
  }
  
  
  for(i=1; i<n; i++){
    d[i] = INT_MAX;
  }
  d[0] = 0;
  min = INT_MAX;
  for(k=1; k<=n; k++){
    for(i=0; i<n; i++){
      for(j=0; j<n; j++){
	if(M[i][j] != -1){
	  if(min > M[i][j])
	    min = M[i][j];
	}
      }
    }
    d[k] = d[k-1] + min;
  }
  printf("%d\n", d[n]);
  
  return 0;
}