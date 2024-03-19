#include<stdio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>

int main()

{
    long long int n,a,b;
    scanf("%lld",&n);
    a=(n/500)*1000;
    b=((n-(n/500)*500)/5)*5;
    printf("%lld\n",a+b);

    return 0;
}
