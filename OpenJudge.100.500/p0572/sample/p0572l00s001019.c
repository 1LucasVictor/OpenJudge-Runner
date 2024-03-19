#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
// 20min
int main(void){
  long l, r;
  int ans = 2019;
  scanf("%ld%ld", &l, &r);

  if(l < 2019 && r > 2019){
    ans = 0;
  }else{
    for(long i = l; i < r; i++){
      for(long j = i + 1; j <= r; j++){
	if(ans > ((i * j) % 2019)){
	  ans = (i * j) % 2019;
	}
	/*      if(ans == 0){
		break;
		}*/
      }
      /*    if(ans == 0){
	    break;
	    }*/
    }
  }
  
  printf("%d\n", ans);

  return 0;
}
