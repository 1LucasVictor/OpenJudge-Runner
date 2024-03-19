#include<stdio.h>
int main()
{
  int n,m,a[100][100],b[100],c;
  int i,j;
  scanf("%d%d",&n,&m);
  for(i=0;i<n;i++)
    {
      for(j=0;j<m;j++)
	{
	  scanf("%d",&a[i][j]);
	}
    }
  for(i=0;i<m;i++) scanf("%d",&b[i]);

  for(i=0;i<n;i++)
    {
      c=0;
      for(j=0;j<m;j++) c+=a[i][j]*b[j];
      printf("%d\n",c);
    }
  return 0;
}