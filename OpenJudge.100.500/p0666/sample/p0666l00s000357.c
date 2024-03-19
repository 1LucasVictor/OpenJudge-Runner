#include<stdio.h>

int main(){
  long long int x, a, b;

  scanf("%lld %lld %lld", &x, &a, &b);
  if(a>=b) printf("delicious\n");
  else if(a<b&&b-a<=x) printf("safe\n");
  else if(a<b&&b-a>x) printf("dangerous\n");
  return 0;
}
