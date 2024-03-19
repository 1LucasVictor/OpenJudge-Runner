#include <stdio.h>

int main()
{
  int k, a, b, i;
  scanf("%d\n%d %d", &k, &a, &b);
  for(i = a; i <= b; i++) {
    if(i % k == 0) {
      puts("OK");
      return 0;
    }
  }
  puts("NG");
  return 0;
}
