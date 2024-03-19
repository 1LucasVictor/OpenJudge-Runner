#include<stdio.h>

int main(void)
{
  int a,b,c,ans;
  scanf("%d%d%d",&a,&b,&c);
  ans=c-(a-b);
  if(ans<0)
    printf("0");
  else
    printf("%d",ans);
  return 0;
}
