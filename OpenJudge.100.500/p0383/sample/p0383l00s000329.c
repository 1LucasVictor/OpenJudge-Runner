#include <stdio.h>
int main(void)
{
  int n,m,l;
  int i,j,k;
  int a[100][100]={0};
  int b[100][100]={0};
  double c[100][100]={0};
 
  scanf("%d",&n);
  scanf("%d",&m);
  scanf("%d",&l);
 
  for (i=0; i<n; i++) 
  {
    for (j=0; j<m; j++) 
	{
      scanf("%d",&a[i][j]);
    }
  }
  
  for (i=0; i<m; i++) 
  {
    for (j=0; j<l; j++) 
	{
      scanf("%d",&b[i][j]);
    }
  }
 
  for (i=0; i<n; i++) 
  {
    for (j=0; j<l; j++) 
	{
      for (k=0; k<m; k++) 
	  {
        c[i][j]+=a[i][k]*b[k][j];
      }
    }
  }
 
  for (i=0; i<n; i++) 
  {
    for (j=0; j<l; j++) 
	{
      if (j!=l-1) printf("%.lf ",c[i][j]);
      else printf("%.lf\n",c[i][j]);
    }
  }
  
  return 0;
}