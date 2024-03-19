#include <stdio.h>

int gcd(int x, int y);

int main(void)
{
    long int a,b;
    while (scanf("%ld %ld", &a, &b) != EOF){
        printf("%ld %ld\n", gcd(a, b), a / gcd(a, b) * b);
    }  
    return (0);
}
/*ユークリッドを用いた最大公約数の計算*/
int gcd(int x, int y)
{
    if (y == 0){
        return (x);
    }else{
        return (gcd(y, x % y));
    }
}

