#include <stdio.h>

int gcd(int x, int y)
{
    int r;
    while((r = x % y) != 0){
        x = y;
        y = r;
    }
    return y;
}

int lcm(int x, int y){
    double ans;
    ans = (double)x * (double)y / (double)gcd(x, y);
    return (int)ans;
}

int main(void)
{
    long a, b;
    while (scanf("%d %d", &a, &b) == 2) {
        printf("%d %d\n",gcd(a, b), lcm(a, b));
    }
    return 0;
}