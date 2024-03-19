#include<stdio.h>
int main()
{
    long long int a,b,c,d,e,f;
    scanf("%lld%lld",&a,&b);
    for(;a>=0;)
        {
            a-=b;
        }
       d=a+b;
      c=abs(a);
      if(c>=d)
      {
          printf("%lld\n",d);
      }
      else printf("%lld\n",c);
      return 0;
}
