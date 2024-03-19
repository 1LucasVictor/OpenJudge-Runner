/* ex3_4
   tamayama　*/

#include<stdio.h>
 int main (void){
     int N;
     int i;
     int a=0;
     scanf("%d",&N);

     for(i=1; i<10; i++){
         if(N/i < 10 && N%i == 0){
             a++;
         }
     }

     if(a > 0){
         printf("Yes");
     }else{
         printf("No");
     }
     return 0;
 }