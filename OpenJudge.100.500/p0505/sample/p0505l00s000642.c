#include<stdio.h>

int main(void)
{
   long long int i,h,n,s,a[100000];
   s=0;
   scanf("%lld%lld",&h,&n);
   for(i=0; i<n; i++){
      scanf("%lld",&a[i]);
      s=s+a[i];
   }
   if(s>=h){printf("Yes\n");}
   else {printf("No\n");}
   return 0;
}
