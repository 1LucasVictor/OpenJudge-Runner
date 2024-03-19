#include <stdio.h>
#include <math.h>


int main(){
   int L=0,R=0;
   int min=2020;
   int ans=0;
   scanf("%d %d",&L,&R);
   for(int i=L;i<R;i++){
      for(int j=i+1;j<=R;j++){
         ans=(i*j)%2019;
         if(ans<min) min=ans;
      }
   }
   printf("%d\n",min);

   return 0;
}