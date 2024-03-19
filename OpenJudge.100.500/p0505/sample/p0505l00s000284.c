#include<stdio.h>

int main(void){
   int H,N;
   scanf("%d %d",&H,&N);
   int a[N];
   for(int i=0;i<N;i++){
      scanf("%d",&a[i]);
      H -=a[i];
   }
   if(H<=0){
      printf("Yes");
   }else{
      printf("No");
   }
   return 0;
}
