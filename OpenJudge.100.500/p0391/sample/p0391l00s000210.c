#include <stdio.h>
#include <string.h>
#include <ctype.h>

void prnit(char str[], int a, int b)
{
    for (int i = a; i <= b; i++) {
        printf("%c", str[i]);
    }
    printf("\n");
}

void reverse(char str[], int a, int b)
{
    for (int i = 0; i < ((b - a + 1) / 2); i++) {
        char ch = str[a + i];
        str[a + i] = str[b - i];
        str[b - i] = ch;
    }
}

void replace(char str[], int a, int b, char p[])
{
    for (int i = 0; i < ((b - a) + 1); i++) {
        str[a + i] = p[i];
    }   
}


int main(int argc, char *argv[])
{
    int q;
    char str[1001];
    char op[20];
    int a, b;
    char p[1001];

    scanf("%s", str);
    scanf("%d", &q);
    for (int i = 0; i < q; i++) {
        scanf("%s", op);
        scanf("%d", &a);
        scanf("%d", &b);
        if (strcmp(op, "replace") == 0) {
            scanf("%s", p);
            replace(str, a, b, p);
        }
        if (strcmp(op, "print") == 0) {
            prnit(str, a, b);
        }
        if (strcmp(op, "reverse") == 0) {
            reverse(str, a, b);
        }
    }

    return 0;
}

