#include <stdio.h>

int main(){

  int x,y,i,d;

  scanf("%d %d", &x,&y);

  if(x<y) d=x;
  else d=y;

  for(i=d ; i>0 ; i--){
    if(x%i==0 &&y%i==0)break;
  }

  printf("%d\n", i);

  return 0;
}