#include<stdio.h>

int main(){
  int n,m,l;
  int i,j,k;
  scanf("%d %d %d",&n,&m,&l);

  int A[n][m],B[m][l];
  long int C[n][l];
  for(i=0; i<n; i++){
    for(j=0; j<m; j++){
      scanf("%d",&A[i][j]);
    }
  }

  for(i=0; i<m; i++){
    for(j=0; j<l; j++){
      scanf("%d",&B[i][j]);
    }
  }

  for(i=0; i<n; i++){
    for(j=0; j<l; j++){
      C[i][j]=0;
    }
  }

  for(i=0; i<n; i++){
    for(j=0; j<l; j++){
      for(k=0; k<m; k++){
	C[i][j]+=A[i][k]*B[k][j];
      }
    }
  }

  for(i=0; i<n; i++){
    for(j=0; j<l; j++){
      if(j!=l-1)
	printf("%ld ",C[i][j]);
      else
	printf("%ld",C[i][j]);
    }
    puts("");
  }
  return 0;
  
}
	  

