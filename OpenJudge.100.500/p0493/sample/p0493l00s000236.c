#include<stdio.h>
int main(){
  int unused __attribute__((unused));
  long long X, res=0;

  unused = scanf("%lld", &X);

  if(X > 0){
    if(X >= 500){
      res += 1000*(X/500);
      X -= 500*(X/500);
    }
    if(X < 500 && X > 0) res += 5*(X/5);
    printf("%lld", res);
  }else{
    printf("%lld", 0);
  }

  return 0;
}