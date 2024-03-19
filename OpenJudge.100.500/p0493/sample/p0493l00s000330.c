#include <stdio.h>

int main()
{ int X;
    scanf("%d", &X);
  int B=X/500;
  int C=(X-500*B)/5;
  printf("%d", 1000*B+5*C);
    return 0;
}
