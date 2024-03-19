#include<stdio.h>

static const int MAX = 500;
static const int INFTY = (1<<21);

int main(){
  int n, i, j, e, sum;
  int M[MAX][MAX],p[MAX],min;

  scanf("%d", &n);

  for ( i = 0; i< n; i++ ){
    for ( j = 0; j < n; j++ ){
      scanf("%d", &e);
      M[i][j] = (e==-1)?INFTY:e;
    }
  }
  p[0]=-1;
  for(i=1 ; i<n ; i++){
    min=100000000000000;
      for(j=0 ; j<n ; j++){
	if(M[i][j]==-1) continue;
	else{
	  if(min>=M[i][j]){
	    min=M[i][j];
	    p[i]=j;
	  }
	  else continue;
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
  