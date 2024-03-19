#include <stdio.h>
int main(void){
  int a,b;
  scanf("%d %d",&a,&b);
  if(a>=10||b>=10){printf("-1");}
  else{printf("%d",a*b);}
  return 0;
}