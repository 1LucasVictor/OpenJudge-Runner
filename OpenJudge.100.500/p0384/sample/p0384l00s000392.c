#include "stdio.h"

int main(void){
  int x,y,z,i;
  char a,b;
  for(i = 0; i < 1200; i++){

    scanf("%c", &a);

    //printf("%d\n", a);
    if((a >= 65) && (a <= 90)){
      a = a + 32;
    }else if((a >= 97) && (a <= 122)){
      a = a - 32;
    }
    if(a == '.'){
      printf("%c\n", a);
      break;
    }
    printf("%c", a);

  }
}

