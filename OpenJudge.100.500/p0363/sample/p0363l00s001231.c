#include <stdio.h>
main(){

  int a,b,c,x,y,z;

  scanf("%d%d%d",&a,&b,&c);

  if(a < b){ 
    x = a;
    a = b;
    b = x;
  }

  if(b < c){
    y = b;
    b = c;
    c = y;
  }

  if(c < a){
    z = c;
    c = a;
    a = z;
  }

  printf("%d %d %d\n",a,b,c);

  return 0;
}