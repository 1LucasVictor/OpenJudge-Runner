#include<stdio.h>
#define MAX 500

static const int INFTY = (1<<21);

main(){
  int n,i,j,k,c,sum,u,v,minv;
  int A[MAX][MAX];
  int B[MAX],C[MAX],D[MAX];

  scanf("%d",&n);
  for ( i=0 ; i<n ; i++ ){
    for ( j=0 ; j<n ; j++ )
      A[i][j] = INFTY;
  }

  for ( i=0 ; i<n ; i++ ){
    scanf("%d %d",&u,&k);
    for ( j=0 ; j<k ; j++ ){
      scanf("%d %d",&v,&c);
      A[u][v] = c;
    }
  }

  for ( i=0 ; i<n ; i++ ) {
    B[i] = INFTY;
    D[i] = 0;
  }

  B[0] = 0;

  while(1){
    minv = INFTY;
    u = -1;
    for ( i=0 ; i<n ; i++ ){
      if ( minv > B[i] && !D[i] ){
	u = i;
	minv = B[i];
      }
    }
    if ( u == -1 ) break;
    D[u] = 1;
    for ( v=0 ; v<n ; v++ ){
      if ( !D[v] && A[u][v] != INFTY ){
	if ( B[v] > B[u] + A[u][v] ){
	  B[v] = B[u] + A[u][v];
	}
      }
    }
  }

  for ( i=0 ; i<n ; i++ ){
    printf("%d %d\n", i, (B[i]==INFTY?-1:B[i]));
  }

  return 0;
}

