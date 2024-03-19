#include<stdio.h>
 int main(void){
   int N,i;
   
   scanf("%d",&N);
   
   for(i = 1;i <= 9;i++){
     //printf("%d\n",i);
     if( N % i == 0 && N/i <= 9){
       break;
     }
   }
   //printf("%d,%d\n",N/i,N%i);
   if(N/i <= 9 && N/i > 0 && N % i == 0 && i < 10){
       printf("Yes");
   }else{printf("No");}
return 0;
}
     