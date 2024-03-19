#include <stdio.h>

int main()
{
 int n,m,i,j,a[100][100],b;
 scanf("%d %d\n",&n,&m);
 for(i=0;i<n;i++)
 {
  for(j=0;j<m;j++)
  {
   if (j < m - 1)
                scanf("%d ", &a[i][j]);
            else
                scanf("%d\n", &a[i][j]);
  }
 }
 for(j=0;j<m;j++)
 {
  scanf("%d",&b);
  for(i=0;i<n;i++)
  {
   a[i][j]=a[i][j]*b;
  }
 }
 
    for (i = 0; i < n; i++) {
        b = 0;
        for (j = 0; j < m; j++)
            b += a[i][j];
        printf("%d\n", b);
    }
 return 0;
}