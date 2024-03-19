#include <stdio.h>
 
int main(void){
int A, B, C, K, max, p, q;

   scanf("%d %d %d %d",&A,&B,&C,&K);  
    
   if(A>K){
     max=K;
   }
   else{
     p=K-A;
     if(B>p) 
       max=A;
     else{
       q=p-B;
       if(C>q){
         max=A-q;
       }
       else{
         max=A-C;
       }
     }
   }
   
printf("%d\n",max);
  return 0;
}
