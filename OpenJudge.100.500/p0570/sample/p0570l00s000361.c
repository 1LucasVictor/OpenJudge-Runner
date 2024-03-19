#include<stdio.h>
int main()
{
  int a,b;
  scanf("%d %d",&a,&b);
  int c=(a+b)/2;
  if((a+b)%2==0)
    printf("%d\n",c);
  else printf("IMPOSSIBLE\n");
}