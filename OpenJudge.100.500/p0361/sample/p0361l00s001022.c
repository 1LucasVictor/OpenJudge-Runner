#include <stdio.h>

int main(void){
  int S,h,m,s;
  scanf("%d",&S);
  if(1<=S && S<=86400){
    h = S / 3600;
    m = (S - h * 3600) / 60;
    s = S % 60;
    printf("%d:%d:%d\n",h,m,s);
  }
  return 0;
}