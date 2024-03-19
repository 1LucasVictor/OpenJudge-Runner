#include <stdio.h>

int main(){
  int x,y,i;

  scanf("%d %d", &x, &y);

  for(i=x; i>0; i--) if(x%i==0 && y%i==0) break;
  printf("%d\n", i);

  return 0;
}