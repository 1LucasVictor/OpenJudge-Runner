#include<stdio.h>

int main(void){
  char S;
  int i, w;

  for (i=0; i<4; i++){
    S = getchar();
    if (i==1){
      if (S == 'R'){
        w = 0;
      }else{
        w = 1;
      }
    }else{}
  }

  if(w){
    printf("ARC");
  }else{
    printf("ABC");
  }

  return 0;
}
