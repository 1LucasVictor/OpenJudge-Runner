#include<stdio.h>
#define zyougen 150
int main(){

 int i, j, num, omomi, A[zyougen][zyougen]={0}, max;
 int next, kosuu, min, used[zyougen], Sum=0;

 scanf("%d", &num);
 for(i=1; i<=num; i++){
   for(j=1; j<=num; j++){
     scanf("%d", &omomi);
     if(omomi != -1){
       A[i][j] = omomi;
     } else {
       A[i][j] = 0;
     }
   }
 }

 next  = 1;
 kosuu = 1;
 used[kosuu] = next;
 
 while(kosuu < num){
   for(i=1; i<=num; i++){
     A[i][used[kosuu]] = 0;
   }
   min = 10000000;
   for(i=1; i<=num; i++){
     for(j=1; j<=kosuu; j++){
       if (A[used[j]][i] >= 1) {
         if (min > A[used[j]][i]) {
           min  =  A[used[j]][i];
           next = i;
         }
       }
     }
   }
   kosuu++;
   used[kosuu] = next;
   Sum += min;
 }

 printf("%d\n",Sum);

 return 0;
}