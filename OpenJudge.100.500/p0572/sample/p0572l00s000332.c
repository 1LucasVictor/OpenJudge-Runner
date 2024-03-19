#include<stdio.h>
#include<math.h>

int main()
{
  int L, R;
  int a = 0, t, t2;

  scanf("%d", &L);
  scanf("%d", &R);

  t = L % 2019;
  t2 = (L+1) % 2019;

  if(L+(2019-t) < R){
    printf("%d", a);
  }

  printf("%d", (t*t2)%2019);

  return 0;

}