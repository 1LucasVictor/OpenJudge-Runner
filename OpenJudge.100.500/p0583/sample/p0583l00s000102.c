#include <stdio.h>

int n;
int a, b, c, d;
char str[200005];

int check(int l, int r);
int space(int l, int r);

int main()
{
    int f = 0;
    
    scanf("%d %d %d %d %d", &n, &a, &b, &c, &d);
    scanf("%s", str);

    --a; --b;
    
    // [a, c), [b, d)
    if (a <= b && d <= c) {
        if (check(a, c) && check(b, d) &&
            space(b, d)) {
            f = 1;
        }
    }
    else if (b <= a && c <= d) {
        if (check(a, c) && check(b, d) &&
            space(a, c)) {
            f = 1;
        }
    }
    else {
        if (check(a, c) && check(b, d)) {
            f = 1;
        }
    }

    puts(f ? "Yes" : "No");
    
     return 0;
}

int check(int l, int r)
{
    int res = 1;
    for (int i = l; i < r - 1; i++) {
        if (str[i] == '#' && str[i + 1] == '#') {
            res = 0;
        }
    }

    return res;
}

int space(int l, int r)
{
    int res = 0;

    for (int i = l; i < r - 2; i++) {
        if (str[i] == '.' && str[i + 1] == '.' && str[i + 2] == '.') {
            res = 1;
        }
    }

    return res;
}
