#include<stdio.h>
#include<stdlib.h>

int main(void)
{
  long long a,b;
  scanf("%lld %lld",&a,&b);
  if((a+b)%2==0){
    printf("%lld\n",(a+b)/2);
    return 0;
  }

  puts("IMPOSSIBLE");
  return 0;
}
