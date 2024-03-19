#include <stdio.h>

int main(){
  int bi,br;
  long a;
  scanf("%ld %d.%d",&a,&bi,&br);
  printf("%ld",a*(bi*100+br)/100);
  return(0);
}