#include <stdio.h>

int main(void) {

    char *str;
    int i;
    int flagA;
    int flagB;

    scanf("%s", str);

    flagA = 0;
    flagB = 0;
    for (i = 0; i < 3; i++) {
        if (str[i] == 'A') {
            flagA++;
        }
        if (str[i] == 'B') {
            flagB++;
        }
    }
    
    if (flagA == 3 || flagB == 3) {
        printf("%s\n", "No");
    } else {
        printf("%s\n", "Yes");
    }
    return 0;

}