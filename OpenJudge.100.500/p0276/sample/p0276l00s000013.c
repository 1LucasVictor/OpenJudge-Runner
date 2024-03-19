#include<stdio.h>
#define N 101


int main(){

  int M[N][N],n,i,j,a,b,k;


  scanf("%d",&n);
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      M[i][j]=0;
    }
  }

  for(i=0;i<n;i++){
    scanf("%d%d",&a,&k);
    for(j=0;j<k;j++){
      scanf("%d",&b);
      M[a-1][b-1]=1;
    }
  }

  for(i=0;i<n;i++){
    for(j=0;j<n-1;j++){
      printf("%d ",M[i][j]);
    }
    printf("%d\n",M[i][j]);
  }

  return 0;
}

