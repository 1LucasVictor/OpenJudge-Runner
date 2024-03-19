
#include <stdio.h>

int main()
{
   long long h,n,i;
   scanf("%lld %lld",&h,&n);
   if((1<=h<=1000000000)&&(1<=n<=100000)){
       long int a[n];
       for(i=0;i<n;i++){
           scanf("%ld",&a[i]);
           h=h-a[i];
       }
       if(h<=0)printf("Yes");
       else printf("No");
   }

    return 0;
}
