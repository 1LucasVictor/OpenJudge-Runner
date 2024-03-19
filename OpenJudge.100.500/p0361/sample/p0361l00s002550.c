#include<stdio.h>
 int main(void)
 {
         int S;
         scanf("%d",&S);
         int h = S / 3600;
         int m = S % 3600 / 60;
         int s = S % 3600 % 60;
         if(S >= 0 && S < 86400){
                 printf("%d:%d:%d\n",h,m,s);
         }else{
                 printf("0???86400????????§??\???\n");
         }
         return 0;
 }