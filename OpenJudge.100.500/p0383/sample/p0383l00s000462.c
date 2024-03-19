#include <stdio.h>


int main(void)
{
  int i,j,k;
  int l,m,n;
  unsigned int a_ary[100][100]={0};
  unsigned int b_ary[100][100]={0};
  unsigned int ary[100][100]={0};

  scanf("%d%d%d",&n ,&m, &l);

  for(i=0;i<n;i++)
    {
      for(j=0;j<m;j++)
        {
          scanf("%d",&a_ary[i][j]);
          //printf("%d ",a_ary[i][j]);
        }
    }

  for(i=0;i<m;i++)
    {
      for(j=0;j<l;j++)
        {
          scanf("%d",&b_ary[i][j]);
          //printf("%d ",b_ary[i][j]);
        }
    }

  for(i=0;i<l;i++){
    for(j=0;j<n;j++){
      ary[i][j]=0;
      for(k=0;k<m;k++){
        ary[i][j] += (a_ary[j][k] * b_ary[k][i]);
        //printf("%d ",ary[i][j]);
      }
    }
  }
  
  for(i=0;i<n;i++)
    {
      for(j=0;j<l;j++)
        {
          printf("%d",ary[j][i]);
          if(j < l-1)
            {
              printf(" ");
            }
        }
      printf("\n");
    }
  
  
  return 0;
}