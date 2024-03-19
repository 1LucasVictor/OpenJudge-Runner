#include<stdio.h>

int main(void)
{
   int n, i, x=0, a[100];

   scanf("%d",&n);
   for(i=0;i<n;i++)
      scanf("%d",&a[i]);

   for(i=0;i<n;i++)
      if((a[i]%2==0)&&(a[i]%3!=0)&&(a[i]%5!=0))
         x=1;

   if(x==0)
      printf("APPROVED\n");
   else
      printf("DENIED\n");
   return 0;
}