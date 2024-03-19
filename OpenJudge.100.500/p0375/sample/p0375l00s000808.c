#include <stdio.h>

int main(void){
  int n,i;
  scanf("%d",&n);
  for(i = 1; i <= n; i++){
    if(i % 10 == 3){
      printf(" %d",i);
    }
    else if(i % 3 == 0){
      printf(" %d",i);
    }
    else if(30 <= i % 100 && i % 100 <= 39){
      printf(" %d",i);
    }
    else if(300 <= i % 1000 && i % 1000 <= 399){
      printf(" %d",i);
    }
    else if(3000 <= i % 10000 && i % 10000 <= 3999){
      printf(" %d",i);
    }
  }
  printf("\n");
  return 0;
}
