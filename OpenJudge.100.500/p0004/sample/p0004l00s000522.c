#include <stdio.h>

long gcd(long x, long y) {
    
    long z;
    
    while ((z = x % y) != 0) {
        x = y;
        y = z;
    }
    
    return y;
    
}

long lcm(long x, long y) {
    
    return x * y / gcd(x, y);;
}

int main(int argc, const char * argv[])
{

    long a, b;
    
    while (scanf("%ld %ld", &a, &b) != EOF) {
        printf("%ld %ld\n", gcd(a, b), lcm(a, b));
    }
    
    return 0;
}