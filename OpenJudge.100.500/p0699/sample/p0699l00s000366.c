// https://atcoder.jp/contests/abc042/tasks/abc042_a

#include <stdio.h>
#define forn(i,L,R) for (int i = L; i < R; i++)
#define ll long long
#define wez(n) int (n); scanf("%d",&(n))
#define getString(x) scanf("%s", x)
#define getInt(a) scanf("%d", &a)
#define swap(x,y) { x = x + y; y = x - y; x = x - y; }

int main(){
    wez(a);
    wez(b);
    wez(c);
    if (a > b)
        swap(a, b);
    if (b > c)
        swap(b, c);
    if (a > b)
        swap(a, b);
    if (a == 5 && b == 5 && c == 7)
        printf("YES\n");
    else
        printf("NO\n");
}