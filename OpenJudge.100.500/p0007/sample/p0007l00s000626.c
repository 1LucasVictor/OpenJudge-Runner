#include <stdio.h>

int main(void){

   int n;
   int a,b,c,d;
   int cnt = 0;
   
   while(1){
       n=-1;
       scanf("%d", &n);
       if(n==-1)break;
       
       for(a=0; a<=9; a++){
           for(b=0; b<=9; b++){
               for(c=0; c<=9; c++){
                   for(d=0; d<=9; d++){
                       if(a+b+c+d == n)cnt++;
                   }
               }
           }
       
       }
       printf("%d\n", cnt);
       cnt=0;
   }
   return 0;
}