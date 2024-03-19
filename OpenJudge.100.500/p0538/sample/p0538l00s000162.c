#include<stdio.h>

int main(void)
{
  int a,b,ans;
  scanf("%d %d",&a,&b);
  
  if(a > 9 || b > 9){
    printf("-1");
  }else{
    ans = a * b;
    printf("%d",ans);
  }
}