#include <stdio.h>
#include <string.h>

#define N 100001

char gStack[N];
int gSNum = 0;

void push(char);

int main(void) {
    int i, cnt = 0;
    char s[N];

    scanf("%s", s);

    i = strlen(s) - 1;

    while (i >= 0) {
        if (s[i] != s[i - 1] && i > 0) {
            cnt++;
            i-=2;
        } else if (gSNum != 0 && gStack[gSNum - 1] != s[i]) {
            cnt++;
            gSNum--;
            i--;
        } else {
            push(s[i]);
            i--;
        }
    }

    printf("%d\n", cnt * 2);

    return 0;
}

void push(char x) {
    gStack[gSNum] = x;
    gSNum++;
}


