#include <stdio.h>
#define N 1200

int main(void) {

    int i;
    char str[N];
    char ch;

    for (i = 0; i < N; i++) {
        str[i] = 0;
    }

    i = 0;
    while (1) {
        scanf("%c", &ch);
        if ((ch >= 16*4 + 1) && (ch <= 16*5 + 10)) {
            ch += 16*2;
        } else if ((ch >= 16*6 + 1) && (ch <= 16*7 + 10)) {
            ch -= 16*2;
        }
        str[i] = ch;
        i++;
        if (ch == '\n') {
            break;
        }
    }

    printf("%s", str);

    return 0;

}