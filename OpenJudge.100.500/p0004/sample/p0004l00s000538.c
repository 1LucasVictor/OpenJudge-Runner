#include <stdio.h>

long int gcd(long int x, long int y);

int main(void)
{
    long int a, b, c;

    while(scanf("%ld %ld", &a, &b) != EOF) {
       c = gcd(a,b);
       printf("%ld %ld\n", c, a/c*b); // a*b/cだと long int では扱えないので NG
    }

    return (0);
}


long int gcd(long int x, long int y)
{
    long int r = 0;
    
    if(x < y) {
        r = x;
        x = y;
        y = r;
    }

    while(y > 0) {
        r = x%y;
        x = y;
        y = r;
    }

    return (x);
}