#include <stdio.h>

int main() {

  int a,b,c,m;

  scanf("%d%d",&a,&b);

  if(a<b){
    c = a;
    a = b;
    b = c;
  }

  while(1){
    c = a%b;
    if(c==0){
      m = b;
      break;
    }
    a = b;
    b = c;
  }

  printf("%d\n",m);

  return 0;
}