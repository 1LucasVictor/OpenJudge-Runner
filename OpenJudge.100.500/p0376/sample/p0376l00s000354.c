#include <stdio.h>

int main(void)
{
  int i, num;
  int x[1000];

  scanf("%d", &num);

  for ( i = 0; i < num; i++) 
    scanf("%d", &x[i]);

  // for ( i = 0; i < (num / 2); i++) {
  //   int tmp = x[i];
  //   x[i] = x[num - i];
  //   x[num - i] = tmp;
  // }

  for (i = 1; i <= num; i++) {
    printf("%d", x[num - i]);
    if (i == num) putchar('\n');
      else putchar(' ');
  }
  
  return 0;
}
