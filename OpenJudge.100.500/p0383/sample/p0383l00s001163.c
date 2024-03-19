#include <stdio.h>

int main() {

  int i,j,k,n,m,l,a,b,c;
  int A[101][101] = {0};
  int B[101][101] = {0};
  int C[101][101] = {0};

  scanf("%d %d %d",&n,&m,&l);

  for(j=0; j<n; j++) {
    for(i=0; i<m; i++) {

      scanf("%d", &a);
      A[j][i] = a;
    
    }
  }

  for(j=0; j<m; j++){
    for(i=0;i<l;i++){
      scanf("%d",&b);
      B[j][i] = b;
    }
  }

    for(i=0 ;i<n; i++) {
      for(j=0; j<l; j++){
	C[i][j] = 0;
	for(k=0;k<m; k++) {
	   C[i][j] += A[i][k]*B[k][j];  
	   /*    printf("%d ",C[i][j]); */
	}
	/* printf("\n"); */
      }
    }


     for(i=0; i<n; i++) {
      for(j=0; j<l; j++) {
	printf("%d",C[i][j]);
	if(j !=l-1) {
	  printf(" ");
	}
      }
      printf("\n");
      } 

    return 0;

  }