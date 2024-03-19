#include<stdio.h>

int main()
{
  int i,j,k,l,m,n;
  int a[100][100];

  scanf("%d",&n);
  for(i=0; i<n; i++){
    for(j=0; j<n; j++){
      a[i][j] = 0;
    }
  }

  for(i=0; i<n; i++){
    scanf("%d %d",&k,&l);
    k--;
    for(j=0; j<l; j++){
      scanf("%d",&m);
      m--;
      a[k][m] = 1;
    }
  }

  for(i=0; i<n; i++){
    for(j=0; j<n-1; j++){
      printf("%d ",a[i][j]);
    }
    printf("%d\n",a[i][n-1]);
  }

  return 0;
}

