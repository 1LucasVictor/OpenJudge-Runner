#include<stdio.h>
#include<stdlib.h>
main()
{
  int a,b,c,val;
  scanf("%d %d %d",&a,&b,&c);
  val=c-(a-b);
  if(val<0)
    val=0;
 printf("%d",val);
}