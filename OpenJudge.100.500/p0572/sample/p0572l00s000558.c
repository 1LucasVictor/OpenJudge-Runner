#include <stdio.h>
#define N 2019

int main(void){
  unsigned long l,r,ans;
  int count;
  
  scanf("%lu %lu",&l,&r);
  
  ans = (l * (l + 1)) % N;
  count = 0;
  for(unsigned long i = l; i < r; i++){
    for(unsigned long j = i + 1; j <= r; j++){
      if(count >= (N - 1)) goto loopend;
      if(ans > (i * j) % N) ans = (i * j) % N;
      count++;
    }
  }
  loopend:
    printf("%lu\n",ans);
  
  return 0;
}