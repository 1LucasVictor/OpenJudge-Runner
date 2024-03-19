#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){

  int a, b, c;
  int i;
  int n = 0;

  scanf("%d %d %d", &a, &b, &c);

  for(i = a; i <= b; i++){
    if(c % i == 0){
      n++;
    }
  }

  printf("%d\n", n);
    
  return 0;
}
