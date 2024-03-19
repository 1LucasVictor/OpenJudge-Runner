#include <stdio.h>

int main ( void ) {
  
  int foot, head, judge = 0;
  
  scanf("%d", &head);
  scanf("%d", &foot);
  
  for(int i = 0; i <= head; i++){
    if(i * 4 + ( head - i ) * 2 == foot) {
      printf("Yes\n");
      judge++;
    }
  }
  
  if(judge == 0){
    printf("No\n");
  }  
  
  return 0;
}