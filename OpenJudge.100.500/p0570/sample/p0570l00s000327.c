#include<stdio.h>
int main()
{
  long long int a,b,c,des;
  scanf("%lld %lld",&a,&b);
  if(b>a)
    des=b-a;
  else
    des=a-b;
  if(des%2==1)
    printf("IMPOSSIBLE\n");
  else
  {
    if(b>a)
    	c=a+des/2;
    else
      	c=b+des/2;
    printf("%d\n",c);
  }
  return 0;
}