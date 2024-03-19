#include<stdio.h>
int main(){
   int H;
   int N;
   int A[N];
   int damage=0;
   scanf("%d %d",&H,&N);
   for(int i=0;i<N;i++){
      scanf("%d",&A[i]);
      damage+=A[i];
   }
   if(damage>=H){
      printf("Yes");
   }else{
      printf("No");
   }
   return 0;
}
