#include<stdio.h>

int main(){
  int A, B, C, D, ans;
  
  scanf("%d %d %d %d", &A, &B, &C, &D);
  if(A >= C && B >= D){
    ans = D - A;;
  } else if(A >= C && B < D){
    ans = B - A;
  }　else if(A < C && B >= D){
    ans = D - C;
  } else if(A < C && B < D){
    ans = B - C;
  }
  
  if(ans < 0){
    ans = 0;
  }
  
  printf("%d\n", ans);
  
  return 0;
}