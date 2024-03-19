#include <stdio.h>

long long int gcd(long long int x, long long int y){
    if (y == 0) return x;
    else return gcd(y, x % y);
    
}

int main(){
    long long int n, m, g, l;
    
    while (scanf("%lld %lld", &n, &m) != EOF) {
        g = gcd(n,m);
        l =  (n / g) * m;
        printf("%lld %lld\n",g,l);
    }
}