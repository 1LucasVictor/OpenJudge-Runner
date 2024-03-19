#include <stdio.h>

int main(void)
{
  int page;
  scanf("%d", &page);
  if( page % 2 == 1 ){
  	printf("%d", page/2 + 1);
  } else {
    printf("%d", page/2);
  }
  
  return 0;
}