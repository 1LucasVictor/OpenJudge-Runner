#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
long long a,b;
scanf("%lld %lld",&a,&b);
//if (abs(c-a)<=d || abs (b-a)<=d && abs (c-b)<=d)
if ((a*b)%2==0)
printf("Even");
else
printf("Odd");
}
