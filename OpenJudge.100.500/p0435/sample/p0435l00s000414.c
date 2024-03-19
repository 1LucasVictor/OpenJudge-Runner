#include<stdio.h>

#define SIZE 200000

int main(void)
{
  int N,D;
  int x,y;
  int ans = 0,dd,cd;
  int i;

  scanf("%d %d",&N,&D);

  cd = D * D;
  for (i = 0; i < N; i++)
  {
    scanf("%d %d",&x,&y);
    dd = (x * x) +(y * y);
    if(dd <= cd) ans++;
  }

  printf("%d\n",ans);

  
  return 0;
}