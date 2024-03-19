#include<stdio.h>

int main()
{
int n,i,count;
long  d,x,y;
  count=0;
  scanf("%d %d",&n,&d);
  
  //int a[1][n];
  
  for (i=0;i<n;i++)
  {
  scanf("%ld %ld",&x,&y);
  
  if (x*x+y*y <= d*d)
  {
  	count+=1;  
  }
  
  }
  

  printf("%d",count);
  
  return 0;
 
}
