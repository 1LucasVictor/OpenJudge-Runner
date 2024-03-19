#include<stdio.h>
 
int main()
{
   int a,b,t;
  scanf("%d%d%d",&a,&b,&t);
  int ans=(t+0.5)/a;
  int ans1=b*ans;
  printf("%d",ans1);
}