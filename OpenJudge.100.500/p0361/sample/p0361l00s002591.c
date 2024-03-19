#include<stdio.h>
int main(void)
{
  int S, s, m, h;

  scanf("%d",&S);

  if(S<=86400 && S>=0)
  {
    h = S / 3600;
    m = (S - h*3600) / 60;
    s = S - (h*3600 + m*60);
  }

  printf("%d:%d:%d\n",h,m,s);

  return 0;

}
