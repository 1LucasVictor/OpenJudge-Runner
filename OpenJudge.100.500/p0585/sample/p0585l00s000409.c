#include <stdio.h>
int main(){
  int n;
  float A, B, T, ans=0,t;
  
  scanf("%f",&A);
  scanf("%f",&B);
  scanf("%f",&T);
  
  if(A > T+0.5){
   printf("0");
  }
   else{
   t = A;
   ans = B;
   for(n=2; t<T+0.5; n++){
    ans += B;
    t += n*A;
   }
   printf("%.0f",ans);
  }
}  