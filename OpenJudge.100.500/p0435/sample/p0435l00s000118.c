#include<stdio.h>
#include<math.h>
int main()
{
  long long int  i,n,d,c=0;

  scanf("%lld%lld",&n,&d);

  for(i=0;i<n;i++)
  {
      double j;
   long long int p,q;
     scanf("%lld%lld",&p,&q);
     j=sqrt((p*p)+(q*q));
     if(j<=d)
     {
         c++;
     }
  }
printf("%lld\n",c);
return 0;
}

