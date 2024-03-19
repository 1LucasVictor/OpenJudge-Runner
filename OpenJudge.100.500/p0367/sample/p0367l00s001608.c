#include <stdio.h>
int main(void)
{
  int a,b,c,i;
  int t = 0;
  scanf("%d%d%d", &a,&b,&c);
  for(i = a; i <= b; i++){
      if (c%i==0) t += 1;
  }
  printf("%d\n", t);
  return 0;
}
      