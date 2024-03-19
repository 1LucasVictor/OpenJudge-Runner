#include <stdio.h>
#include <math.h>

int main(){
  
  unsigned long long	A, ans, M;
  double	B, N;
  
  scanf("%llu %lf", &A, &B);
  
  ans = (unsigned long long)(A*B);

//  N = fmod(B, 1.00);	//小数部分
//  ans = (unsigned long long)(A*B) + (unsigned long long)(A*N);
  
  printf("%llu", ans);
  
  return 0;
}