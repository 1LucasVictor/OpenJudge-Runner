#include <stdio.h>
#include <stdlib.h>

int main() {
  long long a,b,c,k;
  scanf("%lld %lld %lld %lld", &a, &b, &c, &k);


  if(k<a){
    printf("%lld", k);
  }
  else if(k>a && k<(a+b)){
    printf("%lld", a);
  }
  else{
    printf("%lld", a-(k-a-b));
  }
  return 0;
}
