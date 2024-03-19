#include <stdio.h>
#define N 2019

int main(void){
  unsigned long int l,r,ans;
  int count;
  
  scanf("%ld %ld",&l,&r);
  
  ans = (l * (l + 1)) % N;
  count = 0;
  for(unsigned long int i = l; i < r; i++){
    for(unsigned long int j = i + 1; j <= r; j++){
      if(count >= (N - 1)) goto loopend;
      if(ans > (i * j) % N) ans = (i * j) % N;
      count++;
    }
  }
  loopend:
    printf("%ld",ans);
    return 0;
}
