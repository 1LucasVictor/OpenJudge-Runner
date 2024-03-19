#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
long long a,b,c,d,e,f;
scanf("%lld %lld",&a,&b);
//if (abs(c-a)<=d || abs (b-a)<=d && abs (c-b)<=d)
/*if ((a*b)%2==0)
printf("Even");
else
printf("Odd");*/
d=a+b;
e=a-b;
f=a*b;
if (d>=e && d>=f)printf("%lld",d);

else if (e>=d && e>=f)printf("%lld",e);
else printf("%lld",f);
}
