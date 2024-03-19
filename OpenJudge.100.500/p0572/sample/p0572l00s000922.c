#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
// 20min
int main(void){
  long l, r;
  int ans = 2019;
  scanf("%ld%ld", &l, &r);

  for(long i = l; i < r; i++){
    for(long j = i + 1; j <= r; j++){
      /*      if(i == l  && j == l + 1){
	ans = (l * (l+1)) % 2019;
	}*/
      if(ans > ((i * j) % 2019)){
	ans = (i * j) % 2019;
      }
      if(ans == 0){
	break;
      }
    }
  }

  
  printf("%d\n", ans);

  return 0;
}