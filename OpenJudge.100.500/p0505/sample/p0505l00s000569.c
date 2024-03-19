#include<stdio.h>

int main(void){
   int H,N;
   scanf("%d %d",&H,&N);

   int A[N];
   int i;
   int sum=0;
   for(i=0;i<N;i++){
      scanf("%d",&A[i]);
      sum+=A[i];
   }
   if(sum>=H){
      printf("Yes\n");
   }else{
      printf("No\n");
   }
   return 0;
}
