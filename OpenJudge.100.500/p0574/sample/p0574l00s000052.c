#include <stdio.h>

int main(void)
{
    char s[4];
    int n[4];
    int i, flg = 0;

    scanf("%s", s);

    for (i = 0; i < 4; i++) {
        n[i] = s[i] - '0';
    }

    for (i = 0; i < 3; i++) {
        if (n[i] == n[i + 1]) {
            flg = 1;
            break;
        }
    }

    if (flg == 1) {
        printf("Bad\n");
    } else {
        printf("Good\n");
    }

    return 0;
}
