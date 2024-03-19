#include<stdio.h>

int main(void){
  int X = 0;
  int count = 0;
  scanf("%d\n",&X );

  count += (X / 500)*1000;
  X = (X % 500);
  count += (X / 5)*5;
  printf("%d\n",count );
  return 0;
}
