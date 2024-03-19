#include <stdio.h>

int main()
{
 int n,m,i,j,a[10000],b[10000],dem=0;
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  scanf("%d",&a[i]);
 }
 scanf("%d",&m);
 for(i=0;i<m;i++)
 {
  scanf("%d",&b[i]);
 }
 for(i=0;i<n;i++)
 {
  for(j=0;j<m;j++)
  {
   if(a[i]==b[j])
    {
     dem++;
     break;
    }
  }
 }
 printf("%d\n",dem);
 return 0;
}