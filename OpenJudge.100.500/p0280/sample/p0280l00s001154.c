#include <stdio.h>
#include <stdlib.h>

int main(void){

  int **a;
  int *b;
  int i,j,n;
  int min,sum=0,flag,si,sj;

  scanf("%d",&n);

  a = (int**)calloc(n+1,sizeof(int*));
  b = (int*)calloc(n+1,sizeof(int));

  for (i=0 ; i<n+1 ; i++) {
    a[i] = (int*)calloc(n+1,sizeof(int));
  }

  for( i=1 ; i<=n ; i++ ){
    for( j=1 ; j<=n ; j++ ){
      scanf("%d",&a[i][j]);
    }
  }


  while(1){
    flag = 1;
    min = 2001;
    for( i=1 ; i<=n ; i++ ){
      for( j=1 ; j<=n ; j++ ){
	if( a[i][j] != -1 && min > a[i][j] ){
	  if( b[i] == 0 || b[j] == 0 ){
	    min = a[i][j];
	    si = i;
	    sj = j;
	  }
	}
      }
    }
    sum += a[si][sj];
    a[si][sj] = 2001;
    a[sj][si] = 2001;
    b[si] = 1;
    b[sj] = 1;
    for( i=1 ; i<=n ; i++ ){
      if( b[i] == 0 ){
	flag = 0;
      }
    }
    if( flag == 1 ) break;

  }

  printf("%d\n",sum);

 for (i=0 ; i<n+1 ; i++ ) {
    free(a[i]);
  }
  free(a);

  free(b);

  return 0;

}