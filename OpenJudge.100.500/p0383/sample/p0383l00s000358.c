#include<stdio.h>

int main()
{
  int n,m,l,i,j,k,sum;
  scanf("%d %d %d",&n,&m,&l);
  int a[n][m],b[m][l],out[n][l];

  for(i=0;i<n;i++)
    for(j=0;j<m;j++)
      scanf("%d",&a[i][j]);

  for(i=0;i<m;i++)
    for(j=0;j<l;j++)
      scanf("%d",&b[i][j]);

  sum=0;

  for(i=0;i<n;i++){
    for(j=0;j<l;j++){
        for(k=0;k<m;k++)  sum+=a[i][k]*b[k][j];

        out[i][j]=sum;
        sum=0;
    }
  }
  for(i=0;i<n;i++){
    for(j=0;j<l;j++) {
      printf("%d",out[i][j]);
      if(j<l-1) printf(" ");
    }
    printf("\n");
  }

  return 0;

}