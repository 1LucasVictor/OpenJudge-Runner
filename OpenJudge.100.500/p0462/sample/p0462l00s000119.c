#include<stdio.h>
#include<math.h>
int main()
{
    long long int a, d, c;
   double b;
    scanf("%lld %lf", &a, &b);
    c = round(b*100.0);
    d = (a*c)/100;
   printf("%lld\n",d);

    return 0;
}
