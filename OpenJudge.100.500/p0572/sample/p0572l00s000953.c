#include <stdio.h>
#define N 2019

int main(void){
  unsigned long l,r;
  int ans,count,flag;
  
  scanf("%lu %lu",&l,&r);
  
  ans = N - 1;
  count = 0;
  flag = 0;
  for(unsigned long i = l; i < r; i++){
    for(unsigned long j = i + 1; j <= r; j++){
      if(count >= (N - 1)){
        flag = 1;
        break;
      }
      if(ans > (i * j) % N) ans = (i * j) % N;
      count++;
    }
    if(flag == 1) break;
  }
  
  printf("%d\n",ans);
  return 0;
}
