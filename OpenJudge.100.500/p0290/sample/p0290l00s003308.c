#include <stdio.h>

int main()
{
 unsigned long n,count=0,a[10000],i,j,temp=0;
 scanf("%ld",&n);
 for(i=0;i<n;i++)
    scanf("%ld",&a[i]);
 
 for(i=0;i<n;i++)
 {
  temp=0;
  for(j=1;j<=a[i];j++)
  {
   if(a[i]%j==0)
    temp++;
  }
  if(temp==2)
  {
	  count++;
  }
 }
 printf("%ld\n",count);
 return 0;
}