#include <stdio.h>
int main(void)
{

  int k;
  int a;
  int b;
  int x;
  int flag = 0;

  scanf("%d%d%d", &k, &a, &b);

  for (x = a; x <= b; x++){
    if (x % k == 0) flag = 1;
  }

  if (flag == 1) printf("OK\n");
  else printf("NG\n");

  return 0;

}
