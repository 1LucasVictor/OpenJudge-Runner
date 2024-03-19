#include <stdio.h>
#define MAX 150
int am[MAX][MAX];

int main()
{
  int i,j,k,n,t;

  scanf("%d",&n);
  for(i=1;i<=n;i++)
    for(j=1;j<=n;j++)
      am[i][j] = 0;

  for(i=1;i<=n;i++)
  {
    scanf("%d%d",&j,&k);
    for(j=1;j<=k;j++)
    {
       scanf("%d",&t);//iの次の人たち
       am[i][t] = 1;
    }
  }

  for(i=1;i<=n;i++) //１行目、２行目
  {
    for(j=1;j<=n;j++)
    {
     printf("%d", am[i][j]);
     if (j != n) printf(" ");
    }
    printf("\n");
  }
  return 0;
}

