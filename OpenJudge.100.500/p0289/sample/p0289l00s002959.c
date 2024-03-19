#include <stdio.h>

int main() {
  
  int a,b,gcd;
  
  scanf("%d%d",&a,&b);

  if(a<b) {
    a=a+b;
    b=a-b;
    a=a-b;
  }
  
  while(b>0) {

    gcd = a%b;
    a = b;
    b = gcd;
  }

  printf("%d\n",a);

  return 0;
}