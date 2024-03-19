#include <stdio.h>

int main()
{
        int n, a, b, c;
        scanf("%d", &n);
        while (n--) {
                scanf("%d%d%d", &a, &b, &c);
                a = a * a;
                b = b * b;
                c = c * c;
                int m = (a + b == c) + (b + c == a) + (c + a == b);
                printf(m ? "YES\n" : "NO\n");
        }
        return 0;
}

