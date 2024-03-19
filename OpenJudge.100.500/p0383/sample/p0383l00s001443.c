#include<stdio.h>
#include<stdlib.h>
int main(void)
{
  int i,j,k;
  int n,m,l;
  int **mat1,**mat2;
  long long **mat3;
  scanf("%d%d%d",&n,&m,&l);
  mat1=(int**)malloc(sizeof(int*)*n);
  for(i=0;i<n;i++)
    {
      mat1[i]=(int*)malloc(sizeof(int)*m);
      for(j=0;j<m;j++) scanf("%d",&mat1[i][j]);
    }
  mat2=(int**)malloc(sizeof(int*)*m);
  for(j=0;j<m;j++)
    {
      mat2[j]=(int*)malloc(sizeof(int)*l);
      for(k=0;k<l;k++) scanf("%d",&mat2[j][k]);
    }
  mat3=(long long**)malloc(sizeof(long long*)*n);
  for(i=0;i<n;i++)
    {
      mat3[i]=malloc(sizeof(long long)*l);
      for(k=0;k<l;k++)
        {
          mat3[i][k]=0;
          for(j=0;j<m;j++) mat3[i][k]+=mat1[i][j]*mat2[j][k];
        }
    }
  for(i=0;i<n;i++)
    {
      for(k=0;k<l;k++)
        {
          if(k>0) printf(" ");
          printf("%ld",mat3[i][k]);
        }
      printf("\n");
    }
  return 0;
}
