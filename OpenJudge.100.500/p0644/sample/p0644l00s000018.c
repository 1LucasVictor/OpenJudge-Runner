#include "stdio.h"
#include "string.h"

int main(){
  char c[3];

  int idx = 0;
  
  scanf("%s", c);

  if(c[0] == '1'){
    idx++;
  }

  if(c[1] == '1'){
    idx++;
  }

  if(c[2] == '1'){
    idx++;
  }

  printf("%d\n", idx);

  return 0;
}
