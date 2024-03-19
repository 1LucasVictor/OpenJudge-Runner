#include <stdio.h>

int main(){
  int n;
  long long int result=100000;
  int i;
  scanf("%d", &n);
  for(i = 0;i<n;i++){
    result *= 1.05;
    if(result%1000 != 0){
      result = result-(result%1000)+1000;
    }
  }
  printf("%lld\n", result);
  return 0;
}