#include<stdio.h>

int main(){
  int n,M[100][100],a[100][100];
  int i,j,k,c,d;

  scanf("%d",&n);
  for(i=0;i<n;i++){
    for(j=0;j<n;j++)M[i][j]=0;
  }

  for(i=0;i<n;i++){
    for(j=0;j<2;j++){
      scanf("%d",&a[i][j]);
    }
    for(j=2;j<(a[i][1]+2);j++){
      scanf("%d",&a[i][j]);
    }
  }

  for(i=0;i<n;i++){
    for(j=0;j<a[i][1];j++){
      c=a[i][0];
      d=a[i][j+2];
      M[c-1][d-1]=1;
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

