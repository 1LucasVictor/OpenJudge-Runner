#include<stdio.h>
 int main()
 {
     long long int h,n,i,x; 
     scanf("%lld %lld",&h,&n);
     for(i=0;i<n;i++)
     {
         scanf("%lld",&x); h=h-x;
         }
     if(h<=0)
     printf("Yes\n"); else printf("No\n"); return 0; }