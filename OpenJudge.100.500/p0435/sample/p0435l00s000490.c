#include<stdio.h>

#define SIZE 200000

int main(void)
{
  long long int N,D;
  long long int x,y;
  long long int dd,cd;
  int ans = 0,i;

  scanf("%lld %lld",&N,&D);

  cd = D * D;
  for (i = 0; i < N; i++)
  {
    scanf("%lld %lld",&x,&y);
    dd = (x * x) +(y * y);
    if(dd <= cd) ans++;
  }

  printf("%d\n",ans);

  return 0;
}