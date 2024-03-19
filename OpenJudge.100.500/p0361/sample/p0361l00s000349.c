#include <stdio.h>

int main(){
  int S,h,m,s;
  scanf("%d",&S);
  h =S/3600   ;
  m =(S % 3600) / 60   ;
  s =S%60   ;
  /*printf("%d %d %d\n",h=S/3600,m=S/s=60,s=S);*/
  printf("%d:%d:%d\n",h, m , s);
     return 0;
}