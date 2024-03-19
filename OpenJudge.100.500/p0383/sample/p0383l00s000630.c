#include<stdio.h>
#define N 100

int main(){
  long a[N][N], b[N][N], c[N][N];
  int n, m ,l, sum, i, j, k;
  
  scanf("%d%d%d",&n,&m,&l);

  for(i=0;i<n;i++){
    for(j=0;j<l;j++){
      c[i][j]=0;
    }
  }
  
  for(i=0;i<n;i++){
    for(j=0;j<m;j++){
      scanf("%ld",&a[i][j]);
    }
  }

  for(i=0;i<m;i++){
    for(j=0;j<l;j++){
      scanf("%ld",&b[i][j]);
    }
  }

  for(i=0;i<n;i++){
    for(j=0;j<m;j++){
      for(k=0;k<l;k++){
	c[i][k]+=a[i][j]*b[j][k];
      }
    }
  }


  for(i=0;i<n;i++){
    for(j=0;j<l;j++){
      if(j==l-1) {
	printf("%ld\n",c[i][j]);
	break;
      }
      printf("%ld ",c[i][j]);
    }
  }

  
  return 0;
}

