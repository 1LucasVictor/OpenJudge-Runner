#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main(){

  long long i,j;
  long long min = 100000;
  long long l,r;

  scanf("%lld %lld", &l, &r);

  l = l % 2019;
  r = r % 2019;

  for(i = l;i < r;i++){
    for(j = i + 1;j <= r;j++){
      if(min > (i*j) % 2019) min = (i*j) % 2019;
    }
  }

  printf("%lld\n", min);
  return 0;
}
