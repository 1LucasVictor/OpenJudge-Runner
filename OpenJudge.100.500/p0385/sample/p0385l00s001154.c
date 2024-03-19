#include <stdio.h>

int main() {
    char c;
    int i, s = 0;

    while(1) {
        c = getchar();
        if (c == '\n') {
            if (s <= 0) break;
            printf("%d\n", s);
            s = 0;
        }else{
            i = c - '0';
            s += i;
        }
    }
    return 0;
}
