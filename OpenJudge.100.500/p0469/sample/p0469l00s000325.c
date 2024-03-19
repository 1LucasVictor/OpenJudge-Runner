#include<stdio.h>
int main()
{
int a,b,c,i,d;
  d=0;
  scanf("%d %d %d",&a,&b,&c);
  for(i=b;i<=c;++i)
  {
  if(i%a==0) d++;
  }
  
  if(d>0) printf("OK");
  else printf("NG");
  
return 0;
}