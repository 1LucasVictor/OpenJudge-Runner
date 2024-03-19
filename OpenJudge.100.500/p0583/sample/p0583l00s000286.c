#include <stdio.h>

int main() {
    char s[200005];
    for (int i =0; i < 200000; i++) {
        if ((s[i] == '#')&& (s[i + 1] == '#')) {
            printf("No");
            return 0;
        }
    }
    printf( "Yes");
    return 0;
}