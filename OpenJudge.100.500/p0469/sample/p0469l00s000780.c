#include <stdio.h>
int main(void)
{

  int k;
  int a;
  int b;
  int x;
  int c= 0;

  scanf("%d%d%d", &k, &a, &b);

  for (x = a; x <= b; x++){
    if (x % k == 0) c+= 1;
  }

  if (c>=1) printf("OK");
  else printf("NG");

  return 0;

}
