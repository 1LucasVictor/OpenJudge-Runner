#include <stdio.h>

int main(void){
  unsigned int L, R;
  scanf("%u %u",&L, &R);

  if(R-L >= 2018)
    printf("0\n");
  else{
    L %= 2019;  R %= 2019;
    // printf("L=%u R=%u\n",L, R);
    if(L < R){
      int i, j, min = 2018;
      for(i=L ; i<=R ; i++)
	for(j=i+1 ; j<=R ; j++)
	  if(min > (i*j)%2019)
	    min = (i*j)%2019;
      printf("%d\n", min);
    }
    else
      printf("0\n");
  }
  return 0;
}
