#include<stdio.h>
#include<string.h>
typedef long long ll;
void main(void)
{
  int x,ans;
  scanf("%d",&x);
  ans=(x/500)*1000+((x%500)/5)*5;
  printf("%d",ans);
  
}