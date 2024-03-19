/* ex3_4
   tamayama　*/

#include<stdio.h>
 int main (void){
     int N;
     int i;
     int Input_N;
     int check=0;
     scanf("%d",&N);
     Input_N = N;

     for(i=1; i<10; i++){
         if(Input_N / i < 10 && Input_N % i == 0){
             check++;
         }
     }

     if(check > 0){
         printf("Yes");
     }else{
         printf("No");
     }
     return 0;
 }
