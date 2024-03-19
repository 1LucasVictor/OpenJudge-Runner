#include<stdio.h>

int gcm(int a, int b)
{

    int h, i, k = 1;

    if(a > b)
        h = a;
    else
        h = b;

    for(i = 1; i <= h; i++) {
        if(a % i == 0 && b % i == 0) {
            a /= i;
            b /= i;
            k *= i;
        }
    }

    return k * a * b;
}

int lcm(int a, int b)
{

    int temp, x, k = 1;

    if(a < b) {
        temp = a;
        a = b;
        b = temp;
    }

    while(k) {
        x = a % b;
        if(x == 0)
            return b;

        a = b % x;
        if(a == 0)
            return x;

        b = x % a;
        if(b == 0)
            return a;
    }

}

int main(void)
{

    int n, a, b, c, i;

    while(scanf("%d %d", &a, &b) != EOF)
        printf("%d %d\n", lcm(a, b), gcm(a, b));

    return 0;
}