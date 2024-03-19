#include <stdio.h>
#include <string.h>

int main(void)
{
  int a;
  int b;
   scanf("%d %d",&a,&b);

  int d;
if(0<b && b<101){
if(a == 0){
    d = b;
}else if(a == 1){
    d = 100*b;
}else if(a == 2){
    d = 10000*b;
}else{
    return 0;
}
}else{
  return 0;
}

printf("%d\n",d);

   return 0;
}