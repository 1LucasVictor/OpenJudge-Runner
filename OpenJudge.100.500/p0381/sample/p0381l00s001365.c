#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(void){

  int n = 1, x = 1;
  int a, b, c;
  int count = 0;

  while(n > 0 || x > 0){
    count = 0;
    scanf("%d %d", &n, &x);
    if(n == 0 && x == 0){
      break;
    }else{
      for(a = 1; a <= n; a++){
	for(b = a + 1; b <= n; b++){
	  for(c = b + 1; c <= n; c++){
	    if(a + b + c == x){
	      count++;
	    }
	  }
	}
      }
      printf("%d\n", count);
    }
  }
  
  return 0;
}
