#include<stdio.h>

int main(void)
{
   int h, n, a[100000], s=0, i;

   scanf("%d%d",&h,&n);
   for(i=0;i<n;i++){
      scanf("%d",&a[i]);
      s+=a[i];
   }

   if(h<=s)
      printf("Yes\n");
   else
      printf("No\n");
   return 0;
}