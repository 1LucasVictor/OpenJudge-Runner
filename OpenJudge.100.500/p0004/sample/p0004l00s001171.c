#include <stdio.h>

int gcd(int m, int n)
{
    int x;
    while (n != 0){
        x = n;
        n = m % n;
        m = x;
    }
    return (m);
}

int lcm(int m, int n)
{
    return ((m / gcd(m, n)) * n);
}


int main(void)
{
    int a, b;
    int t;

    while (scanf("%d %d", &a, &b) != EOF){
        if (a < b){
            t = a;
            a = b;
            b = t;
        }
        printf("%d %d\n", gcd(a, b), lcm(a, b));
    }
    return (0);
}