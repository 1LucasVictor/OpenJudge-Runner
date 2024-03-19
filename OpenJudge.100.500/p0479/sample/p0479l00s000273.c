#include <stdio.h>
 
int main (void)
{
   int n;
   int i ,y,count = 0;
 
   scanf("%6d",&n);
   int a[n+1];
   
   for(i =2;i<=n;i++) scanf("%d",&a[i]);
  
   for(i =1;i<=n;i++)
   {
      for(y=1;y<=n;y++) if(i==a[y]) count++;
      printf("%d\n",count);
      count = 0;
   }
   
   return 0;
}