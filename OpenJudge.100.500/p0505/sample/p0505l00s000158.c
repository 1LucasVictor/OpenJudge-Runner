#include<stdio.h>
int main()
{
long long int a,b,c,i;
  c=0;
  scanf("%lld %lld",&a,&b);
int d[b];
  for(i=0;i<b;++i)
  {
  scanf("%lld",&d[i]);
  c=c+d[i];
  }
  if(c<a) printf("No");
  else printf("Yes");
return 0;
}