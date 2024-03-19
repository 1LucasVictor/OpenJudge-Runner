#include<stdio.h>

int main(void) {
   int A,B,K,N,i;

   scanf("%d",&K);
   scanf("%d %d",&A,&B);

   for(N=A;N<=B;N++){

   if (N % K ==0) { 
   printf("OK"); 
     return 0;
   }

}
printf("NG");
return 0;
}