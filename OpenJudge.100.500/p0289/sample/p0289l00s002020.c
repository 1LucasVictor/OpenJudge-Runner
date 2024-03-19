#include <stdio.h>

int gcd(int, int);

int main(void)
{
    int x,y,s;
    int i;

    scanf("%d %d", &x, &y);
    s = gcd(x,y);
    printf("%d\n", s);
    return (0);
}
/*xとyの最大公約数を返す*/
int gcd(int x, int y){
    int n;
    int r;

    if (x < y){
        n = y;
        y = x;
        x = n;
    }
    while (y > 0){
        r = x % y;
        x = y;
        y = r;
    }
    return (x);
    
}
