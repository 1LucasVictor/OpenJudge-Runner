#include <stdio.h>
#include <string.h>

int main(void){
  int h, a, t = 0;
  scanf("%d %d", &h, &a);
  
  for(int i=0;;i++){
    h = h-a;
    t = t+1;
    if(h<=0){
      break;
    }
  }
  printf("%d", t);
  
  

  return 0;
}

  
