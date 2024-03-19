#include<stdio.h>

int main(void)
{
   int i;
   long int h,n,s,a[10001];
   s=0;
   scanf("%ld%ld",&h,&n);
   for(i=0; i<n; i++){
      scanf("%ld",&a[i]);
      s=s+a[i];
   }
   if(s>=h){printf("Yes\n");}
   else {printf("No\n");}
   return 0;
}
