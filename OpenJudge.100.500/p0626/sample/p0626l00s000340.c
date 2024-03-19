#include<stdio.h>
#include<math.h>

int calc(int x)
{
  int ret = 0;
  while(x % 100 == 0)
  {
    x /= 100;
    ret++; //100で割り切れる回数
  }
  return ret;
}

int main(void)
{
  int D, N, x;
  int count = 0;
  scanf("%d %d", &D, &N);
  x = pow(100, D) * N;

if((0 <=calc(x)) && (2 >= calc(x)))
{
  printf("%d\n", x);
}
  return 0;
}
