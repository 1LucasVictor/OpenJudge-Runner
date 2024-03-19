#include<stdio.h>
int main(void)
{
  int n,ans=1,ans2=0,d,i;
  scanf("%d %d",&d,&n);
  for(i=1;i<=d;i++){
    ans*=100;
  }

  for(i=1;i<=n;i++){
    ans2+=ans;
    }

    printf("%d",ans2);

  return 0;

}