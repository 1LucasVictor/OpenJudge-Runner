#include "stdio.h"

int main(void){
  char S[10];
  int count = 0;
  
  scanf("%s", S);

  if(S[0] == 'A'){
    count++;
  }
  if(S[1] == 'A'){
    count++;
  }
  if(S[2] == 'A'){
    count++;
  }

  if(count == 0 || count == 3){
    printf("No\n");
  }else{
    printf("Yes\n");
  }
  
  return 0;
}

