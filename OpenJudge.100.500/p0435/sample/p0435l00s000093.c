#include<stdio.h>
#include<math.h>
int main()
{
  int n, d,i,j,s=0,c=0,g ;
  
  scanf("%d",&n);
  int arr[n][2] ;
  scanf("%d",&d);
  for(i=0; i<n;i++)
  {
    for(j=0;j<2;j++)
    {
      scanf("%d",&arr[i][j]);
    }
  }
  for(i=0; i<n;i++)
  {
    for(j=0;j<2;j++)
    {
      s=s+(arr[i][j]*arr[i][j]);
    }
    s = sqrt(s);
    if(s>=d)
    {
      c=c+1;
    }
    s=0;
  }
 printf("%d",c);
}