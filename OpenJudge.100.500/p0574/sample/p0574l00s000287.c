#include <stdio.h>

int main(void) {
    char s[5];
    int i = 0;
    int f = 0;

    scanf("%s", s);

    while(i < 4) {
        if (s[i] == s[i+1]) {
            printf("Bad\n");
            f++;
            break;
        }
        i++;
    }

    if (i == 4 && f == 0)
        printf("Good\n");

    return 0;
}