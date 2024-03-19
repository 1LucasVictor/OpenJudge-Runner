#include <stdio.h>

int main(int argc, char const *argv[]) {
  int a, b;
  scanf("%d %d\n",&a,&b );
  if (a>20 || a<1 || b>20 || b<1)
    printf("-1\n");
  else
    printf("%d\n",a*b );
  return 0;
}
