#include <stdio.h>

int main(void) {
    char str[4];
    int i;
    int flagA, flagB;

    // input
    scanf("%s", str);

    flagA = 0;
    flagB = 0;
    for (i = 0; i < 3; i++) {
        if (str[i] =='A') {
            flagA += 1;
        }
        if (str[i] =='B') {
            flagB += 1;
        }
    }

    if (flagA == 3) {
        printf("%s\n", "No");
    } else if (flagB == 3) {
        printf("%s\n", "No");
    } else {
        printf("%s\n", "Yes");
    }
    return 0;
}
