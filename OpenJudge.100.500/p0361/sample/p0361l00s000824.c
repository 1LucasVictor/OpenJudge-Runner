#include<stdio.h>
int main(void)
{
  int S, h, m, s;
  scanf("%d", &S);
  s = S % 60;
  m = (S - s) / 60 % 60;
  h = ((S - s) / 60 - m) /60;
  printf("%d:%d:%d\n", h, m, s );
}

