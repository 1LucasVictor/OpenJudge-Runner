#include<stdio.h>

int main(void){
   int N;
   int result,result2=0;
   scanf("%d",&N);

   if(N%2==1){
      result=N/2;
      printf("%d\n",result+1);
   }else if(N%2==0){
      result2=N/2;
      printf("%d\n",result2);
   }
   return 0;
}
