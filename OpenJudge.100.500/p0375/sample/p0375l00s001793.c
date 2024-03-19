#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(void){

  int n;
  int i, k;

  scanf("%d", &n);

  for(i = 1; i <= n; i++){
    if(i % 3 == 0){
      printf(" %d", i);
    }else{
      k = i;
      while(k >= 1){
	if(k % 10 == 3){
	  printf(" %d", i);
	  break;
	}
	k = k / 10;
      }
    }
  }
  printf("\n");
  
  return 0;
}
