#include <stdio.h>

 int main(void){
     int i,len,c,sum=0;

     scanf("%d %d %d",&i,&len,&c);

     for( ; i<=len; i++){
         if(c%i == 0){
             sum += 1;
         }
     }

     printf("%d\n",sum);

     return 0;
 }
