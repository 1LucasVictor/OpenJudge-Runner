#include <stdio.h>

int main(){
  int a,b;
  scanf("%d %d\n",&a,&b);
  if(b % a == 0) printf("%d\n",a+b);
  else printf("%d\n",b-a);
  return 0;
}