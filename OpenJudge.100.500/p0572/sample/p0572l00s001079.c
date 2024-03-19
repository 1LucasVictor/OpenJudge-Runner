#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main(){

  long long i,j;
  long long min = 10000000;
  long long l,r;

  scanf("%lld %lld", &l, &r);

  for(i = l;i <= r;i++){
    for(j = l;j < i;j++){
      if(min > (i*j) % 2019) min = (i*j) % 2019;

      if(min == 0){
        printf("0\n");
        return 0;
      }
    }
  }

  printf("%lld\n", min);
  return 0;
}
