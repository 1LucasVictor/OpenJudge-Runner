/*
# C++
clang++ -std=c++17 filename.cpp -o outname
# C
clang filename.c -o outname
*/

#ifdef __linux__
    #define gcd __gcd
#endif

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main() {
    long long a, b, c;
    scanf("%lld %lld", &a, &b);
    c = (a+b)/2;
    if (abs(a-c) == abs(b-c)) {
        printf("%lld\n", c);
    } else {
        printf("IMPOSSIBLE\n");
    }
    return 0;
}