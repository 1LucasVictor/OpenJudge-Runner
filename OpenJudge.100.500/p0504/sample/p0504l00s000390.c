#include "stdio.h"

int main(void) {
  /* code */
  int s,h;
  scanf("%d %d", &s, &h);
  if(s%h != 0){
    printf("%d\n",s/h+1 );
  }else{
    printf("%d\n",s/h );
  }

  return 0;
}
