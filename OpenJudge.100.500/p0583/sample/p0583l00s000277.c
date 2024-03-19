#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n, a, b, c, d;
    char *s;

    scanf("%d%d%d%d%d", &n, &a, &b, &c, &d);

    s = calloc(n, sizeof(char));

    scanf("%s", s);

    int a_1 = a;
    int b_1 = b;

    if (c < d) {
        while (a_1 != a || b_1 != d) {
            int i = 0;
            int a_2 = a_1;
            int b_2 = b_1;

            if (b_1 != d && s[b_1] == '.')
                b_2 += 1;
            else if(b_1 != d && s[b_1 + 1] == '.')
                b_2 += 2;
            if (a_1 != c && s[a_1] == '.' && b_1 != a_1 + 1)
                a_2 += 1;
            else if (a_1 != c && s[a_1 + 1] == '.' && b_1 != a_1 + 2)
                a_2 += 2;

            if (a_1 == a_2 && b_1 == b_2)
                break;
            else {
                a_1 = a_2;
                b_1 = b_2;
            }
        }
    }

    if (c > d) {
        while (a_1 != a || b_1 != d) {
            int i = 0;
            int a_2 = a_1;
            int b_2 = b_1;


            if (s[b_1 - 2] == '.' && s[b_1] == '.' && a_2 < b_2)
                a_2 = b_2 + 1;

            if (b_1 != d && s[b_1] == '.')
                b_2 += 1;
            else if(b_1 != d && s[b_1 + 1] == '.')
                b_2 += 2;
            if (a_1 != c && s[a_1] == '.' && b_1 != a_1 + 1)
                a_2 += 1;
            else if (a_1 != c && s[a_1 + 1] == '.' && b_1 != a_1 + 2)
                a_2 += 2;

            if (a_1 == a_2 && b_1 == b_2)
                break;
            else {
                a_1 = a_2;
                b_1 = b_2;
            }
        }
    }
    
    if (a_1 == c && b_1 == d)
        printf("Yes\n");
    else
        printf("No\n");

    return 0;
}