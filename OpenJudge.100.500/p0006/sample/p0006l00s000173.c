#include<stdio.h>

int main(void)
{
  int n;
  int debt = 100000;
  scanf("%d",&n);
  while ( n-- > 0 ) {
    debt *= 1.05;
    if ( debt % 1000 ) {
      debt /= 1000;
      debt += 1;
      debt *= 1000;
    }
  }
  printf("%d\n", debt);
  return 0;
}
    