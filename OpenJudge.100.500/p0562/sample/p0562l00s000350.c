#include <stdio.h>


int main(void){
  int a,b,data,cn;
  data = 1;
  cn = 0;
  scanf("%d %d",&a,&b );

  do{
    data += a;
    data--;
    cn++;
  }while (b>data);

printf("%d\n",cn );

  return 0;
}
