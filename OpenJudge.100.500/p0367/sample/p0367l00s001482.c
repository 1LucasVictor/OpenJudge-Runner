#include <stdio.h>

int main(void){
  int a,b,c,d=0,x;
  scanf("%d %d %d",&a,&b,&c);
  for(1;a<=b;a++){
    x=c%a;
    if(x == 0){
    d++;
  }
}
  printf("%d\n",d);
  return 0;
}