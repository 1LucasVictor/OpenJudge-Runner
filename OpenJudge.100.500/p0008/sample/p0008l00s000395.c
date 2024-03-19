#include <stdio.h>

int main(void){

   int n;
   int a,b;
   int cnt1,cnt2;
   
   while(1){
       n=-1;
       cnt1=0;
       cnt2=0;
       scanf("%d", &n);
       if(n==-1)break;
       
       for(a=1; a<=n; a++){
           for(b=1; b<=a; b++){
               if(a % b == 0)cnt1++;
           }
           if(cnt1 == 2)cnt2++;
           cnt1=0;
       }
       printf("%d\n", cnt2);
   }
   return 0;
}