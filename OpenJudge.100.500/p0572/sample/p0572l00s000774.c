#include <stdio.h>

int main(void){
  unsigned int L, R;
  scanf("%u %u",&L, &R);

  if(R-L >= 2018)
    printf("0\n");
  else{
    L %= 2019;  R %= 2019;
    if(L < R)
      printf("%u\n", (L*(L+1))%2019 );
    else
      printf("0\n");
  }
  return 0;
}
