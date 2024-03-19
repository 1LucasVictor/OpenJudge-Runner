#include<stdio.h>
#include<math.h>
void main()
{
  int a,b,s,k;
  scanf("%d %d",&a,&b);
  s=a+b;
  k=s/2;
  if((a%2==1&&b%2==1)||(a%2==0&&b%2==0))
   printf("%d",k);
   else
   printf("impossible");
}
