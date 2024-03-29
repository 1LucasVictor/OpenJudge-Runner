#include <stdio.h>

void print(char s[], int x, int y)
{
    int i;
    for (i = x; i <= y; i++)
        putchar(s[i]);
    putchar('\n');
}

void reverse(char s[], int x, int y)
{
    int i;
    for (i = 0; i < (y - x) / 2; i++) {
        char c;
        c = s[x + i];
        s[x + i] = s[y - i];
        s[y - i] = c;
    }
}

void replace(char s1[], int x, int y, char s2[])
{
    int i;
    for (i = x; i <= y; i++) {
        s1[i] = s2[i - x];
    }
}


int main(void)
{
    char str[1001];
    scanf("%s", str);

    int q;
    scanf("%d", &q);

    int i;
    for (i = 0; i < q; i++) {
        char command[8];
        scanf("%s", command);

        int a, b;
        scanf("%d", &a);
        scanf("%d", &b);

        if (command[0] == 'p')
            print(str, a, b);
        else if (command[2] == 'v')
            reverse(str, a, b);
        else if (command[2] == 'p') {
                char p[1000];
                scanf("%s", p);
                replace(str, a, b, p);
        }
    }
        return 0;
}