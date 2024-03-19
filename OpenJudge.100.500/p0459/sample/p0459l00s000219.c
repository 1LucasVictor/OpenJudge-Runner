#include <stdio.h>
#include <stdlib.h>

int main(void){
  int x, y, i;

  scanf("%d %d", &x, &y);

  for(i=0; i<=x; i++){
    if((4*i + 2*(x-i))==y){
      printf("Yes\n");
      exit(0);
    }
  }

  printf("No\n");

  return(0);
}
