#include <stdio.h>

int main(){

  int i, n, x, flag = 0;

  scanf("%d", &n);
 
  for(i = 3; i <= n; i++){
    x = i;
    if(x % 3 == 0){
      printf(" %d", i);
      flag = 1;
    }
    while(x != 0 && flag == 0){
      if (x % 10 == 3){
	printf(" %d", i);
	break;
      }
      x = x / 10;
    }
    flag = 0;
  }
  printf("\n");

  return 0;
}