#include <stdio.h>
#include <math.h>

int main (){

  char S[4];

  scanf("%s", S);

  if( S[1] == 'B' ){
    printf("ARC");
  }
  else{
    printf("ABC");
  }

  return 0;
}